#include <stdio.h>

void function1(int);
void function2(float);
void function3(char);
void function4(int);
void function5(int);

int main()
{
	function1(8);
	function2(8.5);
	function3('9');
	function4(13);
	function5(100000);
}

void function1(int ik)
{
	printf("Вызвали функцию №1. Получен параметр ik=%d\n", ik);
}

void function2(float chak)
{
	printf("Вызвали функцию №2. Получен параметр chak=%f\n", chak);
}

void function3(char lerch)
{
	printf("Вызвали функцию №3. Получен параметр lerch=%c\n", lerch);
}

void function4(int a)
{
	if (a>10) {
		printf("Переменная а > 10\n");
		printf("a = %d\n", a);
	}
	if (a==10) printf("Переменная а == 10\n");
	if (a<10) printf("Переменная а < 10\n");
}

void function5(int i)
{
	for(int k = 0; k < i; k+=10 ) printf("K=%i\n", k);
	printf("Вышли из цикла.\n");
}
