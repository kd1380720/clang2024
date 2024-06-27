#include <stdio.h>
main()
{
	int i, j,w, d[5] = { 30,7,25,16,10 };
	printf("”z—ñ d[ ] =");
	for ( i = 0 ,w = 0 ;i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
		printf(" %d", d[i]);
	}
	printf(" %d", d[i]);
}