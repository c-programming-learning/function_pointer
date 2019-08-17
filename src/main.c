/*
 ============================================================================
 Name        : functionPointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "addition.h"

void additionResultCallback(int firstNumber, int secondNumber, int sum)
{
	printf("Sum of %d and %d = %d", firstNumber, secondNumber, sum);
}

int main(void)
{
	int a = 10, b = 15;
	registerAdditionCallback(additionResultCallback);
	addNumbers(a, b);

	return EXIT_SUCCESS;
}
