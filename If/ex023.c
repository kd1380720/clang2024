#include <stdio.h>
main()
{
	int zika, ji,hun,byou;
	printf("�b�������:");
	scanf("%d", &zika);
	if (zika <=5000) {
		ji = zika / 3600;
		hun = (zika - 3600 * ji) / 60;
		byou = zika - (3600 * ji + 60 * hun);
		printf("%d����%d��%d�b�ł�\n",ji,hun,byou);
	} 
	else {
		printf("�G���[\n5000�ȓ��ɂ��Ă�������\n");
	}
}