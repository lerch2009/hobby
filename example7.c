#include <stdio.h>

int main(int argc, char const *argv[])
{
	float radius, length, area;
	printf("Введите значение радиуса:\n");
	scanf("%f", &radius);
	length = 3.1415 * 2 * radius;
	area = 3.1415 * radius * radius;
	printf("Радиус = %f, длина окружности = %f, площадь круга = %f\n",
		radius, length, area );

	return 0;
 }