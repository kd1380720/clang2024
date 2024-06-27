#include<stdio.h>
main()
{
	int i;
	char ar;
	printf("アルファベット小文字?");
	scanf("%c", &ar);
	for (i = 0; ar +i <= 'z'; i++)
	{
		printf(" %c",ar + i);
	}
}