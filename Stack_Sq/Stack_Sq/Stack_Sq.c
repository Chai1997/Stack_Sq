#include"Stack_Sq.h"

void Init(Stack* s)
{
	s->arr = (int*)malloc(sizeof(int) * MAXSIZE);
	if (s->arr == NULL)
	{
		printf("¿Õ¼ä¿ª±ÙÊ§°Ü\n");
		return;
	}
	else
	{
		s->bottom = 0;
		s->top = 0;
		s->length = MAXSIZE;
	}
}
void Push(Stack* s, int val)
{
	if (s->top - s->bottom >= s->length)
	{
		printf("Õ»ÒÑÂú\n");
		return;
	}
	else
	{
		s->arr[s->top] = val;
		s->top++;
	}
}
bool Pop(Stack* s, int* val)
{
	if (s->bottom == s->top)
	{
		printf("Õ»Îª¿Õ\n");
		return false;
	}
	else
	{
		s->top--;
		*val = s->arr[s->top];
		return true;
	}
}
void Print(Stack* s)
{
	if (s->bottom == s->top)
	{
		printf("Õ»Îª¿Õ\n");
		return -1;
	}
	else
	{
		int i = 0;
		for (i = 0; i < s->top; i++)
		{
			printf("%d", s->arr[i]);
		}
		printf("\n");
	}
}
void Destory(Stack* s)
{
	free(s->arr);
	s->arr = NULL;
	s->bottom = 0;
	s->top = 0;
}
void Clear(Stack* s)
{
	s->top = 0;
}