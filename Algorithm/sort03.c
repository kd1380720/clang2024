#include <stdio.h>
main()
{
	int i, j,w, d[5] = { 30,7,25,16,10 };
	printf("�\�[�g�O\n");
	printf("�z�� d[ ] =");
	for (i = 0; i < 5; i++)
	{
		printf(" %d", d[i]);
	}
	printf("\n�\�[�g��\n");
	printf("�z�� d[ ] =");
	for ( i = 1,w = 0 ;i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j]) {
				break;
			}
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w; 
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf(" %d", d[i]);
	}
}