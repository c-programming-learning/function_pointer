/*
 * addition.h
 */

#ifndef ADDITION_H_
#define ADDITION_H_

// define a function pointer
typedef void (*addResultCallback)(int, int, int);

/*This function will register a function pointer*/
void registerAdditionCallback(addResultCallback _functionPointer);

/*function will add two numbers and result will be provided in the callback*/
void addNumbers(int firstNumber, int secondNumber);

#endif /* ADDITION_H_ */
