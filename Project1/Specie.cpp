#include "Specie.h"

//SVN test

CSpecie::CSpecie(int &init)
{
	memcpy(&GeneticInfo, &init, 10);
};

CSpecie::CSpecie()
{
	srand( unsigned int( time(0) ) );
	for (int i = 0; i < 10; i++)
		GeneticInfo[i] = rand() % 10;
};

CSpecie::CSpecie(CSpecie &partner_a, CSpecie &partner_b)
{
	CSpecie *P1, *P2;
	P1 = &partner_a;
	P2 = &partner_b;

#ifdef DEBUG
	printf("DEBUG");
#endif

};