/**
* @file Organizma.hpp
* @description Sistemleri dizi olarak saklayan organizma s�n�f� (Bir organizmadaki sistem say�s�n�n limiti yoktur)
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef ORGANIZMA_HPP
#define ORGANIZMA_HPP

#include"Sistem.hpp"
#include<iomanip>

class Organizma
{
	Sistem** sistemler;
	int sistemSayisi;
	bool mutasyon;
public:
	Organizma();
	void sistemEkle(Sistem*);
	int getSistemSayisi();
	void organizmaYazdir();
	void organizmayiMutasyonaUgrat();
	~Organizma();
};

#endif