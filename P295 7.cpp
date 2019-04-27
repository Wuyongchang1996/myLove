#include<stdio.h>
#include<stdlib.h>
struct change{
	int num;
	struct change *next;
};
struct change *old();
struct change *NEW(struct change *L);
void Printf_NEW(struct change *L);
int main(void)
{
	struct change *L,*p,*head;
	int num;
	int size=sizeof(struct change);
	L=old();
	head=NEW(L);
	Printf_NEW(head);
	return 0;
}
struct change *old()
{
	int num;
	int size=sizeof(struct change);
	struct change *L,*p,*tail;
	L=tail=NULL;
	scanf("%d",&num);
	while(num!=-1){
		p=(struct change*)malloc(size);
		p->num=num;
		p->next=NULL;
		if(L==NULL)
		L=p;
		else tail->next=p;
		tail=p;
		scanf("%d",&num);
	}
	return L;
}
struct change *NEW(struct change *L)
{
	struct change *head,*p,*tail,*ptr;
	int size=sizeof(struct change);
	head=tail=NULL;
	for(ptr=L;ptr!=NULL;ptr=ptr->next)
	if(ptr->num%2!=0){
		p=(struct change*)malloc(size);
		p->num=ptr->num;
		p->next=NULL;
		if(head==NULL)
		head=p;
		else tail->next=p;
		tail=p;
	}
	return head;
}
void Printf_NEW(struct change *L)
{
	struct change *ptr;
	if(L==NULL){
		return;
	}
	for(ptr=L;ptr!=NULL;ptr=ptr->next)
	printf("%d ",ptr->num);
}
/*
1 2 3 4 5 6 7 -1
*/
