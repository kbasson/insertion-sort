insertionSort: insertionSort.c insertionSort.h
	gcc -Wall -std=c99 insertionSort.c -o insertionSort

clean:
	rm *.o
