#include <stdio.h>
//�}�N��
#define TBL_END 5
int tbl_gokei4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei = %d\n", gokei);
}
//�萔�Œ�`���ď���
int tbl_gokei4(int *p)
{
	int gokei = 0, i = 0;
	while (i < TBL_END) {
		gokei += *p;
		p++;
		i++;
	}
	return(gokei);
}