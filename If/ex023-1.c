#include <stdio.h>
main()
{
	int zika, ji,hun,byou;
	printf("秒数を入力:");
	scanf("%d", &zika);
	if (zika >= 0) {
		if (zika <= 5000) {
			ji = zika / 3600;
			hun = (zika - 3600 * ji) / 60;
			byou = zika - (3600 * ji + 60 * hun);
			printf("%d時間%d分%d秒です\n", ji, hun, byou);
		}

		else {
			printf("エラー\n5000以内にしてください\n");
		}
	}
	else {
		printf("マイナスはエラーです\n");
	}
}