#include<vector>
#include<iostream>
using namespace std;

class Node{
public:
	Node* left;
	Node* right;
	int num;
	Node(Node* left, Node* right, int num);
};

Node::Node(Node* left, Node* right, int num){
	this->left = left;
	this->right = right;
	this->num = num;
}

Node* buildTree(){
	int num;
	int num2;
	vector<Node*> v;
	cout << "input # of nodes\n";
	cin >> num;
	for(int i=0; i<num; i++){
		cin >> num2;
		if(num2 == -1){
			v.push_back(NULL);
		}
		else{
			v.push_back(new Node(NULL, NULL,num2));
		}
	}
	
	for(int i=1; i<num; i++){
		if(v[i] == NULL){
			continue;
		}
		
		if (v[(i-1)/2] == NULL){
			cout << "NULL node can't have child\n";
			break;
		}
		if(i % 2 == 1){
			v[(i-1)/2]->left = v[i];
		}
		else{
			v[(i-1)/2]->right = v[i];
		}
	}
	return v[0];
}
int count=0;
int count_node(Node *node){
	
	if(node==NULL){
		return 0;
	}
	else{
		count_node(node->left);
		count++;
		count_node(node->right);
	}
	return count;
}
int count_node2(Node *node){
	count =0;
	count_node(node);
}
int count_node3(Node *node){
	if(node==NULL){
		printf("null\n");
		return 0;
	}
	
	count=count_node3(node->left)+count_node3(node->right);
	return count+1;
}

int main(){
	Node* root = buildTree();
	cout<<"number of nodes "<<count_node3(root);
	cout<<"number of nodes "<<count_node3(root);
	return 0;
}
