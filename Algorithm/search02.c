#include <stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	printf("�T���l�����:");
	scanf("%d", &s);
	for (d[10] = s ,i = 0; s != d[i]; i++);

	if(i == 10){
		printf("���̓f�[�^%d������Ȃ�����", s);
	 }
	else {
		printf("%d�ԖڂɌ�������\n", i);
	}

}