/**
* @file Organ.hpp
* @description Dokularý tutan ikili arama aðacý barýndýrýr. (her bir organ 20 doku tutar)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Organ.hpp"

Organ::Organ()
{
	dokuSayisi = 0;
	bst = new BST();
}
void Organ::dokuEkle(Doku* doku)
{
	dokuSayisi++;
	bst->Add(doku);
}
int Organ::getDokuSayisi()
{
	return dokuSayisi;
}
void Organ::organizmaYazdir()
{
	if (bst->Balance())
		cout << " ";
	else
		cout << "#";
}
void Organ::organizmayiMutasyonaUgrat()
{
	if (bst->first()->data->ortadakiEleman() % 50) return;
	else
	{
		Doku** dokular = bst->getDokular();
		delete bst;
		bst = new BST();
		for (int i = 0; i < dokuSayisi; i++)
		{
			Radix* radix = new Radix(dokular[i], dokular[i]->getHucreSayisi());
			dokular[i] = radix->Sort();
			bst->Add(dokular[i]);
		}
		delete[] dokular;
	}
}
Organ::~Organ()
{
	bst->programSonu = true;
	delete bst;
}