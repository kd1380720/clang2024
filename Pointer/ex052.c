#include <stdio.h>
main()
{
	int a = 100, b = 200, c;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("���s�O: ");
	printf("*p_a = %d *p_b = %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("���s��: ");
	printf("*p_a = %d *p_b = %d\n", a, b);
}