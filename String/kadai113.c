#include<stdio.h>
main()
{
	char a[] = { "GameSoft"};
	int i,cnt;
	printf("������ =");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("\n������ = %d����",cnt);
}