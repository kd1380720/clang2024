#include <stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, *p_data2;
	p_data = data;
	p_data2 = data2;
	printf("data[ ] = %s\n", p_data);//%sがアドレスを参照するから*はいらない
	while (*p_data2++ = *p_data++);//文字列コピー
	p_data2 = data2;
	printf("data2[ ] = %s\n", p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	putchar('\n');
}