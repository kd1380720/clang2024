#include <stdio.h>
main()
{
	char d[] = "orange";
	int i,c;
	c = 0;
	printf("������:");
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("%c", d[i]);
		c += 1;
	}
	printf("\n�������%d����", c);
}