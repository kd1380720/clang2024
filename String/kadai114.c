#include<stdio.h>
main()
{
	char a[20];
	int i,cnt;
	printf("文字列は?");
	scanf("%s", &a[0]);
	printf("文字列:");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("   文字数 = %d文字",cnt);
}