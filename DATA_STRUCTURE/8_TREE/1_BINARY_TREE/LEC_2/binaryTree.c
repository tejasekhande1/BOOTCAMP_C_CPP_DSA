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

void postOrder(TreeNode* root){
	if(root == NULL){
		return;
	}

	postOrder(root->left);
	postOrder(root->right);
	printf(" %d ",root->data);
}

void printNode(TreeNode* root){
	char ch;
	do{
		printf("1.preOrder\n");
		printf("2.inOrder\n");
		printf("3.postOrder\n");

		int choice;
		printf("Enter Choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				preOrder(root);
				printf("\n");
				break;
			case 2 :
				inOrder(root);
				printf("\n");
				break;
			case 3 :
				postOrder(root);
				printf("\n");
				break;
		}

		printf("Do you want to continue ? ");
		scanf(" %c",&ch);
	}while(ch == 'Y' || ch == 'y');
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

	printNode(root);
}
