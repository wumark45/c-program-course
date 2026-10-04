array:
	gcc -c my_array.c -o my_array.o

exchange_main:
	gcc -c exchange_sort_main.c -o exchange_sort_main.o

bubble_main:
	gcc -c main.c -o main.o

sorting:
	gcc -c my_sorting.c -o my_sorting.o

functions:
	gcc -c func.c -o func.o

bubble: sorting array functions bubble
	gcc my_sorting.o my_array.o func.o main.o -o bubble_sort

exch: sorting array functions exchange_main 
	gcc my_sorting.o my_array.o func.o exchange_sort_main.o -o exch_sort

