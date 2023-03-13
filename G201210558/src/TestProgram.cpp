/**
* @file TestProgram.cpp
* @description Kontrol sýnýfýný kullanarak ekrana çýktý verir, enter tuþu girildiðinde hücreyi mutasyona uðratýp yeniden ekrana yazdýrýr
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"TestProgram.hpp"

TestProgram::TestProgram()
{
	Kontrol* kontrol = new Kontrol();
	kontrol->DosyaOku();
	kontrol->organizmaYazdir();
	string ch;
	getline(cin, ch);
	kontrol->organizmayiMutasyonaUgrat();
	kontrol->organizmaYazdir();
}
TestProgram::~TestProgram()
{
	delete kontrol;
}