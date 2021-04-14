#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}; 
int main(){
	struct node *head,*p,*q,*t;
	int i,n,a,b;
	scanf("%d",&n);
	head = NULL;
	for(i=0;i<n;i++){
		scanf("%d",&a); 
		p = (struct node *)malloc(sizeof(int));
		p->data = a;
		p->next = NULL;
		if(head==NULL){
			head = p;
		}
		else{
			q->next=p;
		}
		q=p;
	}
	链表元素的插入 
	/*scanf("%d",&b);
	t=head;
	while(t!=NULL){
		if(t->next==NULL||t->next->data>b){
			p = (struct node*)malloc(sizeof(int));
			p->data = b;
			p->next = t->next;
			t->next = p;
			break;
		}
		t=t->next;
	}*/
	t=head;
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
} 
