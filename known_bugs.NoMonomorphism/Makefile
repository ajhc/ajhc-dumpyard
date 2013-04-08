PROG = NoMonomorphism

all: $(PROG) gdb.log

%: %.hs
	../ajhc_dump_code.sh --tdir=./rtstdir -fdebug -o $@ $< > ajhc_dump_code.log 2>&1

gdb.log: $(PROG)
	gdb -x script.gdb $(PROG) > gdb.log

clean:
	rm -f *~ $(PROG) *.grin *.log *.jhc_core *.datalog *.dot $(PROG)_code.c
	rm -rf rtstdir
