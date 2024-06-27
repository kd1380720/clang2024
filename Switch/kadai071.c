#include <stdio.h>
main()
{
	int i, j ;
	char k;
	printf("®”1?");
	scanf("%d", &i);
	printf("®”2?");
	scanf("%d", &j);

	printf("‰‰Zq?");
	scanf("%*c%c", &k);

	switch(k)
	{
		case '+': printf("%d + %d = %d\n",i,j,i+j); break;
		case '-': printf("%d - %d = %d\n", i, j, i - j); break;
		case '*': printf("%d * %d = %d\n", i, j, i * j); break;
		case '/': printf("%d / %d = %d\n", i, j, i / j); break;
		case '%': printf("%d % %d = %d\n", i, j, i % j); break;
		default: printf("‚»‚Ì‘¼‚Å‚·\n");
	}
}
