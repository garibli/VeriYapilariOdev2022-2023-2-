/**
* @file Sistem.cpp
* @description Organ dizilerini saklayan sistem sýnýfý (her bir sistem 100 organ tutar)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Sistem.hpp"

Sistem::Sistem()
{
	organSayisi = 0;
	organlar = new Organ * [100];
}
void Sistem::organEkle(Organ* organ)
{
	organlar[organSayisi++] = organ;
}
int Sistem::getOrganSayisi()
{
	return organSayisi;
}
void Sistem::organizmaYazdir()
{
	for (int i = 0; i < organSayisi; i++)
		organlar[i]->organizmaYazdir();
	cout << endl;
}
void Sistem::organizmayiMutasyonaUgrat()
{
	for (int i = 0; i < organSayisi; i++)
		organlar[i]->organizmayiMutasyonaUgrat();
}
Sistem::~Sistem()
{
	for (int i = 0; i < organSayisi; i++)
		delete organlar[i];
	delete[] organlar;
}