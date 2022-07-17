// C++ program to convert a string from
// lower to upper case.
#include<stdio.h>

const int x = 32;

// Converts a string to uppercase
char *toUpperCase(char *a)
{
	for (int i=0; a[i]!='\0'; i++)
		a[i] = a[i] & ~x;

	return a;
}

// Driver Code
int main()
{
	char str[] = "abc";

	//Here it's recommended to use character array
	//as it's stored in read-write area.
	//If a pointer is used it's stored
	//in read-only memory as a string literal.

	printf("%s", toUpperCase(str));

	return 0;
}
