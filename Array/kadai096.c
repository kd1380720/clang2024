#include <stdio.h>
main()
{
	int  ia ,c[10],cnt;
	int i = 0;
	for(i = 0 ,cnt =0; i < 10;i++) {
		printf("Ž(-999ĹIš)");
		scanf("%d", &ia);
		if (ia == -999) break;
		c[i] = ia;
		cnt++;
	}
	printf("zńc =");
	for (i = 0; i < cnt; i++) {
		printf(" %d", c[i]);
	}
}