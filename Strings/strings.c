/*
 * strings.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#include "string.h"
#include <stdio.h>
int getstringlength(char *str) {
	int counter = 0;
	while (str[counter] != 0) {
		counter++;
	}
	return counter;
}

void lowercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}
void uppercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
}
void copystring(char *str1, char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
void concatenate(char *str1, char *str2) {
	int i = 0;
	while (str1[i] != '\0') {
		i++;
	}
	int j = 0;
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}
int is_alpha(char *str){
	int i = 0;
	while (str[i] != '\0') {
		if ((str[i] >= 97 && str[i] <= 122)||(str[i] >= 65 && str[i] <= 90)){
			i++;
			continue ;
		}

		else
			return 0;
	}
	return 1 ;
}
int charApperance(char key, char *str) {
	int i = 0;
	int counter = 0;
	while (str[i] != '\0') {
		if (key == str[i]) {
			counter++;
		}
		i++;
	}
	return counter;
}
void FrequencyCharacterArr(char *s, int *frequencyarr) {
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	while (alpha[i] != '\0') {
		frequencyarr[i] = charApperance(alpha[i], s);
		i++;
	}
}
void ApperanceCharacterArr(char *s, int *frequencyarr,int*resultcount) {
	char *alpha = "abcdefghijklmnopqrstwvuxyz";
	int i = 0;
	int j = 0 ;
	int counter ;
	while (alpha[i] != '\0') {
		counter= charApperance(alpha[i], s);
		if (counter !=0 ){
			frequencyarr[j] = counter ;
			j++;
		}
		i++;
	}
	*resultcount = j ;
}
void removeStringSpaces(char *str, char *newstr) {
	int i = 0;
	int j = 0;
	while (str[i] != '\0') {
		if (str[i] != ' ') {
			newstr[j] = str[i];
			j++;
		}
		i++;
	}
	newstr[j] = '\0'; // terminate string
}
void gridString(int rows, int cols, char grid[][cols], char str[],int length) {
	int k = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			grid[i][j] = str[k];
			k++;
			if (k >= length) {
				str[k] = '#'; //add a magic char
				str[k + 1] = '\0';
			}

		}
	}
}
void printgridString(int rows, int cols, char grid[][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c", grid[i][j]);

		}
		printf("\n");

	}
}
void  markCharactes (char *s , int *markArr){
    int j = 0 ;
    char key ;
    while (s[j]!='\0')
    {
        key = s[j]-97 ;
        for (int i=0 ; i<26 ; i++){
            if (key == i){
                markArr[i] = 1 ;
            }
        }
        j++ ;
    }
}
char * oneElmentMatch(int *arr1 ,int *arr2,int length){
    char *match = "NO" ;
    for (int i = 0 ; i<length ; i++){
        if ((arr1[i]==1) && (arr2[i]==1)){
            match = "YES";
            break ;
        }

    }
return match ;
}
void makestringnotvalid(char *str) {
	str[0] = '-';
	str[1] = '1';
	str[2] = '\0';

}
int isPalindromeStr(char *str) {
	int flag = 1;
	int right = 0;
	int left = getstringlength(str) - 1;
	while (right < left) {
		if (str[right] != str[left]) {
			flag = 0;
			break;

		}
		right++;
		left--;
	}
	return flag;
}
int toPalindromeChanges(char *str, int length) {
	int changes = 0;
	int  left = 0;
	int right = length - 1;
	while ( left < right) {
		if (str[right] != str[left]) {
			changes++;
		}
		left++;
		right--;
	}

	return changes;
}
int maxstringdigitIndex(char *str) {
	int max_idx = 0;
	char max = str[0];
	int i = 1;
	while (str[i] != '\0') {
		if (str[i] > max) {
			max = str[i];
			max_idx = i;
		}
		i++;
	}

return max_idx;
}

long repeatedString(char* s, long n) {
//count number of a's per one string
    int i = 0 ;
    long count_per_Str = 0 ;
    long total_count = 0 ;
    while (s[i]!='\0'){
        if (s[i]=='a'){
            count_per_Str++ ;
        }
        i++ ;
    }
//see how many times our string fit-in
long fit_in = n/i ;
long ln = n - fit_in * i ;
total_count = fit_in * count_per_Str;
i= 0 ;
while (i<ln){
if (s[i]=='a'){
            total_count++ ;
        }
        i++ ;
}
return total_count ;
}
