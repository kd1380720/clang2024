#include <stdio.h>
main()
{
	int sum , cnt ,data  ;
	float ave;
	sum = 0;
	cnt = 0;
	ave  = 0;
	printf("����?");
	scanf("%d", &data );
	for (; data  != -999; ) {
		sum  += data  ;
		cnt++;
		printf("����?");
		scanf("%d", &data );
	}
	ave = (float)sum / cnt;
	printf("���v = %d    ", sum );
	printf("���� = %.2f\n", ave );

}