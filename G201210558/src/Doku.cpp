/**
* @file Doku.cpp
* @description Veri.txt deki satýrlarý hücre cinsinden dizide tutan doku sýnýfý (her satýr için bir doku kullanýlýr)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Doku.hpp"

Doku::Doku(int hucreSayisi)
	{
		this->hucreSayisi = 0;
		hucreler = new Hucre * [hucreSayisi];
	}
void Doku::hucreEkle(Hucre* hucre)
	{
		hucreler[hucreSayisi++] = hucre;
	}
int Doku::ortadakiEleman()
	{
		return hucreler[hucreSayisi / 2]->getVeri();
	}
int Doku::getHucreSayisi()
	{
		return hucreSayisi;
	}
Hucre** Doku::getHucreler()
	{
		return hucreler;
	}
void Doku::dokuyuMutasyonaUgrat()
	{
		for (int i = 0; i < hucreSayisi; i++)
			hucreler[i]->dokuyuMutasyonaUgrat();
	}
Doku::~Doku()
	{
		for (int i = 0; i < hucreSayisi; i++)
			delete hucreler[i];
		delete[] hucreler;
	}