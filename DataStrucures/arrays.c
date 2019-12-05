/*
 * arrays.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#include "arrays.h"
void printarr(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
int maxArrNumber(int ar_count, int *ar) {
	int max = ar[0];

	for (int i = 1; i < ar_count; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	return max;
}
int maxArrIdx(int ar_count, int *ar) {
	int max_idx = 0;
	int max = ar[0];
	for (int i = 1; i < ar_count; i++) {
		if (ar[i] > max) {
			max = ar[i];
			max_idx = i;
		}
	}
	return max_idx;
}
int minArrIdx(int ar_count, int *ar) {
	int min_idx = 0;
	int min = ar[0];
	for (int i = 1; i < ar_count; i++) {
		if (ar[i] < min) {
			min = ar[i];
			min_idx = i;
		}
	}
	return min_idx;
}
int ArrSortedViolations_D(int *arr , int length){
	int i = 0 ;
	int violations =0 ;
		while (i<length-1){
			if (arr[i]<arr[i+1]){
				violations++;
			}
			i++;
		}
		return violations ;
	}
int simpleArraySum(int ar_count, int *ar) {
	/*
	 * Write your code here.
	 */
	int sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}
void miniMaxSum(int arr_count, int *arr) {
	long minisum=0;
	long maxsum=0;
	long sum = 0 ;
	int subarrLength = 4;
	int n ;
	int j ;
	/* initial values */
	for (int i = 0; i < arr_count - 1; i++) {
		minisum += arr[i];
		maxsum += arr[i];
	}

	for (int i = 0; i < arr_count; i++) {
		j = i;
		n = 0 ;
		sum = 0 ;
		while (n < subarrLength) {
			sum = sum + arr[j];
			j = (j + 1) % arr_count;
			n++;
		}

		if (sum > maxsum) {
			maxsum = sum;
		} else if (sum < minisum) {
			minisum = sum;
		} else {

		}

	}
	printf("%ld %ld"  ,minisum, maxsum);
}
int diagonalDifference(int arr_rows, int arr_columns, int **arr) {
	int abs_difference;
	int primaryDiagonalSum = 0;
	int SeconderyDiagonalSum = 0;
	for (int i = 0; i < arr_rows; i++) {
		for (int j = 0; j < arr_columns; j++) {
			if (i == j) {
				primaryDiagonalSum += arr[i][j];
			}
		}
		SeconderyDiagonalSum += arr[i][arr_columns - i - 1];
	}
	abs_difference = primaryDiagonalSum - SeconderyDiagonalSum;
	if (abs_difference < 0) {
		abs_difference = abs_difference * -1;
	}

	return abs_difference;
}
long aVeryBigSum(int ar_count, long *ar) {

	long sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}
int isArrSorted(int *arr, int length) {
	int i = 0;
	int flag = 1;
	while (i < length - 1) {
		if (arr[i] > arr[i + 1]) {
			flag = 0;
			break;
		}
		i++;
	}
	return flag;
}

int XORContigousSubsets(int *arr, int arr_length, int start_index) {
	int res;
	int totalres = 0;
	for (int j = start_index; j < arr_length; j++) {
		res = 0;
		for (int k = start_index; k <= j; k++) {
			res = res ^ arr[k];
		}
		totalres = totalres ^ res;
	}
	return totalres;
}
