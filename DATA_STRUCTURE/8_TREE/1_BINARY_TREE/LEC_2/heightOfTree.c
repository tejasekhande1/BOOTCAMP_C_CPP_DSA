#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

TreeNode* addNode(int level){
	
	level++;
	
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	
	char ch;
	printf("Do want to add LEFT Node of Level %d : ",level);
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		newNode->left = addNode(level);
	}else{
		newNode->left = NULL;
	}
	
	printf("Do want to add RIGHT Node of Level %d : ",level);
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		newNode->right = addNode(level);
	}else{
		newNode->right = NULL;
	}

	return newNode;
}

int heightOfTree(TreeNode* root){
	if(root == NULL){
		return -1;
	}

	int l = heightOfTree(root->left);
	int r = heightOfTree(root->right);
	
	return (l > r) ? l+1 : r+1;
}


void main(){
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(root->data));
	printf("Tree Rooted With %d\n",root->data);

	char ch;
	printf("Do want to add LEFT SubTree ? ");
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		root->left = addNode(0);
	}else{
		root->left = NULL;
	}
	
	printf("Do want to add RIGHT SubTree ? ");
	scanf(" %c",&ch);

	if(ch == 'Y' || ch == 'y'){
		root->right = addNode(0);
	}else{
		root->right = NULL;
	}

	int ret = heightOfTree(root);
	printf("Total Count of Node : %d\n",ret);
}
