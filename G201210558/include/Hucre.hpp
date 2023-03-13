/**
* @file Hucre.hpp
* @description Veri.txt deki sat�rlardaki say�lar� tutacak h�cre s�n�f� (her bir say� i�in bir h�cre kullan�l�r)
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef HUCRE_HPP
#define HUCRE_HPP

#include<iostream>
using namespace std;

class Hucre
{
private:
	int veri;
public:
	Hucre(int);
	int getVeri();
	void dokuyuMutasyonaUgrat();
};

#endif