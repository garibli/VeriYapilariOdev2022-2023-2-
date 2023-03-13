/**
* @file Node.cpp
* @description �kili arama a�ac�nda kullan�lacak doku t�r�nden de�i�ken bar�nd�ran d���m s�n�f�
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Node.hpp"

Node::Node(Doku* dt, Node* lf, Node* rg) {
	data = dt;
	left = lf;
	right = rg;
}