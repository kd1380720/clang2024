#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[80];
	int i, k[80];
	srand(time(0));
	rand();
	printf("文字列を入力して下さい > ");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d] ",i);
		printf("の複合化キー > ");
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("複合化済み文字列は、%s\n", &s[0]);
}