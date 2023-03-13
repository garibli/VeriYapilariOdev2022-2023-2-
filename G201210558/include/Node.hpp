/**
* @file Node.hpp
* @description �kili arama a�ac�nda kullan�lacak doku t�r�nden de�i�ken bar�nd�ran d���m s�n�f�
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef NODE_HPP
#define NODE_HPP

#include"Radix.hpp"

class Node {
public:
	Doku* data;
	Node* left;
	Node* right;
	Node(Doku* dt, Node* = NULL, Node* = NULL);
};


#endif