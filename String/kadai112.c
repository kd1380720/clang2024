#include<stdio.h>
main()
{
	char data1[] = { "abcde"};
	char data2[8];
	int i;
	printf("(�R�s�[��)�z��data1[ ] = ");
	for (i = 0; data1[i] != '\0'; i++ )
	{
		printf("%c", data1[i]);
	}
	for (i = 0; data1[i] != '\0'; i++ )
	{
		data2[i] = data1[i];
	}
	printf("\n(�R�s�[��)�z��data2[ ] = ");
	for (i = 0; data2[i] != '\0'; i++)
	{
		printf("%c", data2[i]);
	}
}