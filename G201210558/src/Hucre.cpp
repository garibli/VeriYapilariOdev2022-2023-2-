/**
* @file Hucre.cpp
* @description Veri.txt deki sat�rlardaki say�lar� tutacak h�cre s�n�f� (her bir say� i�in bir h�cre kullan�l�r)
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include "Hucre.hpp"

Hucre::Hucre(int veri)
{
	this->veri = veri;
}
int Hucre::getVeri()
{
	return veri;
}
void Hucre::dokuyuMutasyonaUgrat()
{
	if (veri % 2) return;
	else veri /= 2;
}