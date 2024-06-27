#include <stdio.h>
main()
{
	char k;
	printf("アルファベット?");
	scanf("%c", &k);
	switch(k)
	{
		case 'a': printf("America\nAustralia"); break;
		case 'e': printf("England\n"); break;
		case 'f': printf("France\n"); break;
		case 'j': printf("Japan\n"); break;
		default: printf("その他です\n");
	}
}
