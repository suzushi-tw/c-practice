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


Node *buildtree(int pre[], int prestart, int preend, int post[], int poststart,int postend){
	if(prestart>preend){
		return NULL;
	}
	if(poststart>postend){
		return NULL;
	}
	Node *root=new Node(NULL, NULL, pre[prestart]);
	prestart++;
	if(prestart==preend){
		return root;
	}
	int postkey=poststart;
	while(post[postkey]!=pre[prestart+1]){
		postkey++;
	}
	int length=postkey-poststart+1;     //+1??
	root->left=buildtree(pre, prestart+1, prestart+length, post, poststart, postkey);
	root->right=buildtree(pre, prestart+length+1, preend, post, postkey+1, postkey-1);
	return root;
}
 	
 	
int main(){
	//Node *root=buildTree();
	cout<<"pls input the number of nodes:\n";
	int N;
	scanf("%d", &N);
	int post[N];
	cout<<"pls input the postorder traversal:\n";    //left right root, the second one is the parent of left subtree
	for(int i=0; i<N;i++){						  	
		scanf("%d", &post[i]);
	}
	cout<<"pls enter the preorder traversal:\n";     //root left right
	int pre[N];									  
	for(int j=0; j<N;j++){
		scanf("%d", &pre[j]);
	}
	
	Node *root=buildtree(pre, 0, N-1, post, 0, N-1);
	cout<<"the binary tree is:\n";
	printBinaryTree(root);
	return 0;
}
