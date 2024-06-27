#include<stdio.h>
main()
{
	double ia, ib;
	printf("2‚Â‚Ì”’l?");
	scanf("%lf%lf", &ia, &ib);
	printf("***%.1lf‚Æ%.1lf‚Ìl‘¥‰‰Z***\n", ia, ib);
	printf("˜a = %lf",ia + ib );
	printf("· = %lf", ia - ib);
	printf("Ï = %lf", ia * ib);
	printf("¤ = %lf ", ia / ib);
}