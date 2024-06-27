#include<stdio.h>
main()
{
	int moji, su, kei = 0;
	printf("®”1?");
	scanf("%d", &moji);
	printf("®”2?");
	scanf("%d", &su);
	if (moji > su)
	{
		kei = moji - su;
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢",moji,su,kei);
	}
	else if (moji < su)
	{
		kei = su - moji;
		printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢",moji,su , kei);
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢",moji,su );
	}
}