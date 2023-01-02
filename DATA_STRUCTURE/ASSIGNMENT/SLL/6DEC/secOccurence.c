#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

struct Node *head = NULL;

struct Node* createNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter Data : \n");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	struct Node *newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{
		struct Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printNode(){
	if(head == NULL){
		printf("Nodes NOT Found\n");
	}else{
		struct Node *temp = head;
                while(temp != NULL){
			if(temp->next != NULL){
				printf("|%d|->",temp->data);
			}else{
				printf("|%d|",temp->data);
			}
                        temp = temp->next;
                }
		printf("\n");
	}
}

void dataFound(int data){
	int pos = 1,count = 0;
	int secOcc = 0;
	int firstOcc = 0;
	struct Node *temp = head;
                while(temp != NULL){
			if(data == temp->data){
				count++;
				secOcc = firstOcc;
				firstOcc = pos;
			}
			pos++;
                        temp = temp->next;
                }
		
		if(count == 0){
			printf("%d NOT Found\n",data);
		}else if(count == 1){
			printf("%d Ocuurs One Time\n",data);
		}else{
			printf("%d Occurs %d time\n",data,count);
			printf("Last Second Occurence At Position : %d\n",secOcc);
		}
}

void main(){
	int num;
	printf("Enter No of Nodes : ");
	scanf("%d",&num);
	for(int i=0 ; i<num ; i++){
		addNode();
	}

	printNode();

	int d;
	printf("Enter Data To Found : \n");
	scanf("%d",&d);

	dataFound(d);
}
