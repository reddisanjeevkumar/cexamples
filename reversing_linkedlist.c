#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};
//struct node create_list(struct node *p,int i);
//void printing_in_reverse(struct node *tmp);
struct node *head;
struct node *tmp1;
int main()
{
	int i,j,k;
	printf("under after head");
	head =(struct node *)malloc(sizeof(struct node));
	head->value=11;
	head->next=NULL;
	printf("under after head");
	tmp1=head;
	for(i=0;i<10;i++){
		printf("under for loop");
		create_list(i);
	}
	printing_in_reverse(head);
	printf("\n");
	delete(5);
	printf("\n");
	printing_in_reverse(head);
	printf("\n");
	insert(4,5);
	printing_in_reverse(head);
	return 0;
}
void create_list(int i){
	struct node *tmp;
	//tmp=p->next;
	tmp=(struct  node*)malloc(sizeof(struct node));
	tmp->value=i;
	tmp->next=NULL;
	tmp1->next=tmp;
	tmp1=tmp;
}
void printing_in_reverse(struct node *tmp){
	if(tmp->next!=NULL){
		printing_in_reverse(tmp->next);
	}
		printf("%d",tmp->value);
}
void delete(int i){
	struct node *tmp,*p;
	tmp=head;
	while(tmp->value!=i){
		p=tmp;
		tmp=tmp->next;
	}
	p->next=tmp->next;
	free(tmp);
}
void insert(int i,int j){
	struct node *tmp,*new,*cur;
	new =(struct node*)malloc(sizeof(struct node));
	new->value=j;
	new->next=NULL;
	tmp=head;
	while(tmp->value!=i){
		tmp=tmp->next;
	}
	//struct node *cur;
	cur =tmp->next;
	tmp->next=new;
	new->next=cur;
}
