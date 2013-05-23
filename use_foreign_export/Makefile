PROG := FibHs
CSRCS := CMain.c tmp/rts/profile.c tmp/rts/rts_support.c tmp/rts/gc_none.c tmp/rts/jhc_rts.c tmp/lib/lib_cbits.c tmp/rts/gc_jgc.c tmp/rts/stableptr.c
CFLAGS := '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -DNDEBUG -O3 '-D_JHC_GC=_JHC_GC_JGC' -D_JHC_STANDALONE=0

all: ${PROG}
${PROG}: hs_main.c
	gcc -Itmp/cbits -Itmp ${CFLAGS} -o $@ ${CSRCS} $<

hs_main.c: Main.hs Fib.hs
	../ajhc_dump_code.sh -fffi -fno-standalone --tdir=tmp -C -o $@ $< > ajhc_dump_code.log 2>&1

clean:
	rm -f ${PROG} *~ hs_main.c *.grin *.log *.jhc_core *.datalog *.dot
	rm -rf tmp

.PHONY: clean
