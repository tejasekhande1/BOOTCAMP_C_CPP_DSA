#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

Node* head = NULL;

Node* createNode(){
	Node* newNode = (Node*)malloc(sizeof(Node));
	printf("Enter Data : ");
	scanf("%d",&newNode->data);
	newNode->next = NULL;
	return newNode;
}

void addNode(){
	Node* newNode = createNode();
	if(head == NULL){
		head = newNode;
	}else{	
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

int countNode(){
	int cnt = 0;
	if(head == NULL){
                printf("Node NOT Found\n");
                return -1;
        }else{
                Node* temp = head;
                while(temp != NULL){
			cnt++;
                        temp = temp->next;
		}
	}
	return cnt;
}

int printNode(){
	if(head == NULL){
		printf("Node NOT Found\n");
		return -1;
	}else{
		Node* temp = head;
		while(temp != NULL){
			if(temp->next != NULL){
				printf("|%d|->",temp->data);
			}else{
				printf("|%d|\n",temp->data);
			}
			temp = temp->next;
		}
		return 0;
	}
}

int revNodes(){
	if(head == NULL){
		printf("Node NOT Found\n");
		return -1;
	}else{
		if(head->next == NULL){
			printf("ONLY ONE NODE PRESENT\n");
		}else{
			struct Node *temp1 = head;
		        struct Node *temp2 = head;
        		int cnt = countNode();
	        	int x = 0 ;

       	 		while(x < (cnt/2)){               
     		 	int y = 1;
                	while(y < (cnt-x)){
                        	temp2 = temp2->next;
                        	y++;
               	 	}
                	int tmp = temp2->data;
                	temp2->data = temp1->data;
                	temp1->data = tmp;

                	temp2 = head;
                	temp1 = temp1->next;

                	x++;

			}
		}		
	return 0;
	}	
}

void main(){
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	for(int i=1 ; i<=num ; i++){
		addNode();
	}
	printNode();

	int cnt = countNode();

	revNodes();
	printNode();
}
