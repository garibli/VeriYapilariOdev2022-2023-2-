/**
* @file Organizma.hpp
* @description Sistemleri dizi olarak saklayan organizma sýnýfý (Bir organizmadaki sistem sayýsýnýn limiti yoktur)
* @course 2A
* @assignment Ödev 2
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