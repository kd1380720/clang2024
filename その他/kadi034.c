#include<stdio.h>
main()
{
	char moji;
	printf("1文字入力?");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("その文字は「大文字」です");
	}
	else if (moji >= 'a' && moji <= 'z') 
	{
		printf("その文字は「小文字」です");
	}
	else {
		printf("ERROR");
	}
}