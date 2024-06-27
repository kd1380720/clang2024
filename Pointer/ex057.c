#include <stdio.h>
main()
{

	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl,i,s;
	p_tbl = tbl[0];
	printf("2次元配列tblの内容\n");
	for (i = 0; i < 3; i++)
	{
		for (s = 0; s < 3; s++) 
		{
			printf(" %d", *p_tbl++);//表示後に次に進む
		}
		printf("\n");
	}

}
