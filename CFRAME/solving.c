
#include "solving.h"
/*function returns string length*/
int getstringlength(char *str) {
	int counter = 0;
	while (str[counter] != 0) {
		counter++;
	}
	return counter;
}
/*function lowercases string */
void lowercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}
/*function uppercases string  */
void uppercase(char *str) {
	int i = 0;
	while (str[i] != 0) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
}
/*function copy str2 in  str1*/
void copystring(char *str1, char *str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
}
/*function concatenate two strings in str1*/
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
/*function check  if string contains only alphapetic characters*/
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
/*function counts key apperances in specific string*/
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
/*function count apperances of upercase characters*/
void FrequencyCharacterArr(char *s, int *frequencyarr) {
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	while (alpha[i] != '\0') {
		frequencyarr[i] = charApperance(alpha[i], s);
		i++;
	}
}
/*function count apperances of lowercase characters*/
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
/*function remove string spaces*/
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
/*function convert string to 2d character array*/
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
/*function prints 2d character array*/
void printgridString(int rows, int cols, char grid[][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%c", grid[i][j]);

		}
		printf("\n");

	}
}
/*function count apperances of lowercase characters*/
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
/**/
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
/*function makes a not valid string */
void makestringnotvalid(char *str) {
	str[0] = '-';
	str[1] = '1';
	str[2] = '\0';

}
/*function checks if string is palindrome or not */
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
/*function checks count number of changes  to  string palindrome */
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
/**/
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
/**/
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

/*Function that prints array elements */
void printarr(int *arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
}


/*Function returns maximum array number */
int maxArrNumber(int ar_count, int *ar) {
	int max = ar[0];

	for (int i = 1; i < ar_count; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	return max;
}
/*Function returns index of maximum array number */
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

/*Function returns index of minimum array number */
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


/*function checks that if array is sorted  */
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

/*function returns sum of integer array */
int simpleArraySum(int ar_count, int *ar) {
	int sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}

/*function returns sum of an long array */
long aVeryBigSum(int ar_count, long *ar) {

	long sum = 0;
	for (int i = 0; i < ar_count; i++) {
		sum = sum + ar[i];
	}
	return sum;
}
/*function counts sorting Violations of an array in descending order  */
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
/*function counts sorting Violations of an array in Aescending order  */
int ArrSortedViolations_A(int *arr, int length) {
	int i = 0;
	int violations = 0;
	while (i < length - 1) {
		if (arr[i] > arr[i + 1]) {
			violations++;
		}
		i++;
	}
	return violations;
}
/*function that xor Contigous subset in array */
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
/*function that rotates array right*/
void RotateArrRight(int *arr, int len) {
//pickup last element
	int num = arr[len - 1];
	//shift all arr positions
	for (int i = len - 2; i >= 0; i--) {
		arr[i + 1] = arr[i];
	}
	arr[0] = num;
}
/*function that returns max and minimuum sums of subarrays*/
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

/*function returns max adn minimum array elments */
void ArrMaxMini(int *arr, int len, int *globalmax, int *globalmini) {
	int max = arr[0];
	int mini = arr[0];
	for (int i = 1; i < len; i++) {
		if (arr[i] > max) {
			max = arr[i];
		} else if (arr[i] < mini) {
			mini = arr[i];
		} else {

		}
	}
	*globalmax = max;
	*globalmini = mini;
}
/* function returns the absolute differnce of diagonal elements   */
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
/*function swaps two elements using pointers */
void makeSwap(int *a, int *b) {

	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}
/*function returns max between two numbers */
int get_max(int num1, int num2) {
	if (num1 == num2)
		return 1;
	else if (num1 > num2)
		return num1;
	else
		return num2;
}

/*function returns factorial of integer number */
int factorial(int num) {
	int fact = 1, i;
	for (i = num; i >= 1; i--) {
		fact = fact * i;
	}
	return fact;
}
/*function raise number to specific power*/
int raisetopower(int num, int power) {
	int result = 1;
	for (int i = i = 0; i < power; i++) {
		result = result * num;
	}
	return result;
}
/*function check if elment is prime or not*/
int isprime(int num) {
	int i, flag = 0;
	for (i = 2; i <= num - 1; i++) {
		if (num % i == 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		return 1;

	else
		return 0;
}
/*function check if elment is positive or not*/
int ispositive(int num) {
	if (num > 0) {
		return 1;

	} else
		return 0;
}
/*function check if elment is even or odd*/
int iseven(int num) {
	if (num % 2 == 0) {
		return 1;
	}
	return 0;
}
/*function that reverse integer number */
int reversenumber(int num) {
	int reverse = 0;
	while (num != 0) {
		reverse = reverse * 10;
		reverse = reverse + num % 10;
		num = num / 10;
	}
	return reverse;
}
/*function that returns floor sum of two elements */
int flooor(float num1, float num2) {
	float sum = num1 + num2;
	int floor = (int) sum;
	return floor;
}
