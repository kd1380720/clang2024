#include <stdio.h>
main() 
{
	int i ,su ;
	i = 1;
	printf("数を入れて:");
	scanf("%d", &su);
	for (i; i <= 5; i++) 
	{
		printf("%d ",su * i);
	}
}