#include <stdio.h>
main()
{
	int i,s, data[] = {10,20,30,40,50,60,70,80,-999};
	int* pdata;
	pdata = data;
	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[ ] =");
	for (i = 0; *(pdata + i) != -999; i++)
	{
		printf("%d,", *(pdata + i));
	}
	printf("\n�|�C���^��ω������Ăŕ\��\n");
	printf("�z�� data[ ] =");
	for (pdata = data; *(pdata) != -999; pdata++)
	{
		printf("%d,",*pdata);
	}
}