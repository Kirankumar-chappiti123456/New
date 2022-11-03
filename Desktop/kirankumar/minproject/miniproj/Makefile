D=gcc
CFLAGS=-c
exe:	main.o display.o assign.o pattern.o cmpstrings.o alphabet.o
	$(D) $^ -o $@ -lpthread
main.o : main.c
	$(D) $(CFLAGS) $< -lpthread
display.o : display.c
	$(D) $(CFLAGS) $<
assign.o : assign.c
	$(D) $(CFLAGS) $<
pattern.o : pattern.c
	$(D) $(CFLAGS) $<
cmpstrings.o : cmpstrings.c
	$(D) $(CFLAGS) $<
alphabet.o : alphabet.c
	$(D) $(CFLAGS) $< -lpthread
clean:
	rm *.o
	rm -f exe
