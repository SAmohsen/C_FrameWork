/*
 * Hashing.h
 *
 *  Created on: Dec 29, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_HASHING_H_
#define DATASTRUCURES_HASHING_H_

#define EMPTY_LOCATION 0
int HashFunction(int key, int tablesize) ;
void HashTable_ClearTable(int *hashtable, int tablesize) ;
void HashTable_InsertElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element) ;
void HashTable_DeleteElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element);
int HashTable_SearchElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element) ;

void HashTable_DisplayTable(int *hashtable, int tablesize);

#endif /* DATASTRUCURES_HASHING_H_ */
