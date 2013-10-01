PROG := Main
TDIR := tdir

all: ${PROG}
${PROG}: Main.hs
	ajhc -fno-global-optimize -fdebug -pjhc --tdir=${TDIR} Main.hs -o ${PROG}

rungdb: all
	gdb -x gdb.script ${PROG}

clean:
	rm -f ${PROG} *~
	rm -rf ${TDIR}

.PHONY: clean
