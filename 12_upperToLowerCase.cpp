// C++ program to convert a string from
// upper to lower case.
#include<stdio.h>
const int x = 32;

// Converts a string to lowercase
char * toLowerCase(char *a)
{
	for (int i=0; a[i]!='\0'; i++)
		a[i] = a[i] | x;

	return a;
}

// Driver Code
int main()
{
	char str[] = "HELLO";
	printf("%s", toLowerCase(str));
	return 0;
}
