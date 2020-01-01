/*
 * linkedlist.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_LINKEDLIST_H_
#define DATASTRUCURES_LINKEDLIST_H_

struct node {
	int data;
	struct node *next;
};
/******************************************************************************
 * 								Linked List Insertion
 * ***************************************************************************/
/*inserting element at front of linked list */
void Slnkdlst_inseartAtfront(struct node **head_ptr, int newdata) ;
/*appending element linked list */
void Slnkdlst_inseartAtEnd(struct node **head_ptr, int newdata) ;
/*insert element at specific position  */
void Slnkdlst_insertAtPosition(struct node **head_ptr,int pos ,int newdata) ;
/*insert element after a specific  node  */
void Slnkdlst_insertAfterNode(struct node *prevnode , int newdata) ;
/******************************************************************************
 * 								Linked List Deletions
 * ***************************************************************************/
/*delete first element of linked list */
void Slnkdlst_deleteFront(struct node **head_ptr) ;
/*delete last element of linked list */
/*delete element at specific position in  linked list */
void Slnkdlst_deleteAtPos(struct node **head_ptr, int pos) ;
/******************************************************************************
 * 								Linked List search
 * ***************************************************************************/
int  Slnkdlst_searchKey(struct node **head_ptr, int key) ;
/******************************************************************************
 * 								print linked list
 * ***************************************************************************/
void Slnkdlst_printList(struct node *node);
#endif /* DATASTRUCURES_LINKEDLIST_H_ */
