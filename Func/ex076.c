#include <stdio.h>
void kei(int a, int b,int *g,float *h);
main()
{
	int a, b, c;
	float d;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	kei(a, b, &c, &d);
	printf("���v��%d�A  ",c );
	printf("���ς�%.2f", d);
}
void kei(int a, int b, int *g, float *h)
{
	*g = a + b;
	*h = (a+b) / 2.0;
	return;
}