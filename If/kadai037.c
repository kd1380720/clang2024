#include<stdio.h>
main()
{
	int moji;
	printf("0����100�܂ł̐���?");
	scanf("%d", &moji);
	if (moji >=90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else if (moji >= 80 && moji < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
	}
	else if(moji >= 50 && moji < 80) 
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
	}
	else if (moji >= 30 && moji < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
	}
}