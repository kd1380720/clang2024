#include<stdio.h>
main()
{
	int moji, su, kei = 0;
	printf("整数1?");
	scanf("%d", &moji);
	printf("整数2?");
	scanf("%d", &su);
	if (moji > su)
	{
		kei = moji - su;
		printf("%dの方が%dより%d大きい",moji,su,kei);
	}
	else if (moji < su)
	{
		kei = su - moji;
		printf("%dの方が%dより%d小さい",moji,su , kei);
	}
	else {
		printf("%dと%dは等しい",moji,su );
	}
}