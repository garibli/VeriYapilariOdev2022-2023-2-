/**
* @file Hucre.cpp
* @description Veri.txt deki satırlardaki sayıları tutacak hücre sınıfı (her bir sayı için bir hücre kullanılır)
* @course 2A
* @assignment Ödev 2
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