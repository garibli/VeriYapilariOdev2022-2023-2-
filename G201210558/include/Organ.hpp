/**
* @file Organ.hpp
* @description Dokular� tutan ikili arama a�ac� bar�nd�r�r. (her bir organ 20 doku tutar)
* @course 2A
* @assignment �dev 2
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