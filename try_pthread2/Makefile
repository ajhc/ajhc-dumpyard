PROG := Main

all: ${PROG}
${PROG}: Main.hs
	ajhc --tdir=tmp -pjhc -o $@ $<

clean:
	rm -f ${PROG}
	rm -rf tmp

.PHONY: clean
