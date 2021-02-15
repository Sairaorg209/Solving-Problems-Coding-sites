	#include<stdio.h>
	#include<stdlib.h>
	typedef struct{
		int data;
		struct node *next;
	}node;
	
	int main(){
		node *n,*head,*p,*q;
		int opt,size,count=0;
		printf("1)Create a node\n2)Create a linked list\n");
		scanf("%d",&opt);
		switch(opt){
			case 1:
				n=(node*)malloc(sizeof(node));
				scanf("%d",&n->data);
				n->next=NULL;
				printf("Node creation succesful, Data stored is %d\n",n->data);	
				break;
			
			case 2:
				printf("Size:");
				scanf("%d",&size);
				head=(node*)malloc(sizeof(node));
				while(count<size){
					if(count==0){
						scanf("%d",&head->data);
						head->next=NULL;
						p=head;
					}
					else{
						q=(node*)malloc(sizeof(node));
						scanf("%d",&q->data);
						q->next=NULL;
						p->next=q;
						p=q;
					}
					count++;
				}
				printf("Linked list formed is\n");
				q=head;			
				while(count!=0){
					printf("%d ",q->data);
					q=q->next;
					count--;
				}
				p=head;
				q=head->next;
				q=q->next;
				while(q->next!=NULL){
					p=p->next;
					q=q->next;
					q=q->next;
				}
				printf("Middle element is %d\n",p->data);
				break;
			
			default:
			printf("Surprise motherfucker!\n");
			break;
		}
		
		return 0;
		
	}
