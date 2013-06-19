PROG := Main

all: ${PROG}
${PROG}: Main.hs
	ajhc -fdebug --tdir=tmp -o $@ $<

clean:
	rm -f ${PROG} *~
	rm -rf tmp

.PHONY: clean
