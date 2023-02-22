#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Company{
	int empId;
	char empName[20];
	float sal;
	struct Company *next;
}cmp;

void main(){
	cmp *obj1 = (cmp*)malloc(sizeof(cmp));
	cmp *obj2 = (cmp*)malloc(sizeof(cmp));
	cmp *obj3 = (cmp*)malloc(sizeof(cmp));
	obj1->empId = 1;
	strcpy(obj1->empName,"TEJAS");
	obj1->sal = 60.5;
	obj1->next = obj2;
	obj2->empId = 2;
	strcpy(obj2->empName,"AVINASH");
	obj2->sal = 70.5;
	obj2->next = obj3;
	obj3->empId = 3;
	strcpy(obj3->empName,"AKASH");
	obj3->sal = 80.5;
	obj3->next = NULL;

	printf("%d\n",obj1->empId);
	printf("%s\n",obj1->empName);
	printf("%f\n",obj1->sal);
	printf("%d\n",obj2->empId);
	printf("%s\n",obj2->empName);
	printf("%f\n",obj2->sal);
	printf("%d\n",obj3->empId);
	printf("%s\n",obj3->empName);
	printf("%f\n",obj3->sal);
}
