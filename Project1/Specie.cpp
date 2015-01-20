#include "Specie.h"

CSpecie::CSpecie(int &init)
{
	memcpy(&GeneticInfo, &init, 10);
};

CSpecie::CSpecie()
{
	for (int i = 0; i < 10; i++)
		GeneticInfo[i] = rand() % 11;
};

CSpecie::CSpecie(CSpecie *partner_a, CSpecie *partner_b)
{
	CSpecie *P1, *P2;
	int merge;
	P1 = partner_a;
	P2 = partner_b;
	
	for (int i = 0; i < 10; i++)
	{
		if (merge = rand() % 2)
			GeneticInfo[i] = P1->GeneticInfo[i];
		else
			GeneticInfo[i] = P2->GeneticInfo[i];
	}
};

int CSpecie::ChkFirst()
{
	return GeneticInfo[0];
};

