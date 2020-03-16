#include"Stack_Sq.h"

int main()
{
	int val = 0;
	Stack s;
	Init(&s);
	Push(&s, 2);
	Push(&s, 4);
	Print(&s);
	//Clear(&s);
	//Destory(&s);
	Pop(&s, &val);
	printf("%d\n", val);
	Print(&s);
	return 0;
}