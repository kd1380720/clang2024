#include <stdio.h>
void kei(int a, int b,int *g,float *h);
main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	kei(a, b, &c, &d);
	printf("合計は%d、  ",c );
	printf("平均は%.2f", d);
}
void kei(int a, int b, int *g, float *h)
{
	*g = a + b;
	*h = (a+b) / 2.0;
	return;
}