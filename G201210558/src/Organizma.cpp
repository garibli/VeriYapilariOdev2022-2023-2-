/**
* @file Organizma.cpp
* @description Sistemleri dizi olarak saklayan organizma sýnýfý (Bir organizmadaki sistem sayýsýnýn limiti yoktur)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/
#include"Organizma.hpp"

Organizma::Organizma()
{
	sistemSayisi = 0;
	sistemler = NULL;
	mutasyon = false;
}
void Organizma::sistemEkle(Sistem* sistem)
{
	sistemSayisi++;
	Sistem** temp = new Sistem * [sistemSayisi];
	for (int i = 0; i < sistemSayisi - 1; i++)
		temp[i] = sistemler[i];
	temp[sistemSayisi - 1] = sistem;
	delete[] sistemler;
	sistemler = temp;
}
int Organizma::getSistemSayisi()
{
	return sistemSayisi;
}
void Organizma::organizmaYazdir()
{
	system("cls");
	if (mutasyon)
		cout << setw(64) << right << "ORGANIZMA (MUTASYONA UGRADI)" << endl;
	else
		cout << setw(45) << right << "ORGANIZMA" << endl;
	for (int i = 0; i < sistemSayisi; i++)
		sistemler[i]->organizmaYazdir();
}
void Organizma::organizmayiMutasyonaUgrat()
{
	mutasyon = true;
	for (int i = 0; i < sistemSayisi; i++)
		sistemler[i]->organizmayiMutasyonaUgrat();
}
Organizma::~Organizma()
{
	for (int i = 0; i < sistemSayisi; i++)
		delete sistemler[i];
	delete[] sistemler;
}