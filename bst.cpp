#include<vector>
#include<iostream>
#include<queue>
#include<cmath>
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
int maxDepth(Node* root){
    if (root == NULL){
        return 0;
    }
    else{
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        if (leftDepth > rightDepth) return leftDepth+1;
        else return rightDepth+1;
    }
}
 
int printVector(vector<int> *v){
    for(int i=0; i<v->size(); i++){
        cout << (*v)[i] << " ";
    }
}
 
void itTree(vector<int> *v, int index, Node *root){
    (*v)[index] = root->num;
    if(root->left != NULL){
        itTree(v, index*2+1, root->left);
    }
    if(root->right != NULL){
        itTree(v, index*2+2, root->right);
    }
}
 
int printBinaryTree(Node* root){
    int depth = maxDepth(root);
    int size = int(pow(2, double(depth))) - 1;
    
    vector<int> v(size, -1);
    itTree(&v, 0, root);
    
    while(v.back() == -1){
        v.pop_back();
    }
    
    printVector(&v);
}

int main(){
	Node *root=buildTree();
	printBinaryTree(root);
	return 0;
}
