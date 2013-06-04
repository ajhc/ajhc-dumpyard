PROG := Main
HLSRC := jhc-conc-pthread/Jhc/Conc.hs jhc-conc-pthread/cbits/OSThreads.c jhc-conc-pthread/jhc-conc-pthread.yaml

all: ${PROG}
${PROG}: Main.hs jhc-conc-pthread.hl
	ajhc --tdir=tmp -L. -pjhc-conc-pthread -o $@ $<

jhc-conc-pthread.hl: ${HLSRC}
	ajhc --build-hl jhc-conc-pthread/jhc-conc-pthread.yaml -o $@

clean:
	rm -f jhc-conc-pthread.hl
	rm -rf tmp

.PHONY: clean
