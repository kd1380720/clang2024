#include <stdio.h>
int tbl_gokei1(int* p);
int tbi_gokei2(int tb[]);
int tbl_gokei3(int* p);
main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = tbl_gokei1(a);
	printf("gokei = %d\n", gokei);
	gokei = tbl_gokei2(a);
	printf("gokei = %d\n", gokei);
	gokei = tbl_gokei3(a);
	printf("gokei = %d\n", gokei);
}
//ポインタで受け取り
int tbl_gokei1(int* p)
{
	int gokei = 0, i = 0;
	while (*p != -999) {
		gokei += *p;
		p++;
	}
	return(gokei);
}
//配列で受け取り
int tbl_gokei2(int tbl[])
{
	int gokei = 0, i = 0;
	while (tbl[i] != -999) {
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}
//ポインタが受け取ったアドレスを
//固定して使用
int tbl_gokei3(int* p)
{
	int gokei = 0, i = 0;
	while (*(p + i) != -999) {
		gokei += *(p + i);
		i++;
	}
	return gokei;
}