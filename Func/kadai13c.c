#include<stdio.h>
void moji(int a,int b,int *c,int *d);
main()
{
	int a = 10, b = 20,c,d;
	printf("開始実行前の値:\n");
	printf("a = %d    b = %d\n", a, b);
	moji(a, b, &c, &d);
	printf("開始実行後の値:\n");
	printf("a = %d    b = %d\n", c, d);
}
void moji(int a, int b, int* c, int* d)
{
	*c = b;
	*d = a;
	return;
}