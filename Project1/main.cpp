#ifndef HEADERS_H
	#include "Headers.h"
#define HEADERS_H
#endif

#include "Specie.h"
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	//И все же... Эксперименты с кодировкой.
	printf("Start project. Проверка\n");
	_getch();
	return 0;
}