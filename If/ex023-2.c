#include <stdio.h>
main()
{
	int sei,amari ;
	printf("��������:");
	scanf("%d", &sei);
	amari = sei % 4;
	if ( amari == 0) {
		printf("���邤�N�ł�\n",sei);
	} 
	else {
		printf("���N�ł�\n");
	}
}