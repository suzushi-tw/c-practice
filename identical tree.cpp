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
int check(Node *root, Node*root2){
	if(root==NULL && root2==NULL){
		return true;
	}
	if(root==NULL || root2==NULL){
		return false;
	}
	return (root->num == root2->num)&& 
	check(root->left, root->left) && check(root->right, root2->right);
}

//int preorder()

int main(){
	Node* root = buildTree();
	Node* root2=buildTree();
	if(check(root, root2)){
		cout<<"the trees are identical";
	}
	else{
		cout<<"the trees are not identical";
	}
	return 0;
}
