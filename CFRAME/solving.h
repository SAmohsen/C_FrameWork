
#ifndef DATASTRUCURES_ARRAYS_H_
#define DATASTRUCURES_ARRAYS_H_


#include <stdio.h>

/*function returns string length*/
int getstringlength(char *str);
/*function lowercases string */
void lowercase(char *str) ;
/*function uppercases string  */
void uppercase(char *str) ;
/*function copy str2 in  str1*/
void copystring(char *str1, char *str2) ;
/*function concatenate two strings in str1*/
void concatenate(char *str1, char *str2);
/*function check  if string contains only alphapetic characters*/
int is_alpha(char *str);
/*function counts key apperances in specific string*/
int charApperance(char key, char *str) ;
/*function count apperances of upercase characters*/
void FrequencyCharacterArr(char *s, int *frequencyarr) ;
/*function count apperances of lowercase characters*/
void ApperanceCharacterArr(char *s, int *frequencyarr,int*resultcount) ;
/*function remove string spaces*/
void removeStringSpaces(char *str, char *newstr) ;
/*function convert string to 2d character array*/
void gridString(int rows, int cols, char grid[][cols], char str[],int length) ;
/*function prints 2d character array*/
void printgridString(int rows, int cols, char grid[][cols]) ;
/*function count apperances of lowercase characters*/
void  markCharactes (char *s , int *markArr);
/**/
char * oneElmentMatch(int *arr1 ,int *arr2,int length);
/*function makes a not valid string */
void makestringnotvalid(char *str) ;
/*function checks if string is palindrome or not */
int isPalindromeStr(char *str) ;
/*function checks count number of changes  to  string palindrome */
int toPalindromeChanges(char *str, int length) ;
/**/
int maxstringdigitIndex(char *str) ;
/**/
long repeatedString(char* s, long n);
/*Function that prints array elements */
void printarr(int *arr, int length);
/*Function returns maximum array number */
int maxArrNumber(int ar_count, int *ar) ;
/*Function returns index of maximum array number */
int maxArrIdx(int ar_count, int *ar);
/*Function returns index of minimum array number */
int minArrIdx(int ar_count, int *ar) ;
/*function checks that if array is sorted  */
int isArrSorted(int *arr, int length) ;
/*function returns sum of integer array */
int simpleArraySum(int ar_count, int *ar) ;
/*function returns sum of an long array */
long aVeryBigSum(int ar_count, long *ar) ;
/*function counts sorting Violations of an array in descending order  */
int ArrSortedViolations_D(int *arr , int length);
/*function counts sorting Violations of an array in Aescending order  */
int ArrSortedViolations_A(int *arr, int length) ;
/*function that xor Contigous subset in array */
int XORContigousSubsets(int *arr, int arr_length, int start_index) ;
/*function that rotates array right*/
void RotateArrRight(int *arr, int len) ;
/*function that returns max and minimuum sums of subarrays*/
void miniMaxSum(int arr_count, int *arr) ;
/*function returns max adn minimum array elments */
void ArrMaxMini(int *arr, int len, int *globalmax, int *globalmini) ;
/* function returns the absolute differnce of diagonal elements   */
int diagonalDifference(int arr_rows, int arr_columns, int **arr) ;
/*function swaps two elements using pointers */
void makeSwap(int *a, int *b) ;
/*function returns max between two numbers */
int get_max(int num1, int num2) ;
/*function returns factorial of integer number */
int factorial(int num);
/*function raise number to specific power*/
int raisetopower(int num, int power) ;
/*function check if elment is prime or not*/
int isprime(int num) ;
/*function check if elment is positive or not*/
int ispositive(int num) ;
/*function check if elment is even or odd*/
int iseven(int num) ;
/*function that reverse integer number */
int reversenumber(int num) ;
/*function that returns floor sum of two elements */
int flooor(float num1, float num2) ;

#endif /* DATASTRUCURES_ARRAYS_H_ */
