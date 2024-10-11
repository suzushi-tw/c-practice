#include<vector>
#include<iostream>
#include<queue>
#include<cmath>
#include<climits>
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

void insertnode(Node *node, Node *node2){
	if(node2->num<node->num){
		if(node->left==NULL){
			node->left=node2;
		}
		else{
			insertnode(node->left, node2);
		}
	}
	else{
		if(node->right==NULL){
			node->right=node2;
		}
		else{
			insertnode(node->right, node2);
		}
	}
}

Node *buildtree(){
	int num;
	int num2;
	vector<Node*> v;
	cout << "input # of nodes\n";
	cin >> num;
	for(int i=0; i<num; i++){
		cin >> num2;
		v.push_back(new Node(NULL, NULL,num2));
	}
	for(int i=1;i<num;i++){
		if(v[i]==NULL){
			continue;
		}
		insertnode(v[0], v[i]);
	}
	return v[0];
}

void preorder(Node *root){
	if(root!=NULL){
		preorder(root->left);
		cout<<root->num<<" ";
		preorder(root->right);
	}
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
int previousnumber=INT_MIN; 
int isBST(Node *root){
	if(root==NULL){
		return true;
	}
	int left;
	left=isBST(root->left);
	if(!left){
		return false;
	}
	cout<<previousnumber<<" "<<root->num<<"\n";
	if(root->num<=previousnumber){
		return false;
	}
	previousnumber=root->num;
	return isBST(root->right);
}

int main(){
	Node *root=buildtree();
	if(!isBST(root)){
		cout<<"false";
	}
	else{
		cout<<"is BST";
	}
	return 0;
}
