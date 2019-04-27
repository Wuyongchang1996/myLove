#include<stdio.h>
#include<stdlib.h>
struct change{
	int num;
	struct change *next;
};
struct change *Create();
struct change *Delete(struct change *head,int m);
void Printf_NEW(struct change *head);
int main(void)
{
	struct change *p,*head;
	int num,m;
	int size=sizeof(struct change);
	head=Create();
	scanf("%d",&m);
	head=Delete(head,m);
	Printf_NEW(head);
	return 0;
}
struct change *Create()
{
	int num;
	int size=sizeof(struct change);
	struct change *head,*p,*tail;
	head=tail=NULL;
	scanf("%d",&num);
	while(num!=-1){
		p=(struct change*)malloc(size);
		p->num=num;
		p->next=NULL;
		if(head==NULL)
		head=p;
		else tail->next=p;
		tail=p;
		scanf("%d",&num);
	}
	return head;
}
struct change *Delete(struct change *head,int m)
{
	struct change *ptr1,*ptr2,*ptr;
	while(head!=NULL&&head->num==m){
		ptr2=head;
		head=head->next;
		free(ptr2);
	}
	if(head==NULL) return NULL;
	for(ptr=head;ptr!=NULL;ptr=ptr->next)
	{
		ptr1=head;
		ptr2=head->next;
		while(ptr2!=NULL){
			if(ptr2->num==m){
				ptr1->next=ptr2->next;
				free(ptr2);
			}
			else ptr1=ptr2;
			ptr2=ptr1->next;
		}
	}
	return head;
}
void Printf_NEW(struct change *head)
{
	struct change *ptr;
	if(head==NULL){
		return;
	}
	for(ptr=head;ptr!=NULL;ptr=ptr->next)
	printf("%d ",ptr->num);
}
/*
1 2 2 3 -1
2
*/
