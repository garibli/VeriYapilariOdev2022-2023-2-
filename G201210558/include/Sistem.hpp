/**
* @file Sistem.hpp
* @description Organ dizilerini saklayan sistem s�n�f� (her bir sistem 100 organ tutar)
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef SISTEM_HPP
#define SISTEM_HPP

#include"Organ.hpp"

class Sistem
{
	Organ** organlar;
	int organSayisi;
public:
	Sistem();
	void organEkle(Organ*);
	int getOrganSayisi();
	void organizmaYazdir();
	void organizmayiMutasyonaUgrat();
	~Sistem();
};

#endif