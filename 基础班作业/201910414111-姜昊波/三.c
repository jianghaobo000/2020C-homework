#include<stdio.h>
#include<stdlib.h>

struct L{
	int val;
	struct L* next;
};

int n = 100;
struct L* r(struct L* h);
struct L* p;
struct L* q=NULL;
struct L* pre=NULL;
struct L* r(struct L* h)
{	if (h==NULL)
		return NULL;
	p = h;
	while(p)
	{	q = p;
		L* tmp = p->next;
		p->next = pre;
		pre = p;
		p = tmp;}
	return q;
}

