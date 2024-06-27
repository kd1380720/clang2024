#include <stdio.h>
main()
{
	int a, b , work;
	a = 5;
	b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf(" a = %d b = %d", a, b);
}