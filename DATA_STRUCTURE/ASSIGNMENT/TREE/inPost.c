// CONSTRUCT BINARY TREE USING INORDER AND POSTORDER

#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

TreeNode* createNode(int data){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int findIdx(int post[],int data,int s,int e){
	int i;
	for(i=s ; i<=e ; i++){
		if(post[i] == data){
			break;
		}
	}
	return i;
}

TreeNode* buildTree(int in[],int post[],int s,int e,int idx){
	if(s > e){
		return NULL;
	}
	
	TreeNode* newNode = createNode(post[idx]);
	
	if(s == e){
		return newNode;
	}
		
	int pos = findIdx(in,newNode->data,s,e);
	newNode->left = buildTree(in,post,s,pos-1,idx-1);
	newNode->right = buildTree(in,post,pos+1,e,idx-1);

	return newNode;
}

void postOrder(TreeNode* root){
	if(root == NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf(" %d ",root->data);
}

void main(){
	int in[] = {1,2,3,4};
	int post[] = {2,1,4,3};
	int n = sizeof(in)/sizeof(in[0]);
	TreeNode* root = buildTree(in,post,0,n-1,n-1);
	postOrder(root);
	printf("\n");
}
