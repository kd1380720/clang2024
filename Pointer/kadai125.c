#include <stdio.h>
main()
{
	int i,s, data[] = {10,20,30,40,50,60,70,80,-999};
	int* pdata;
	pdata = data;
	printf("ポインタを固定で表示\n");
	printf("配列 data[ ] =");
	for (i = 0; *(pdata + i) != -999; i++)
	{
		printf("%d,", *(pdata + i));
	}
	printf("\nポインタを変化させてで表示\n");
	printf("配列 data[ ] =");
	for (pdata = data; *(pdata) != -999; pdata++)
	{
		printf("%d,",*pdata);
	}
}