#include <stdio.h>
main()
{
	int i ;
	float box[3],sum ;
	sum = 0;
	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("合計は%.2fです\n",sum);
	printf("平均%.2fはです", sum / 3);
}