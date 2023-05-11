#include <stdio.h>
#include <stdlib.h>

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

int idx = 0;

int findIdx(int in[],int val,int s,int e){
	for(int i=s ; i<=e ; i++){
		if(in[i] == val){
			return i;
		}
	}
	return -1;
}

TreeNode* createTree(int in[],int pre[],int s,int e,int n){
	if(s > e){
		return NULL;
	}

	if(s == e){
		return createNode(pre[idx++]);
	}

	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = pre[idx++];

	int pos = findIdx(in,newNode->data,s,e);
	newNode->left = createTree(in,pre,s,pos-1,n);
	newNode->right = createTree(in,pre,pos+1,e,n);

	return newNode;
}

void preOrder(TreeNode* newNode){
	if(newNode == NULL){
		return;
	}

	printf(" %d ",newNode->data);
	preOrder(newNode->left);
	preOrder(newNode->right);
}

void main(){
	int in[] = {2,5,4,1,6,3,8,7};
	int pre[] = {1,2,4,5,3,6,7,8};
	int n = sizeof(in)/sizeof(in[0]);
	TreeNode* root = createTree(in,pre,0,n-1,n);
	preOrder(root);
	printf("\n");
}
