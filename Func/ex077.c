#include <stdio.h>
void atai(int a, int b, int c,int *x,int *y);
main()
{
	int a, b, c,d,e;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);
	atai(a, b, c,&d,&e);
	printf("�ő�l = %d  �ŏ��l = %d", d, e);
}
void atai(int a, int b, int c, int *x, int *y)
{
	*x = a;
	if (b > *x) { *x = b; }
	if (c > *x) { *x = c; }
	*y = a;
	if (b < *y) { *y = b; }
	if (c < *y) { *y = c; }
	return;
}
