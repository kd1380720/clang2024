#include <stdio.h>
main()
{
	int i;
	char k;
	printf("10�i���̐���?");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g(o or h or d )?");
	scanf("%*c%c", &k);
	switch(k)
	{
		case 'o': printf("%o",i); break;
		case 'h': printf("%x",i); break;
		default:  printf("%d",i);
	}
}
