#include <stdio.h>

int main() {
	int myAge = 13;
	
	int* pointer = &myAge;
	
	printf("%p\n", pointer);
	printf("%d", *pointer);
	
	return 0;
}