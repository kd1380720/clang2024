#include <stdio.h>
main()
{
	int sum , cnt ,data  ;
	float ave;
	sum = 0;
	cnt = 0;
	ave  = 0;
	printf("数は?");
	scanf("%d", &data );
	for (; data  != -999; ) {
		sum  += data  ;
		cnt++;
		printf("数は?");
		scanf("%d", &data );
	}
	ave = (float)sum / cnt;
	printf("合計 = %d    ", sum );
	printf("平均 = %.2f\n", ave );

}