/*
 * sorting.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */


#include "sorting.h"
static void makeSwap(int *a, int *b) {

	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
/*
 * swap without using temp variable
 * 1
 void makeSwap(int *a , int *b )
 {
 *a = *a+*b ;
 *b =  *a - *b ;
 *a =  *a - *b ;

 }
 * 2
 void makeSwap(int *a , int *b )
 {
 *a = *a^*b ;
 *b =  *a ^ *b ;
 *a =  *a ^ *b ;

 }
 */


void bubbleSort(int *arr, int size) {
	int min_loc;
	int i, j;
	for (i = 0; i < size - 1; i++) {
		min_loc = i;
		for (j = i + 1; j <= size - 1; j++) {
			if (arr[j] <= arr[min_loc]) {
				makeSwap(&arr[min_loc], &arr[j]);
			}

		}

	}
}
void inserationsort(int *arr, int size) {
	int i, j = 1, key;
	while (j <= size) {
		key = arr[j];
		i = j - 1;
		while (i >= 0 && key < arr[i]) {
			arr[i + 1] = arr[i];
			i = i - 1;

		}
		arr[i + 1] = key;
		j++;

	}

}
void mergesubarrays(int *arr, int left, int middle, int right) {

	int l = 0, r = 0, j = 0, k = left;
	int l_size = middle - left + 1;
	int r_size = right - middle;
	int leftarr[l_size];
	int rightarr[r_size];

	/* initialize left and right arrays */
	for (j = 0; j < l_size; j++) {
		leftarr[j] = arr[left + j];
	}

	for (j = 0; j < r_size; j++) {
		rightarr[j] = arr[middle + 1 + j];
	}

	while (l < l_size && r < r_size) {

		if (leftarr[l] < rightarr[r]) {
			arr[k] = leftarr[l];
			l++;
			k++;
		} else {
			arr[k] = rightarr[r];
			r++;
			k++;
		}

	}

	while (l < l_size) {
		arr[k] = leftarr[l];
		k++;
		l++;
	}
	while (r < r_size) {
		arr[k] = rightarr[r];
		r++;
		k++;
	}

}

void mergesort(int *arr, int left, int right){
	int middle;
	/* divide array while array can be divided */
	if (left < right) {
		middle = (left + right) / 2;
		/* dividing forward */
		mergesort(arr, left, middle);
		mergesort(arr, middle + 1, right);
		/*sorting backward */
		mergesubarrays(arr, left, middle, right);
	}
}
void quickSort(int arr[], int right, int left) {
	int pivot = arr[left];/* choose a random element to be your pivot  arr[middle] is perfered*/
	int i = right;
	int j = left;
/* make sure that pivot in right position */
	while (i <= j) {

		while (arr[i] < pivot) {
			i = i + 1;
		}
		while (arr[j] > pivot) {
			j = j - 1;
		}
		if (i <= j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i = i + 1;
			j = j - 1;
		}
	}

	if (left > i) {
		quickSort(arr, i, left);
	}
	if (right < j) {
		quickSort(arr, right, j);
	}
}
void selectionSort(int *arr, int size) {
	int min_loc;
	int i, j;
	for (i = 0; i < size - 1; i++) {
		min_loc = i;
		for (j = i + 1; j <= size - 1; j++) {
			if (arr[j] <= arr[min_loc]) {
				min_loc = j;
			}
		}
		makeSwap(&arr[min_loc], &arr[i]);
	}
}
