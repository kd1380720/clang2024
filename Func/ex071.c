#include <stdio.h>
int gokei(int , int  ,int );
float heikin(int , int ,int );
main()
{
	int a, b,c;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b,&c);
	printf("‡Œv‚Í%d", gokei(a,b,c));
	printf("    ‡Œv‚Í%.2f\n", heikin(a,b,c));
}
int gokei(int a, int b,int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}
float heikin(int a, int b ,int c)
{
	return(float)(a + b + c) / 3;
}