#include <stdio.h>

typedef struct Student{
	char name[10];
	char stu_id[15];
	int age;
	char sex[5];
}student;
int main()
{
	int num,n,x;
	printf("������ѧ��������");
	scanf("%d",&n); 
	student stus[num];
	for(num=0;num<n;num++)
		scanf("%s %d %d %s",&stus[num].name,&stus[num].stu_id,&stus[num].age,&stus[num].sex);
	student* find_id(char id[],student stus[],int num);
}
student* find_id(char id[],student stus[],int num)
{
	int n;
	printf("��������ҵ�id:");
	scanf("%d",&stus[n].stu_id);
	for(num=0;num<n;num++)
	{
		if(stus[n].stu_id==stus[num].stu_id)
			n=num;
			return &stus[num];
		else
			return NULL;
	}
}
