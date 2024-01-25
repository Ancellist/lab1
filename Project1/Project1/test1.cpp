#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main1() {
	float h = 12;
	float g = 9.8;
	float t = sqrt(2*h/g);

	printf("Высота с которой падает предмет %f метров\n", h);
	printf("Коснется через %f секунд\n", t);
}