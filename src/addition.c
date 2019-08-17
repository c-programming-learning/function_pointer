/*
 * addition.c
 */

#include <stddef.h>

#include "addition.h"

static addResultCallback additionResult = NULL;

void registerAdditionCallback(addResultCallback _functionPointer)
{
	additionResult = _functionPointer;
}

void addNumbers(int firstNumber, int secondNumber)
{
	int sum = firstNumber + secondNumber;
	if (additionResult != NULL)
	{
		additionResult(firstNumber, secondNumber, sum);
	}
}

