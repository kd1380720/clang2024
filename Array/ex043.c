#include <stdio.h>
main()
{
	char d[] = "orange";
	int i,c;
	c = 0;
	printf("文字列:");
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("%c", d[i]);
		c += 1;
	}
	printf("\n文字列は%d文字", c);
}