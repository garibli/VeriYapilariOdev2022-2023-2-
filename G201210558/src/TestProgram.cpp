/**
* @file TestProgram.cpp
* @description Kontrol s�n�f�n� kullanarak ekrana ��kt� verir, enter tu�u girildi�inde h�creyi mutasyona u�rat�p yeniden ekrana yazd�r�r
* @course 2A
* @assignment �dev 2
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