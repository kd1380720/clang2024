#include<stdio.h>
main()
{
	int moji, su, kei = 0;
	printf("����1?");
	scanf("%d", &moji);
	printf("����2?");
	scanf("%d", &su);
	if (moji > su)
	{
		kei = moji - su;
		printf("%d�̕���%d���%d�傫��",moji,su,kei);
	}
	else if (moji < su)
	{
		kei = su - moji;
		printf("%d�̕���%d���%d������",moji,su , kei);
	}
	else {
		printf("%d��%d�͓�����",moji,su );
	}
}