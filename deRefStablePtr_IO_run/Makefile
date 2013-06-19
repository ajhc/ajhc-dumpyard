PROG := Main

all: ${PROG}
${PROG}: Main.hs
	ajhc -pjhc --tdir=tmp -o $@ $<

clean:
	rm -f ${PROG} *core *.log *~
	rm -rf tmp

.PHONY: clean
