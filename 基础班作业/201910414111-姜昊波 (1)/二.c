#include<stdio.h>
#include<stdlib.h>

typedef struct Student {
	char name[10];
	char stu_id[15];
	int age;
	struct Student* next;
}student;
int fun(struct Student* h);
struct Student* h=(struct Student*)malloc(sizeof(struct Student));
struct Student a;

int fun(struct Student* h)
{
	 
	if (h==NULL)
	{	h=&a;
		printf("请建立链表：");
		gets_s(a.name);
		gets_s(a.stu_id);
		scanf_s("%d",&a.age);
		struct Student* next=NULL;	}
	else
	{	printf("%d\n",h->age);
		printf("%d\n",*h->name);
		printf("%d\n",*h->stu_id);
		printf("增加节点？y is yes,n is no");
		char j=getchar();
		if (j=='y')
		{	struct Student add;
			gets_s(add.name);
			gets_s(add.stu_id);
			scanf_s("%d", &add.age);
			struct Student* next=&add;}
		else
			printf("over");	}
}
