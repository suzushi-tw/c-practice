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
int detectcycle(node *root_node){
	node *first=root_node;
	node *second=root_node->next;
	if(first->next==NULL){
		return 0;
	}
	while(second->next!=NULL && second->next->next!=NULL){
		first=first->next;
		second=second->next->next;
		if(first==second){
			return 1;
		}
	}
	return 0;
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
	
	//a.next=&b;
	//b.next=&c;
	//c.next=&d;
	//d.next=&e;
	//e.next=&f;
	//f.next=&g;
	//g.next=&d;
	int n;
	n=detectcycle(&a);
	if(n==1){
		printf("the list has a cycle");
	}
	else if(n==0){
		printf("the link does not contain cycle");
	}
	return 0;
}
