#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next=NULL;
};

typedef struct node node;

void print_linked_list(node *root_node){
	node* iternode = root_node;
	
	while(iternode != NULL){
		printf("%d ", iternode->num);
		iternode = iternode->next;
	}
}

node* removenode(node* root_node, int n){
	node *current=root_node;
	node *previous=NULL;
	node *next;
	node *second;
	int i=0;
	if(n==1 ){
		second=current->next;
		return second;
	}
	while(current != NULL && n-1!=i){
		previous=current;
		current=current->next;
		i++;
	}
	previous->next=current->next;
	
	return root_node;
}

int main(){
	node a, b, c, d, e, f, g;
	a.num=1;
	b.num=2;
	c.num=3;
	d.num=4;
	e.num=5;
	f.num=6;
	g.num=7;
	
	a.next=&b;
	b.next=&c;
	c.next=&d;
	d.next=&e;
	e.next=&f;
	f.next=&g;
	int n;
	printf("enter the nth node to be deleted:");
	scanf("%d", &n);
	print_linked_list(&a);
	printf("\n");
	node *newlist;
	newlist=removenode(&a, n);
	print_linked_list(newlist);
}
