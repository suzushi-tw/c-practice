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
int findmiddle(int in[],int start, int end, int pre){
	for(int k=start; k<end; k++){
		if(in[k]==pre)
		return k;
	}		
}

Node *buildtree(int pre[], int in[],int instart, int inend, int poststart){
	if(instart>inend){
		return NULL;
	}
	Node *root=new Node(NULL, NULL, pre[prestart]);         
	int middle=findmiddle(in, instart, inend, pre[prestart]);
	int poststart=postorder-1;
	int rightprestart=middle-instart+prestart+1;
	cout<<leftprestart<<" "<<rightprestart<<" "<<middle<<" "<<instart<<" "<<inend<<" "<<prestart<<"\n";
	root->left=buildtree(pre, in, instart, middle-1, leftprestart);
	root->right=buildtree(pre, in, middle+1, inend, rightprestart);
	return root;
}
 	
 	
int main(){
	//Node *root=buildTree();
	cout<<"pls input the number of nodes:\n";
	int N;
	scanf("%d", &N);
	int post[N];
	cout<<"pls input the postorder traversal:\n";    //the first number is always going to be root
	for(int i=0; i<N;i++){						  	
		scanf("%d", &pre[i]);
	}
	cout<<"pls enter the inorder traversal:\n";     //left tree first then root node then right node
	int in[N];									  //all number on the left of root going to be left tree
	for(int j=0; j<N;j++){
		scanf("%d", &in[j]);
	}
	
	Node *root=buildtree(post, in, 0, N-1, 0);
	cout<<"the binary tree is:\n";
	printBinaryTree(root);
	return 0;
}
