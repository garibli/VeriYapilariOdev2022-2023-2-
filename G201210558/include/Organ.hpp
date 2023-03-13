/**
* @file Organ.hpp
* @description Dokularý tutan ikili arama aðacý barýndýrýr. (her bir organ 20 doku tutar)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef ORGAN_HPP
#define ORGAN_HPP

#include"BST.hpp"

class Organ
{
	BST* bst;
	int dokuSayisi;
public:
	Organ();
	void dokuEkle(Doku*);
	int getDokuSayisi();
	void organizmaYazdir();
	void organizmayiMutasyonaUgrat();
	~Organ();
};

#endif