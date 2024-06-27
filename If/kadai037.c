#include<stdio.h>
main()
{
	int moji;
	printf("0から100までの整数?");
	scanf("%d", &moji);
	if (moji >=90)
	{
		printf("その数値の判定結果は「5」です");
	}
	else if (moji >= 80 && moji < 90)
	{
		printf("その数値の判定結果は「4」です");
	}
	else if(moji >= 50 && moji < 80) 
	{
		printf("その数値の判定結果は「3」です");
	}
	else if (moji >= 30 && moji < 50)
	{
		printf("その数値の判定結果は「2」です");
	}
	else {
		printf("その数値の判定結果は「1」です");
	}
}