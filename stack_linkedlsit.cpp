#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *top=NULL;

void push(NODE *nn){
	if(top==NULL){
		top=nn;
	}
	else{
		nn->next=top;
		top=nn;
	}
}

void pop(){
	if(top==NULL){
		printf("No nodes to delete\n");
	}
	else{
	
    	printf("Deleted element is %d: \n",top->data);
		NODE *dn=top;
		top=top->next;
		free(dn);
}
}

void display(){
	if(top==NULL){
		printf("no nodes to display\n");
	}
	else{
		NODE *temp=top;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

int main(){
  int ch;
  while (1) {
  	printf("Enter\n1.push\n2.pop()\n3.display()\nanyother to exit\n");
  	printf("Enter your choice:");
  	scanf("%d",&ch);
  	if(ch==1){
  		//push()
  			int val;
			printf("Enter value to be inserted:");
			scanf("%d",&val);
			printf("%d is inserted\n",val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			push(nn);
	  }
	else if(ch==2){
		//pop()
		pop();
	}
	else if(ch==3){
		//display
		display();
	}
	else{
		printf("**Thank you");
		break;
	}
  }
}
