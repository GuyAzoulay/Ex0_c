CC=gcc
FLAG= -Wall -g
AR=ar

all: mains maindloop maindrec 

loops: libcalssloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loppd: libcalssloops.so
mains: main.o libclassrec.a
		$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
		$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
		$(CC) $(FLAGS) -o maindloop main.o ./libclassrec.so -lm
	

		
libclassloops.a: basicClassification.o advancedClassification.o
		$(AR) -rcs libclassloops.a basicClassification.o advancedClassification.o	

libclassrec.a: basicClassification.o advancedClassificationRecursion.o 
		$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o 


libclassrec.so: basicClassification.o advancedClassificationRecursion.o
		$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.o advancedClassification.o
		$(CC) -shared -o libclassloops.so basicClassification.o advancedClassification.o

	
main.o: main.c NumClass.h
		$(CC) $(FLAG) -c main.c 

basicClassification.o: basicClassification.c NumClass.h
		$(CC) $(FLAG) -c basicClassification.c

advancedClassification.o: advancedClassification.c NumClass.h
		$(CC) $(FLAG) -c advancedClassification.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
		$(CC) $(FLAG) -c advancedClassificationRecursion.c


clean:
	rm -f *.o *.a *.so maindloop maindrec advancedClassificationRecursion mains 





