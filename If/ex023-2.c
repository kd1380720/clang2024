#include <stdio.h>
main()
{
	int sei,amari ;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &sei);
	amari = sei % 4;
	if ( amari == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·\n",sei);
	} 
	else {
		printf("•½”N‚Å‚·\n");
	}
}