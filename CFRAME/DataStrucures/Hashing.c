/*
 ============================================================================
 Name        : Hashing.c
 Author      : sayed mohsen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Hashing.h"

int HashFunction(int key, int tablesize) {
	return key % tablesize;
}

void HashTable_ClearTable(int *hashtable, int tablesize) {
	for (int itr = 0; itr < tablesize; itr++) {
		*(hashtable + itr) = EMPTY_LOCATION;
	}
}

void HashTable_InsertElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element) {
	int cnt = 0;
	int endflag = 0;
	int pos = (*hfn_Ptr)(element, tablesize);
	while (EMPTY_LOCATION != *(hashtable + pos)) {
		/*linear probing */
		pos = (pos + 1) % tablesize;
		cnt++;
		if (cnt == tablesize) {
			endflag = 1;
			break;
		}
	}

	if (!endflag) {
		*(hashtable + pos) = element;

	} else {
		printf("Error : Table Is Full\n");
	}
}
void HashTable_DeleteElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element){
	int cnt = 0;
	int endflag = 0;
	int pos = (*hfn_Ptr)(element, tablesize);
	while (element != *(hashtable + pos)) {
		/*linear probing */
		pos = (pos + 1) % tablesize;
		cnt++;
		if (cnt == tablesize) {
			endflag = 1;
			break;
		}
	}
	if (!endflag) {
		*(hashtable + pos) = EMPTY_LOCATION;
	} else {
		printf("Error Element Not Found \n");
	}
}
int HashTable_SearchElement(int *hashtable, int tablesize,int (*hfn_Ptr)(int, int), int element) {
	int cnt = 0;
	int endflag = 0;
	int pos = (*hfn_Ptr)(element, tablesize);
	while (element != *(hashtable + pos)) {
		/*linear probing */
		pos = (pos + 1) % tablesize;
		cnt++;
		if (cnt == tablesize) {
			endflag = 1;
			break;
		}
	}
	if (!endflag) {
		return pos;
	} else {
		printf("Element %d not Found..\n", element);
		return -1;
	}
}


void HashTable_DisplayTable(int *hashtable, int tablesize) {
	for (int itr = 0; itr < tablesize; itr++) {
		printf(" %d ", hashtable[itr]);
	}
	printf("\n");
}

