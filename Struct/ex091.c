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
	printf("���O�����:");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d %d %d",&p->birth[0], &p->birth[1], &p->birth[2]);
	printf("���t�^�����:");
	scanf("%s", p->blood);
	printf("%s--", p->name);
	printf("%d �N %d �� %d ����", p->birth[0], p->birth[1], p->birth[2]);
	printf(" ���t�^- %s �^", p->blood);
}