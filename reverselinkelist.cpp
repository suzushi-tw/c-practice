#include<stdio.h>

struct node{
	int num;
	struct node* next=NULL;
};

typedef struct node node;

void print_linked_list(node *root_node){
	node* iternode = root_node;
	
	while(iternode != NULL){
		printf("%d ", iternode->num);
		iternode = iternode->next;
	}
}

node* reverse_linkedlist(node* root_node){
	node* next;
	node* previous=NULL;
	node* current=root_node;
	
	while(current != NULL){
		next=current->next;
		current->next=previous;
		previous=current;
		current=next;
	}
	return previous;
}
int main(){
	node a, b, c;
	a.num = 3;
	b.num = 6;
	c.num = 7;
	
	a.next = &b;
	b.next = &c;
	node* reverse;
	print_linked_list(&a);
	reverse=reverse_linkedlist(&a);
	print_linked_list(reverse);
}
