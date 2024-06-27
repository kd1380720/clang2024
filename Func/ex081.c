#include<stdio.h>
int sai(int *p,int number);
int sai1( int* p, int number);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l = %d\n", sai(data, 8));
	printf("Å¬’l = %d\n", sai1(data, 8));
}
int sai( int* p, int number)
{
	int dai= *p, i = 0;
	for (i; i < number; i++)
	{
		if (dai < *p)
		{
			dai = *p;
		}
		p++;
	}
	return(dai);
}
int sai1( int* p, int number)
{
	int syou = *p, i = 0;
	for (i; i < number; i++)
	{
		if (syou > *p)
		{
			syou = *p;
		}
		p++;
	}
	return(syou);
}