/**
* @file Doku.hpp
* @description Veri.txt deki sat�rlar� h�cre cinsinden dizide tutan doku s�n�f� (her sat�r i�in bir doku kullan�l�r)
* @course 2A
* @assignment �dev 2
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