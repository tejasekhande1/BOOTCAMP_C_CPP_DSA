#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

TreeNode* buildTree(int level){
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(newNode->data));
	
	char ch;
	printf("Do you want add Left SubTree At Level %d ? ",level);
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		newNode->left = buildTree(level+1);
	}else{
		newNode->left = NULL;
	}
	
	printf("Do you want add Right SubTree At Level %d ? ",level);
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		newNode->right = buildTree(level+1);
	}else{
		newNode->right = NULL;
	}

	return newNode;
}

void preOrder(TreeNode* root){
	if(root == NULL) return;
	printf(" %d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

int flag = 0; 
void leftView(TreeNode* root){
	if(root == NULL){
		return;
	}
	if(flag == 0){
		printf(" %d ",root->data);
		flag++;
	}

	if(root->left != NULL){
		printf(" %d ",root->left->data);
	}

	leftView(root->left);
	leftView(root->right);
}

void main(){
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	printf("Enter Data : ");
	scanf("%d",&(root->data));
	printf("Tree Rooted With %d\n",root->data);

	char ch;
	printf("Do you want add Left SubTree ? ");
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		root->left = buildTree(1);
	}else{
		root->left = NULL;
	}
	
	printf("Do you want add Right SubTree ? ");
	scanf(" %c",&ch);
	if(ch == 'y' || ch == 'Y'){
		root->right = buildTree(1);
	}else{
		root->right = NULL;
	}

	preOrder(root);
	printf("\n");

	leftView(root);
	printf("\n");
}
