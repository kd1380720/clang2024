#include <stdio.h>
main()
{
	int i, g, a[5], b[3] = { 30,60,90 };
	g = 10;
	for (i = 0; i < 5; i++)
	{
		a[i] = g;
		g = g + 10;
	}
	for (i = 0; i < 5; i++) 
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	for (i = 0; i < 3; i++) {
		printf("b[%d]=%d\n", i, b[i]);
	}
}