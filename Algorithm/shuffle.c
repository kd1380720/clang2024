#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, target, data[20], work ;
	for (i = 0; i < 20; i++) 
	{
		data[i] = i + 1;
		//printf("data[%d] = %d\n", i,data[i]);
	}
	srand(time(0));
	for (i = 0, target = 0,work = 0; i < 20; i++)
	{
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%d] = %d\n", i, data[i]);
	}
}