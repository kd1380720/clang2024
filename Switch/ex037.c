#include <stdio.h>
main()
{
	char k;
	printf("���Z�q������");
	scanf("%c", &k);
	switch(k)
	{
		case '+': printf("���Z�ł�\n"); break;
		case '-': printf("���Z�ł�\n"); break;
		case '*': printf("��Z�ł�\n"); break;
		case '/': printf("���Z�ł�\n"); break;
		case '%': printf("���܂�ł�\n"); break;
		default: printf("���̑��ł�\n");
	}
}
