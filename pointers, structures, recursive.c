#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void easyPointers()
{
	int myAge = 13;

	int *pointer = &myAge;

	printf("%p\n", pointer);
	printf("%d\n", *pointer);

	int myArray[5] = {1, 2, 3, 4, 5};
	int *arrayPointer = myArray;

	printf("%p\n", (arrayPointer + 2));
}

void reverseString(const char *value)
{
	int len = strlen(value);
	int i, j = 0;
	char *newString = (char *)malloc((len + 1) * sizeof(char));
	if (newString == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	for (i = len - 1; i >= 0; i--)
	{
		newString[j] = value[i];
		j++;
	}
	printf("%s\n", newString);
	free(newString);
}

int fibonacci(int n, int a, int b)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		printf("%d,", a);
		return fibonacci(n - 1, a + b, a);
	}
}

int main()
{
	char *str = (char *)malloc(100 * sizeof(char));
	str = "Hello World";
	// First Pointers Function , easy usage of pointers
	// easyPointers();
	// reverseString(str);
	fibonacci(7, 0, 1);
	return 0;
}