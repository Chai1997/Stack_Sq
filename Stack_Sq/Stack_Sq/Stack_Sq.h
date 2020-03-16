#pragma once

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#define MAXSIZE 5
typedef struct Stack {
	int top;
	int bottom;
	int* arr;
	int length;
}Stack, *pStack;

void Init(Stack* s);
void Push(Stack* s, int val);
bool Pop(Stack* s, int* val);
void Print(Stack* s);
void Destory(Stack* s);
void Clear(Stack* s);