#include <stdio.h>
main()
{
	char d[] = "orange";
	int i,c;
	c = 0;
	printf("•¶Žš—ñ:");
	for (i = 0; d[i] != '\0'; i++)
	{
		printf("%c", d[i]);
		c += 1;
	}
	printf("\n•¶Žš—ñ‚Í%d•¶Žš", c);
}