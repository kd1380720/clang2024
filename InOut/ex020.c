#include <stdio.h>
main()
{
	char c;
	printf("小文字入力:");
	scanf("%c", &c);
	printf("大文字に変換して = %c", c - 0x20);
}