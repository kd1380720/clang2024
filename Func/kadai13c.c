#include<stdio.h>
void moji(int a,int b,int *c,int *d);
main()
{
	int a = 10, b = 20,c,d;
	printf("�J�n���s�O�̒l:\n");
	printf("a = %d    b = %d\n", a, b);
	moji(a, b, &c, &d);
	printf("�J�n���s��̒l:\n");
	printf("a = %d    b = %d\n", c, d);
}
void moji(int a, int b, int* c, int* d)
{
	*c = b;
	*d = a;
	return;
}