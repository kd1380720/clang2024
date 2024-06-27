#include <stdio.h>
main()
{
	int i, sum,a[6] = { 11,22,33,44,55,66 };
	int* p_a;
	float  gb,b[4] = { 11.1,22.2,33.3,44.4 };
	float* p_b;

	p_a = a;
	printf("配列a  合計");
	for (i = 0, sum = 0; i < 6; i++)
	{
		sum += *p_a;
		p_a++;
	}
	printf("=  %d", sum);
	printf("   平均");
	printf("=  %.3f\n", (float)sum / 6);
	p_b = b;
	printf("配列b  合計");
	for (i = 0, gb  = 0; i < 4; i++)
	{
		gb  += *p_b;
		p_b++;
	}
	printf("=  %.3f", gb );
	printf("   平均");
	printf("=  %.3f", gb  / 4);
}