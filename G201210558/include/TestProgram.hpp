/**
* @file TestProgram.hpp
* @description Kontrol sýnýfýný kullanarak ekrana çýktý verir, enter tuþu girildiðinde hücreyi mutasyona uðratýp yeniden ekrana yazdýrýr
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef TESTPROGRAM_HPP
#define TESTPROGRAM_HPP
#include"Kontrol.hpp"

class TestProgram
{
	Kontrol* kontrol;
public:
	TestProgram();
	~TestProgram();
};

#endif