#include <stdio.h>

#define N 1024

typedef char int8_t;

int8_t stack[N];
int top = 0;

void push(int8_t n)
{
	stack[top++] = n;
}

int8_t pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return (top == 0); // 1: empty
}
#if 0

int is_full(void)
{
	return (top == N); // 1: full
}

void delete(void)
{
	top = 0;
}

#endif

int main(void)
{
	char s[] = "hello aka!";
	int i = 0;

	while(s[i] != '\0'){
		push(s[i]);
		i++;
	}

	while(is_empty() != 1){
		printf("%c", pop());
	}
	printf("\n");

	return 0;
}
