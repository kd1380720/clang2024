#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i,go;
	printf("�z��a =");
	for (i = 0,go =0; i < 10 ;i++ )
	{
		printf(" %d",a[i]);
		go += a[i];
	}
	printf("\n");
	printf("���v = %d�@   ���� = %d\n", go, go / 10);
	printf("�z��b =");
	for (i = 0,go =0; i < 10; i++)
	{
		printf(" %d", b[i]);
		go += b[i];
	}
	printf("\n");
	printf("���v = %d�@   ���� = %d", go, go / 10);
}