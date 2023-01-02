#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node{
	
};

void addNode(){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

	char ch;
	int i=0;
	while((ch = getchar())!='\n'){

		i++;
	}

	newNode->next = NULL;

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
	struct Node *temp = head;
	while(temp != NULL){
		if(temp->next != NULL){
			printf("||",);
			printf("||",);
			printf("||->",);
		}else{
			printf("||",);
			printf("||",);
			printf("||",);
		}

		temp = temp->next;
	}
}

void main(){
	int no;
	printf("Enter No of Nodes : \n");
	scanf("%d",&no);
	for(int i=1 ; i<=no ; i++){
		addNode();
	}
	printNode();
}
