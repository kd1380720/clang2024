#include <stdio.h>
main()
{
	int sei,amari ;
	printf("西暦を入力:");
	scanf("%d", &sei);
	amari = sei % 4;
	if ( amari == 0) {
		printf("うるう年です\n",sei);
	} 
	else {
		printf("平年です\n");
	}
}