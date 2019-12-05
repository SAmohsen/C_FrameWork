/*
 * arrays.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_ARRAYS_H_
#define DATASTRUCURES_ARRAYS_H_


#include <stdio.h>

void printarr(int *arr, int length) ;
int maxArrNumber(int ar_count, int *ar) ;
int maxArrIdx(int ar_count, int *ar) ;
int minArrIdx(int ar_count, int *ar) ;
int ArrSortedViolations_D(int *arr , int length);
int simpleArraySum(int ar_count, int *ar) ;
void miniMaxSum(int arr_count, int *arr) ;
int diagonalDifference(int arr_rows, int arr_columns, int **arr) ;
long aVeryBigSum(int ar_count, long *ar) ;
int isArrSorted(int *arr, int length) ;
int XORContigousSubsets(int *arr, int arr_length, int start_index) ;
#endif /* DATASTRUCURES_ARRAYS_H_ */
