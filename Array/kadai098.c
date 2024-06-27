#include<stdio.h>
main()
{
	int data[10] ={10,5,23,29,2,6,3,1,70,100};
	int i, max, min;
	printf("”z—ñdata =");
	for (i = 0, max = data[1], min = data[1]; i < 10; i++)
	{
		printf(" %d", data[i]);
		if (max < data[i]) { max = data[i];}
		if (min > data[i]) { min = data[i];}
	}
	printf("\n");
	printf("Å‘å’l = %d     Å¬’l = %d", max, min);
}