#include<vector>
#include<iostream>
#include<queue>
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
void bfs(Node *node){
	if(node==NULL){
		return;
	}
	queue<Node*>q;					
	q.push(node);
	
	//cout<<node->num<<" ";
	while(!q.empty()){
		int size=q.size();
		for(int i=1;i<=size;i++){
			Node *n=q.front();
			//cout<<size<<" ";
			//cout<<i<<" ";
			//cout<<n->num<<" ";
			q.pop();
			if(i==size){
				cout<<n->num<<" ";
			}
			if(n->left!=NULL){
				q.push(n->left);
			}
			if(n->right!=NULL){
				q.push(n->right);
			}
		}
	}
}

int main(){
	Node* root = buildTree();
	cout<<"right side view is ";
	bfs(root);
	return 0;
}
