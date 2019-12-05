/*
 * Arithmatic.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */


#include "Arithmatic.h"

int get_max(int num1, int num2) {
	if (num1 == num2)
		return 1;
	else if (num1 > num2)
		return num1;
	else
		return num2;
}

int makearithmaticoperation(int num1, int num2, char operation) {
	float arithmatic;
	switch (operation) {
	case '*':
		arithmatic = num1 * num2;
		break;

	case '/':
		arithmatic = num1 / num2;
		break;

	case '+':
		arithmatic = num1 + num2;
		break;
	case '-':
		arithmatic = num1 - num2;
		break;

	default:
		printf("Error Operation...\n");
		return ERROR_OPERATION;
	}

	return arithmatic;

}

int factorial(int num) {
	int fact = 1, i;
	for (i = num; i >= 1; i--) {
		fact = fact * i;
	}
	return fact;
}

int raisetopower(int num, int power) {
	int result = 1;
	for (int i = i = 0; i < power; i++) {
		result = result * num;
	}
	return result;
}
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

int ispositive(int num) {
	if (num >0 ){
		return 1 ;

	}
	else
		return 0;
}

int  iseven (int num ){
	if (num%2==0){
		return 1 ;
	}
	return 0 ;
}
int  reversenumber(int num) {
	int reverse = 0;
	while (num != 0) {
		reverse = reverse * 10;
		reverse = reverse + num % 10;
		num = num / 10;
	}

	return reverse ;

}

int flooor(float num1 , float num2 ) {
float sum = num1+num2 ;
int floor = (int)sum ;
return floor  ;
}
