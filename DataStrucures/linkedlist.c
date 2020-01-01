/*
 * linkedlist.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */


#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
/******************************************************************************
 * 								Linked List Insertion
 * ***************************************************************************/

/*inserting element at front of linked list */
void Slnkdlst_inseartAtfront(struct node **head_ptr, int newdata) {
	/*Allocating a new node in memory*/
	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	/*inserting data */
	newnode->data = newdata;
	/*head is pointer points to first node in linked list*/
	newnode->next = (*head_ptr);
	/*make head points to my node because it is in front now :"D */
	(*head_ptr) = newnode;

}
/*appending element linked list */
void Slnkdlst_inseartAtEnd(struct node **head_ptr, int newdata) {
	/*Allocating a new node in memory*/
	struct node *newnode = (struct node*) malloc(sizeof(struct node));
	/*inserting data */
	newnode->data = newdata;
	/*This new node is going to be the last node, so make next of it as NULL*/
	newnode->next = NULL;
	/*iterator to traverse my linked list*/
	struct node *itr = *head_ptr;
	while (itr->next != NULL)/*loop until reach the end of linked list*/
	{
		itr = itr->next;
	}

	/* Change the next of last node */
	itr->next = newnode;
}

/*insert element at specific position  */
void Slnkdlst_insertAtPosition(struct node **head_ptr,int pos ,int newdata) {
	if ((*head_ptr == NULL)||(pos==1))
	{
		Slnkdlst_inseartAtfront(head_ptr, newdata);
	}
	else
	{
		/*Allocating a new node in memory*/
		struct node *newnode = (struct node*) malloc(sizeof(struct node));
		/*inserting data */
		newnode->data = newdata;
		/*iterator to traverse my linked list*/
		struct node *prev = *head_ptr;
		/*iterator to get the required position*/
		unsigned char itr = 1;
		while (itr < pos - 1) {
			prev = prev->next;
			itr++;
		}
		/*fix links*/
		newnode->next = prev->next;
		prev->next = newnode;
	}
}


/*insert element after a specific  node  */
void Slnkdlst_insertAfterNode(struct node *prevnode , int newdata) {
	if (prevnode != NULL) {
		/*Allocating a new node in memory*/
		struct node *newnode = (struct node*) malloc(sizeof(struct node));
		/*inserting data */
		newnode->data = newdata;
		/*just fix links*/
		newnode->next = prevnode->next;
		prevnode->next = newnode;
	}
}

/******************************************************************************
 * 								Linked List Deletions
 * ***************************************************************************/
/*delete first element of linked list */
void Slnkdlst_deleteFront(struct node **head_ptr) {
	if(*head_ptr!=NULL){
		struct node *tempnode = *head_ptr ;
		*head_ptr =tempnode->next ;/* make head points to second element*/
		free(tempnode);/*delete linked list first element*/
	}
}

/*delete last element of linked list */
void Slnkdlst_deleteLast(struct node **head_ptr) {
	if(*head_ptr!=NULL){
		struct node *current = *head_ptr ;/*pointer to the node that should deleted*/
		struct node *prev = NULL ;/*pointer to previous node to make it last node */
		while(current->next!=NULL){
			prev = current;
			current=current->next;/*loop till reach last node in list*/

		}
		prev->next=NULL; /*make previous node the last node in list */
		free(current);/*delete the last node in list */

	}
}
/*delete element at specific position in  linked list */
void Slnkdlst_deleteAtPos(struct node **head_ptr, int pos) {
	if ((*head_ptr != NULL) && (pos != 1)) {
		struct node *current = *head_ptr;/*pointer to the node that should deleted*/
		struct node *prev = NULL;/*pointer to previous node to make it last node */
		/*iterator to get the required position*/
		unsigned char itr = 1;
		while (itr < pos) {
			prev = current;
			current = current->next;
			itr++;/*loop till reach  the desired node*/
		}
		prev->next = current->next;
		free(current);
	}
	else
	{
		Slnkdlst_deleteFront(head_ptr);

	}
}

/******************************************************************************
 * 								Linked List search
 * ***************************************************************************/
/*delete element at specific position in  linked list */
int  Slnkdlst_searchKey(struct node **head_ptr, int key) {
		int pos = 0;
		struct node*current = *head_ptr ;/*pointing to first node */
		while(current!=NULL){
			++pos ;
			if(current->data==key){
				return pos ;
			}
			current=current->next ;
		}
		return -1;/*element is not in list*/

}
/******************************************************************************
 * 								print linked list
 * ***************************************************************************/
void Slnkdlst_printList(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

#if 0
void insertbeginning(int data) {
	struct node *newnode = (struct node *) malloc(sizeof(struct node));
	if (head == NULL) {
		newnode->data = data;
		newnode->next = NULL;
		head = newnode;
	} else {

		newnode->data = data;
		newnode->next = head;
		head = newnode;

	}

}

void insertend(int data) {
	if (head == NULL) {
		insertbeginning(data);
	} else {
		struct node *newnode = (struct node *) malloc(sizeof(struct node));
		newnode->data = data;
		newnode->next = NULL;
		struct node * temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newnode;

	}
}

void insertpos(int data, int pos) {

	if (pos == 1) {
		insertend(data);
	}

	else {
		struct node *newnode = (struct node *) malloc(sizeof(struct node));
		newnode->data = data;
		newnode->next = NULL;

		struct node * prev = head;
		for (int i = 0; i < pos - 2; i++) {
			prev = prev->next;
			if (prev == NULL) {
				printf("Error wrong position ....");
				return;
			}
		}

		newnode->next = prev->next;
		prev->next = newnode;

	}

}
void deletebeginning() {
	if (head == NULL) {
		printf("Empty linked list");
	}
	struct node *temp = head;
	head = head->next;
	free(temp);
}
void deletelast() {
	if (head == NULL) {
		printf("Empty linked list");
	}

	struct node *temp = head;
	struct node *prev;
	while (temp->next != NULL) {
		prev = temp;
		temp = temp->next;
	}
	prev->next = NULL;
	free(temp);

}
void deletepos(int pos) {
	if (head == NULL) {
		printf("Empty linked list");
	}
	if (pos == 1) {
		deletebeginning();
	}

	else {
		struct node * prev = head;
		struct node *target;
		for (int i = 0; i < pos - 2; i++) {
			prev = prev->next;
			if (prev == NULL) {
				printf("Error wrong position ....");
				return;
			}
		}
		target = prev->next;
		prev->next = target->next;
		free(target);

	}

}
void printlinkedlist() {
	struct node * temp;
	temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}

}
int countelements() {
	struct node * temp;
	temp = head;
	int counter = 0;
	while (temp != NULL) {
		temp = temp->next;
		counter++;
	}
	return counter;
}

int findelement(int key) {

	struct node *temp = head;
	int i = 1;
	while (temp != NULL) {
		if (temp->data == key) {
			return i;
		}
		i++;
		temp = temp->next;
	}

	return -1;
}

#endif
