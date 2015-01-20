#ifndef HEADERS_H
#include "Headers.h"
#define HEADERS_H
#endif

class CSpecie
{
private:
	int GeneticInfo[10];
public:
	CSpecie();						// Создание особи со случайными параметрами
	CSpecie(int &init);				// Создание особи с заданными параметрами
	~CSpecie();

	CSpecie(CSpecie &partner_a, CSpecie &partner_b);	// Создание особи путем спаривания

	CSpecie Breed(CSpecie partner); // Отдельный метод спаривания. Возможно не пригодится.
	
	int test;
};