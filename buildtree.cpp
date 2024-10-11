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
int depth(Node *node){
	int left_l=0;
	int right_l=0;
	if(node==NULL){
		return 0;
	}
	if(node->left!=NULL){
		left_l=depth(node->left);
	}
	if(node->right!=NULL){
		right_l=depth(node->right);
	}
	if(left_l>right_l){
		return left_l+1;
	}
	else if(left_l<right_l){
		return right_l+1;
	}
	else {
		return left_l+1;
	}
}
int main(){
	Node* root = buildTree();
	cout<<"maximum depth is "<<depth(root);
	return 0;
}
