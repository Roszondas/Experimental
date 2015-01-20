#ifndef HEADERS_H
#include "Headers.h"
#define HEADERS_H
#endif

class CSpecie
{
private:
	int GeneticInfo[10];
public:
	CSpecie();				// Creating specie with random parameters
	CSpecie(int &init);		// Creating specie with predefined parameters
	~CSpecie();

	CSpecie(CSpecie &partner_a, CSpecie &partner_b);	// Creating specie by breeding

	CSpecie Breed(CSpecie partner);		// Separate breeding method for test reasons

	int test;
};