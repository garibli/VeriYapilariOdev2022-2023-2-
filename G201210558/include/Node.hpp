/**
* @file Node.hpp
* @description Ýkili arama aðacýnda kullanýlacak doku türünden deðiþken barýndýran düðüm sýnýfý
* @course 2A
* @assignment Ödev 2
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