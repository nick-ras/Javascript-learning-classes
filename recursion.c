#include <stdio.h>

int recursion(int n)
{
	if (n == 1)
		return n;
	else
		return 1 + recursion(n - 1);
}

int main()
{
	int n = 3;

	printf("%d", recursion(n));
}