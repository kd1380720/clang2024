#include <stdio.h>
main() 
{
	int i , gokei;
	i = 1;
	gokei = 0;
	for (i; i <= 10; i++) 
	{
		gokei += i;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a = %d\n", i, gokei);
	}
}