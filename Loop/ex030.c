#include <stdio.h>
main()
{
	int su, z ;
	printf("��������");
	scanf("%d", &su);
	z = 0;
	while (z <= 10) {
		printf("%d + %d = %d\n",su,z,su + z);
		z++;
	}
}