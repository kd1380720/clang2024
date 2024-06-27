#include <stdio.h>
main()
{
	char k;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä");
	scanf("%c", &k);
	switch(k)
	{
		case '+': printf("‰ÁZ‚Å‚·\n"); break;
		case '-': printf("Œ¸Z‚Å‚·\n"); break;
		case '*': printf("æZ‚Å‚·\n"); break;
		case '/': printf("œZ‚Å‚·\n"); break;
		case '%': printf("‚ ‚Ü‚è‚Å‚·\n"); break;
		default: printf("‚»‚Ì‘¼‚Å‚·\n");
	}
}
