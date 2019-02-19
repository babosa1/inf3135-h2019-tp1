FILENAME=tp1
cp=GUSW12017907 
CODE_permanent = GUSW12017907
cp.txt=CODE permanent
 
CC=gcc
EXEC= tp1
(EXEC):$(FILENAME).o
 $(CC) $(CFLAGS) -o $(EXEC) $(FILENAME).o
 (FILENAME).O: $(FILENAME).c
  $(CC) $(CFLAGS) -c $(EXEC) $(FILENAME).c
  cp=  GUSW12017907 
 CODE_permanent = GUSW12017907
 cp.txt = CODE permanent
 -c <CODE permanent>
 -i =cp.txt
 -o = code.txt
 tp1: tp1.o
 gcc -o tp1 tp1.o
 tp1.o: tp1.c
 gcc -Wall -g -o tp1.exe tp1.c
 ./tp1 -c CODE_permanent -i cp.txt -o code.txt
 ./tp1 -c CODE_permanent < cp.txt > code.txt
 
 ./tp1 -c CODE_permanent -o fichier.out
 cat data.txt | ./tp1 -c CODE_permanent
 test=  make tp1.o
 data= make tp1.o
 
 
