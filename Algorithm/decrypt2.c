#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char s[80];
	int i, k[80];
	srand(time(0));
	rand();
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‰º‚³‚¢ > ");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d] ",i);
		printf("‚Ì•¡‡‰»ƒL[ > ");
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("•¡‡‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}