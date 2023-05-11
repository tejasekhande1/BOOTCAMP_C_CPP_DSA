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

int countNode(TreeNode* root){
	if(root == NULL){
		return 0;
	}

	int l = countNode(root->left);
	int r = countNode(root->right);
	return l+r+1;
}

int idx = -1;
void inOrder(TreeNode* root,int arr[]){
	if(root == NULL){
		return;
	}
	
	inOrder(root->left,arr);
	arr[++idx] = root->data;
	inOrder(root->right,arr);
}

int validateBST(int arr[],int n){
	for(int i=1 ; i<n ; i++){
		if(arr[i-1] >= arr[i]){
			return 0;
		}
	}

	return 1;
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

	int ret = countNode(root);
	printf("Total Count of Node : %d\n",ret);

	int arr[ret];
	inOrder(root,arr);
	for(int i=0 ; i<ret ; i++){
		printf(" %d ",arr[i]);
	}

	printf("\n");

	int res = validateBST(arr,ret);
	printf("Answer : %d\n",res);
}
