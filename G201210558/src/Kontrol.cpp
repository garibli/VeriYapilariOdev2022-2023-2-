/**
* @file Kontrol.cpp
* @description Dosyayý okuyup, kontroller gerçekleþtirerek hücre-doku-organ-sistem-organizma baðlantýsýný kurarak organizmayý oluþturur, organizmayý mutasyona uðratýr
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Kontrol.hpp"

int Kontrol::satirdakiHucreSayisiHesapla(string str)
{
	int count = 1;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			count++;
	}
	return count;
}
Doku* Kontrol::DokuOlustur(string line)
{
	int satirdakiHucreSayisi = satirdakiHucreSayisiHesapla(line);
	Doku* doku = new Doku(satirdakiHucreSayisi);
	string word = "";
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] != ' ' && i != line.length() - 1)
			word += line[i];
		else
		{
			if (i == line.length() - 1 && line[line.length() - 1] != ' ')
				word += line[i];
			stringstream ss(word);
			int number = 0;
			ss >> number;
			Hucre* hucre = new Hucre(number);
			doku->hucreEkle(hucre);
			word = "";
		}
	}
	Radix* radix = new Radix(doku, satirdakiHucreSayisi);
	doku = radix->Sort();
	delete radix;
	return doku;
}
void Kontrol::organaDokuEkle(Doku* doku)
{
	organ->dokuEkle(doku);
	if (organ->getDokuSayisi() == 20)
	{
		sistemeOrganEkle(organ);
		organ = new Organ();
	}
}
void Kontrol::sistemeOrganEkle(Organ* organ)
{
	sistem->organEkle(organ);
	if (sistem->getOrganSayisi() == 100)
	{
		organizmayaSistemEkle(sistem);
		sistem = new Sistem();
	}
}
void Kontrol::organizmayaSistemEkle(Sistem* sistem)
{
	organizma->sistemEkle(sistem);
}
Kontrol::Kontrol()
{
	organ = new Organ();
	sistem = new Sistem();
	organizma = new Organizma();
}
void Kontrol::DosyaOku()
{
	ifstream myfile;
	string line;
	myfile.open("Veri.txt");
	if (!myfile.is_open())
	{
		cerr << "Dosya Acilamadi";
		exit(EXIT_FAILURE);
	}
	while (getline(myfile, line)) {
		Doku* doku = DokuOlustur(line);
		organaDokuEkle(doku);
	}
}
void Kontrol::organizmaYazdir()
{
	organizma->organizmaYazdir();
}
void Kontrol::organizmayiMutasyonaUgrat()
{
	organizma->organizmayiMutasyonaUgrat();
}
Kontrol::~Kontrol()
{
	delete organizma;
}