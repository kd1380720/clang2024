#include <stdio.h>
main()
{
	int su1, su2, su3,g;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &su1, &su2, &su3);
	g = su1 + su2 + su3;
	printf("合計 = %d",g);
	printf("平均 = %.2f",(float)g /3 );
}