#include <stdio.h>
void kei(int a, int b,int *g,float *h);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	kei(a, b, &c, &d);
	printf("‡Œv‚Í%dA  ",c );
	printf("•½‹Ï‚Í%.2f", d);
}
void kei(int a, int b, int *g, float *h)
{
	*g = a + b;
	*h = (a+b) / 2.0;
	return;
}