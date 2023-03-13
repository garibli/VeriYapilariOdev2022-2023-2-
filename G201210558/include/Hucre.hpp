/**
* @file Hucre.hpp
* @description Veri.txt deki satýrlardaki sayýlarý tutacak hücre sýnýfý (her bir sayý için bir hücre kullanýlýr)
* @course 2A
* @assignment Ödev 2
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