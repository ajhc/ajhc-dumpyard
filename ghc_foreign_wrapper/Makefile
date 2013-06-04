PROG := Main

all: ${PROG}
${PROG}: Main.hs foreign.c
	ghc -debug -fext-core Main.hs foreign.c

clean:
	rm -f ${PROG} ${PROG}_stub.h *.hi *.hcr *.o *~
	rm -rf tmp

.PHONY: clean
