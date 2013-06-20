PROG := TimingDelay
COPTS := '-std=gnu99' -D_GNU_SOURCE '-falign-functions=4' -ffast-math -Wextra -Wall -Wno-unused-parameter -fno-strict-aliasing -g -lm '-D_JHC_GC=_JHC_GC_JGC' '-D_JHC_CONC=_JHC_CONC_PTHREAD' -pthread '-D_JHC_STANDALONE=0'
INCLUDE := -Itmp/cbits -Itmp
RTSFILES := tmp/rts/profile.c tmp/rts/rts_support.c tmp/rts/gc_none.c tmp/rts/jhc_rts.c tmp/lib/lib_cbits.c tmp/rts/gc_jgc.c tmp/rts/stableptr.c tmp/rts/conc.c

all: ${PROG}
${PROG}: ${PROG}.c main.c
	gcc ${RTSFILES} ${INCLUDE} $^ -o $@ ${COPTS}

${PROG}.c: ${PROG}.hs
	ajhc -fdebug -fpthread --tdir=tmp -C -o $@ $<

clean:
	rm -f ${PROG} ${PROG}.c *~
	rm -rf tmp

.PHONY: clean
