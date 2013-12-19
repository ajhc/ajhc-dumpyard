#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "HsFFI.h"
#include "rts/rts_support.h"
#include "rts/profile.h"
#include "rts/gc.h"
#include "rts/conc.h"

jmp_buf jhc_uncaught;
int jhc_argc;
char **jhc_argv;
char *jhc_progname;

#ifdef __WIN32__
A_UNUSED const char *jhc_options_os =  "mingw32";
A_UNUSED const char *jhc_options_arch = "i386";
#elif defined(__ARM_EABI__)
A_UNUSED const char *jhc_options_os =  "nds";
A_UNUSED const char *jhc_options_arch = "ARM";
#else
A_UNUSED const char *jhc_options_os = "(unknown os)";
A_UNUSED const char *jhc_options_arch = "(unknown arch)";
#endif

void
hs_set_argv(int argc, char *argv[])
{
        jhc_argc = argc - 1;
        jhc_argv = argv + 1;
        jhc_progname = argv[0];
}

void A_NORETURN A_UNUSED A_COLD
jhc_exit(int n) {
        jhc_fflush_stdout();
        jhc_print_profile();
        exit(n);
}

void  A_NORETURN A_UNUSED  A_COLD
jhc_error(const char *s) {
        jhc_fflush_stdout();
        jhc_fputs_stderr(s);
        jhc_fputs_stderr("\n");
        jhc_exit(1);
}

void  A_NORETURN A_UNUSED  A_COLD
jhc_case_fell_off(int n) {
        jhc_fflush_stdout();
        jhc_printf_stderr("\n%s:%i: case fell off\n", __FILE__, n);
        abort();
}

#if _JHC_GC == _JHC_GC_JGC
void jhc_hs_init(gc_t gc,arena_t arena);
#else
void jhc_hs_init();
#endif

static int hs_init_count = 0;
void
hs_init(int *argc, char **argv[])
{
        if(!hs_init_count++) {
                jhc_conc_init();
                hs_set_argv(*argc,*argv);
#if JHC_isPosix
                struct utsname jhc_utsname;
                if(!uname(&jhc_utsname)) {
                        jhc_options_arch = (const char *) jhc_utsname.machine;
                        jhc_options_os   = (const char *) jhc_utsname.sysname;
                }
#endif
                setlocale(LC_ALL,"");
        }
}

void
hs_exit(void)
{
        if(!hs_init_count) {
                jhc_printf_stderr("hs_exit() called before hs_init()\n");
                abort();
        }
        if(!--hs_init_count) {
                jhc_exit(0);
        }
}
