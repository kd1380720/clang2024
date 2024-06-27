#include<stdio.h>
main() {
	int i;
	for (i = 1; i < 100;i++)
	{
		if (i == 20)break;
		if (i % 2 == 1) {
			printf(" %2d", i);
			continue;
		}
	}
}