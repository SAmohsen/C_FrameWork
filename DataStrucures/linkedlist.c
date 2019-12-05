/*
 * linkedlist.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */


#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
struct node {
	int data;
	struct node *next;
};

struct node *head = NULL;

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

