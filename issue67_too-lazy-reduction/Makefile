PROG = Main

all: $(PROG)

%: %.hs
	../ajhc_dump_code.sh --tdir=./rtstdir -fdebug -o $@ $< > ajhc_dump_code.log 2>&1

clean:
	rm -f *~ $(PROG) *.grin *.log *.jhc_core *.datalog *.dot $(PROG)_code.c
	rm -rf rtstdir
