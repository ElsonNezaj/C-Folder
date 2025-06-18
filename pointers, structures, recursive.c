#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void easyPointers()
// {
// 	int myAge = 13;

// 	int *pointer = &myAge;

// 	printf("%p\n", pointer);
// 	printf("%d\n", *pointer);

// 	int myArray[5] = {1, 2, 3, 4, 5};
// 	int *arrayPointer = myArray;

// 	printf("%p\n", (arrayPointer + 2));
// }

// void reverseString(const char *value)
// {
// 	int len = strlen(value);
// 	int i, j = 0;
// 	char *newString = (char *)malloc((len + 1) * sizeof(char));
// 	if (newString == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return;
// 	}
// 	for (i = len - 1; i >= 0; i--)
// 	{
// 		newString[j] = value[i];
// 		j++;
// 	}
// 	printf("%s\n", newString);
// 	free(newString);
// }

// int fibonacci(int n, int a, int b)
// {
// 	if (n == 0)
// 	{
// 		return 0;
// 	}
// 	else
// 	{
// 		printf("%d,", a);
// 		return fibonacci(n - 1, a + b, a);
// 	}
// }

// int minRecursive(int n, int T[n])
// {
// 	if (n == 1)
// 	{
// 		return T[0];
// 	}
// 	int minOfTheRest = minRecursive(n - 1, T + 1);
// 	return (T[0] < minOfTheRest) ? T[0] : minOfTheRest;
// }

// int findSum(int n, int T[n])
// {
// 	if (n == 1)
// 	{
// 		return T[0];
// 	}

// 	return T[0] + findSum(n - 1, T + 1);
// }

// int isSorted(int n, int T[n])
// {
// 	if (n == 1)
// 	{
// 		return 1;
// 	}

// 	return (T[0] > T[1]) ? 0 : isSorted(n - 1, T + 1);
// }

// int calculateFactorial(int n)
// {
// 	if (n == 1)
// 	{
// 		return n;
// 	}
// 	return n * calculateFactorial(n - 1);
// }

int main()
{
	// char *str = (char *)malloc(100 * sizeof(char));
	// str = "Hello World";
	// First Pointers Function , easy usage of pointers
	// easyPointers();
	// reverseString(str);
	// fibonacci(7, 0, 1);

	// char string[100];
	// scanf("%s", string);
	// printf("%s", string);

	return 0;
}