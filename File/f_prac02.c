#include<stdio.h>
main()
{
	int max_score,score = 0;
	char max_name[20],ch, name[20];
	FILE* fp;
	fp = fopen("score.txt", "r");
	fscanf(fp, "%s%d", max_name, &max_score);
	fclose(fp);
	printf("最高得点　名前:%s スコア:%d\n", max_name, max_score);
	printf("プレイヤー名を入力:");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア:%d(eで終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > max_score) {
		fp = fopen("score.txt", "w");
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
		printf("ハイスコア更新\n");
	}
	
}