#include <stdio.h>
main()
{
	float su1, su2,su3;
	printf("一つ目の整数:");
	scanf("%f",&su1);
	printf("二つ目の整数:");
	scanf("%f", &su2);
	printf("二つ目の整数:");
	scanf("%f", &su3);
	printf("合計 = %.2f 平均 = %.2f", su1 + su2 + su3,(su1 + su2 + su3) / 3);
}