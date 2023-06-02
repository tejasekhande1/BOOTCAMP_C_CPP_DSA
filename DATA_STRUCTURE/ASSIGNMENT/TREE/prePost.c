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

int findIdx(int post[],int data,int s,int e){
	for(int i=s ; i<=e ; i++){
		if(data == post[i]){
			return i;
		}
	}
	return -1;
}

int idx = 0;
TreeNode* buildTree(int pre[],int post[],int s,int e,int n){
	if(s > e){
		return NULL;
	}

	TreeNode* newNode = createNode(pre[idx++]);

	if(s == e){
		return newNode;
	}

	int pos = findIdx(post,pre[idx],s,e);
	newNode->left = buildTree(pre,post,s,pos,n);
	newNode->right = buildTree(pre,post,pos+1,e-1,n);

	return newNode;
}

void preOrder(TreeNode* root){
	if(root == NULL){
		return;
	}

	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(TreeNode* root){
	if(root == NULL){
		return;
	}

	inOrder(root->left);
	printf(" %d ",root->data);
	inOrder(root->right);
}

void main(){

	int pre[] = {1,2,4,5,3,6,7};
	int post[] = {4,5,2,6,7,3,1};

	int n = sizeof(pre)/sizeof(pre[0]);
	TreeNode* root = buildTree(pre,post,0,n-1,n);
	printf("Inorder : ");
	inOrder(root);
	printf("\n");
}
