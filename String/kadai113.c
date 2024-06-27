#include<stdio.h>
main()
{
	char a[] = { "GameSoft"};
	int i,cnt;
	printf("•¶š—ñ =");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("\n•¶š” = %d•¶š",cnt);
}