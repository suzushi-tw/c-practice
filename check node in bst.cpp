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
 
int printBinaryTree(Node* root){
    int depth = maxDepth(root);
    int size = int(pow(2, double(depth))) - 1;
    
    vector<int> v(size, -1);
    itTree(&v, 0, root);
    
    while(v.back() == -1){
        v.pop_back();
    }
    
    printVector(&v);
    cout<<"\n";
}

int checknode(Node *root, int N){
	if(root==NULL){
		return false;
	}
	if(root->num==N){
		return true;
	}
	return checknode(root->left, N) || checknode(root->right, N);
//	if(checknode(root->left, N)==1){
//		return true;
//	}
//	if(checknode(root->right, N)==1){
//		return true;
//	}
//	return false;
}

int main(){
	Node *root=buildtree();
	cout<<"the binary search tree is";
	//preorder(root);
	printBinaryTree(root);
	cout<<"enter a node to be searched";
	int N;
	scanf("%d", &N);
	bool result=checknode(root, N);
	if(result==1){
		cout<<"true";
	}
	if(result==0){
		cout<<"false";
	}
	return 0;
}
