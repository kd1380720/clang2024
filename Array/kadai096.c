#include <stdio.h>
main()
{
	int  ia ,c[10],cnt;
	int i = 0;
	for(i = 0 ,cnt =0; i < 10;i++) {
		printf("����(-999�ŏI��)");
		scanf("%d", &ia);
		if (ia == -999) break;
		c[i] = ia;
		cnt++;
	}
	printf("�z��c =");
	for (i = 0; i < cnt; i++) {
		printf(" %d", c[i]);
	}
}