#ifndef HEADERS_H
#include "Headers.h"
#define HEADERS_H
#endif

class CSpecie
{
private:
	int GeneticInfo[10];
public:
	CSpecie();						// �������� ����� �� ���������� �����������
	CSpecie(int &init);				// �������� ����� � ��������� �����������
	~CSpecie();

	CSpecie(CSpecie &partner_a, CSpecie &partner_b);	// �������� ����� ����� ����������

	CSpecie Breed(CSpecie partner); // ��������� ����� ����������. �������� �� ����������.
	
	int test;
};