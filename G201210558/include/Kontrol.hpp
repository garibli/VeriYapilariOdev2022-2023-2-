/**
* @file Kontrol.hpp
* @description Dosyayý okuyup, kontroller gerçekleþtirerek hücre-doku-organ-sistem-organizma baðlantýsýný kurarak organizmayý oluþturur, organizmayý mutasyona uðratýr
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef KONTROL_HPP
#define KONTROL_HPP

#include<fstream>
#include<sstream>
#include"Organizma.hpp"

class Kontrol
{
	Organ* organ;
	Sistem* sistem;
	Organizma* organizma;
	int satirdakiHucreSayisiHesapla(string);
	Doku* DokuOlustur(string);
	void organaDokuEkle(Doku*);
	void sistemeOrganEkle(Organ*);
	void organizmayaSistemEkle(Sistem*);
public:
	Kontrol();
	void DosyaOku();
	void organizmaYazdir();
	void organizmayiMutasyonaUgrat();
	~Kontrol();
};

#endif