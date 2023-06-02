// CONSTRUCT BT BY UISNG THE INORDER AND PREORDER TRAVERSAL

#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

TreeNode* createNode(int data){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

int idx = -1;

int findIdx(int pre[],int data,int s,int e){
	int i;
	for(i=s ; i<=e ; i++){
		if(pre[i] == data){
			break;
		}
	}
	return i;
}

TreeNode* buildTree(int in[],int pre[],int s,int e){
	if(s > e){
		return NULL;
	}

	TreeNode* newNode = createNode(pre[++idx]);

	int pos = findIdx(in,newNode->data,s,e);
	newNode->left = buildTree(in,pre,s,pos-1);
	newNode->right = buildTree(in,pre,pos+1,e);

	return newNode;
}

void printTree(TreeNode *root){
	if(root == NULL){
		return;
	}

	printf(" %d ",root->data);
	printTree(root->left);
	printTree(root->right);
}

void main(){
	int in[] = {2,5,4,1,6,3,8,7};
	int pre[] = {1,2,4,5,3,6,7,8};
	int n = sizeof(in)/sizeof(in[0]);
	TreeNode* root = buildTree(in,pre,0,n-1);
	printTree(root);
	printf("\n");
}
