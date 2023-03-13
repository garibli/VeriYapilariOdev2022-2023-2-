/**
* @file Doku.hpp
* @description Veri.txt deki satýrlarý hücre cinsinden dizide tutan doku sýnýfý (her satýr için bir doku kullanýlýr)
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef DOKU_HPP
#define DOKU_HPP

#include"Hucre.hpp"

class Doku
{
	Hucre** hucreler;
	int hucreSayisi;
public:
	Doku(int);
	void hucreEkle(Hucre*);
	int ortadakiEleman();
	int getHucreSayisi();
	Hucre** getHucreler();
	void dokuyuMutasyonaUgrat();
	~Doku();
};

#endif