#include <stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	printf("探索値を入力:");
	scanf("%d", &s);
	for (d[10] = s ,i = 0; s != d[i]; i++);

	if(i == 10){
		printf("入力データ%d見つからなかった", s);
	 }
	else {
		printf("%d番目に見つかった\n", i);
	}

}