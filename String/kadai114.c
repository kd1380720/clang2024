#include<stdio.h>
main()
{
	char a[20];
	int i,cnt;
	printf("�������?");
	scanf("%s", &a[0]);
	printf("������:");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("   ������ = %d����",cnt);
}