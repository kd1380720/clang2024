#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{

	int  i , p , n ;

	srand(time(0));
	rand();
	printf("�����o���܂���?\n");
	printf("(1;�O�[ 2;�`���L 3;�p�[)  >");
	scanf("%d", &p );
	switch (p) {
	case 1: 
		printf("�v���C���[�̓O�[�ł�\n"); break;
	case 2: 
		printf("�v���C���[�̓`���L�ł�\n"); break;
	case 3: 
		printf("�v���C���[�̓p�[�ł�\n"); break;
	}
	n = rand() % 3 ; 
	switch (n) {
	case 0: 
		printf("�R���s���[�^�̓O�[�ł�\n"); break;
	case 1: 
		printf("�R���s���[�^�̓`���L�ł�\n"); break;
	case 2: 
		printf("�R���s���[�^�̓p�[�ł�\n"); break;
	}
	switch (((p - 1) - n + 3) % 3) {
	case 0:
		printf("\n�������ł��B\n");break;
	case 1:
		printf("\n�R���s���[�^�̏����ł��B\n");break;
	case 2:
		printf("\n�v���C���[�̏����ł��B\n");
	}
}