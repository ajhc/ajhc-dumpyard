PROG := Main

all: ${PROG}
${PROG}: Main.hs
	ajhc -fdebug -fpthread --tdir=tmp -o $@ $<

clean:
	rm -f ${PROG} *~
	rm -rf tmp

.PHONY: clean
