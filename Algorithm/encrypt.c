#include <stdio.h>
main()
{
	char s[80];
	int i;
	printf("���������͂��ĉ����� > ");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] + 1;
	}
	printf("�Í���������́A%s", &s[0]);
}