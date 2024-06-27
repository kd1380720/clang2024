#include<stdio.h>
main()
{
	char a[20];
	int i,cnt;
	printf("•¶š—ñ‚Í?");
	scanf("%s", &a[0]);
	printf("•¶š—ñ:");
	for (i = 0,cnt =0; a[i] != '\0'; i++)
	{
		printf("%c", a[i]);
		cnt ++;
	}
	printf("   •¶š” = %d•¶š",cnt);
}