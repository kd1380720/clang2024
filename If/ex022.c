#include <stdio.h>
main()
{
	int sei;
	printf("西暦を入力:");
	scanf("%d", &sei);
	if (sei >= 1989) {
		printf("平成生まれです\n");
	}
	else {
		printf("昭和生まれです\n");
	}
}