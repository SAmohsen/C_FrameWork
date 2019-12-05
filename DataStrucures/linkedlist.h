/*
 * linkedlist.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_LINKEDLIST_H_
#define DATASTRUCURES_LINKEDLIST_H_


extern struct node ;

extern struct node *head ;

void insertbeginning(int data) ;
void insertend(int data) ;
void insertpos(int data, int pos) ;
void deletebeginning() ;
void deletelast() ;
void deletepos(int pos) ;
void printlinkedlist() ;
int countelements() ;
int findelement(int key) ;
#endif /* DATASTRUCURES_LINKEDLIST_H_ */
