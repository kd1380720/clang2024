#include<stdio.h>

struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main() 
{
	struct profile data;
	struct profile *p;
	p = &data;
	printf("名前を入力:");
	gets(p->name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d %d %d",&p->birth[0], &p->birth[1], &p->birth[2]);
	printf("血液型を入力:");
	scanf("%s", p->blood);
	printf("%s--", p->name);
	printf("%d 年 %d 月 %d 日生", p->birth[0], p->birth[1], p->birth[2]);
	printf(" 血液型- %s 型", p->blood);
}