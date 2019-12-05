/*
 * searching.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#include "searching.h"

int linearsearch(const int *arr, int size, int key) {

	for (int i = 0; i < size; i++) {

		if (key == arr[i])
			return i;

	}
	return -1;
}

int BinarySearch(const int *arr, int size, int key) {
	int found = 0;
	int first = 0;
	int last = size - 1;
	int middle;
	while (first <= last && !found) {
		middle = (first + last) / 2;
		if (arr[middle] == key) {
			found = 1;
			break;
		} else if (arr[middle] > key) {
			last = middle - 1;
		} else if (arr[middle] < key) {
			first = middle + 1;
		}

	}

	if (found) {
		return middle;
	} else
		return -1;

}

