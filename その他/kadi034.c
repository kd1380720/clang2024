#include<stdio.h>
main()
{
	char moji;
	printf("1��������?");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("���̕����́u�啶���v�ł�");
	}
	else if (moji >= 'a' && moji <= 'z') 
	{
		printf("���̕����́u�������v�ł�");
	}
	else {
		printf("ERROR");
	}
}