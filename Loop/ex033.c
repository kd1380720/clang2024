#include <stdio.h>
main()
{
	int sum , cnt ,data  ;
	float ave;
	sum = 0;
	cnt = 0;
	ave  = 0;
	printf("”‚Í?");
	scanf("%d", &data );
	for (; data  != -999; ) {
		sum  += data  ;
		cnt++;
		printf("”‚Í?");
		scanf("%d", &data );
	}
	ave = (float)sum / cnt;
	printf("‡Œv = %d    ", sum );
	printf("•½‹Ï = %.2f\n", ave );

}