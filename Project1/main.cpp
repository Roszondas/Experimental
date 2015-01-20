#ifndef HEADERS_H
	#include "Headers.h"
#define HEADERS_H
#endif

#include "Specie.h"

int main()
{
	CSpecie *species[20];

	printf("Start project.\n");
	srand(unsigned int(time(0)));

	species[0] = new CSpecie();
	species[1] = new CSpecie();
	
	printf("%i ", species[0]->ChkFirst());
	printf("%i ", species[1]->ChkFirst());

	species[2] = new CSpecie(species[0], species[1]);
	printf("%i ", species[2]->ChkFirst());

	//_getch();
	printf("\nClosing project.\n");
	return 0;
}