#include<stdio.h>
main()
{
	char a[] = { "GameSoft"};
	int i,cnt;
	printf("文字列 =");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("\n文字数 = %d文字",cnt);
}