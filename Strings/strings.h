/*
 * strings.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef STRINGS_STRINGS_H_
#define STRINGS_STRINGS_H_


int getstringlength(char *str) ;
void lowercase(char *str) ;
void uppercase(char *str) ;
void copystring(char *str1, char *str2) ;
void concatenate(char *str1, char *str2) ;
int is_alpha(char *str);
int charApperance(char key, char *str) ;
void FrequencyCharacterArr(char *s, int *frequencyarr) ;
void ApperanceCharacterArr(char *s, int *frequencyarr,int*resultcount) ;
void removeStringSpaces(char *str, char *newstr) ;
void gridString(int rows, int cols, char grid[][cols], char str[],int length) ;
void printgridString(int rows, int cols, char grid[][cols]) ;
void  markCharactes (char *s , int *markArr);
char * oneElmentMatch(int *arr1 ,int *arr2,int length);
void makestringnotvalid(char *str) ;
int isPalindromeStr(char *str) ;
int toPalindromeChanges(char *str, int length) ;
int maxstringdigitIndex(char *str) ;

#endif /* STRINGS_STRINGS_H_ */
