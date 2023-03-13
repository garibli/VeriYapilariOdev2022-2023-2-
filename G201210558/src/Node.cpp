/**
* @file Node.cpp
* @description Ýkili arama aðacýnda kullanýlacak doku türünden deðiþken barýndýran düðüm sýnýfý
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"Node.hpp"

Node::Node(Doku* dt, Node* lf, Node* rg) {
	data = dt;
	left = lf;
	right = rg;
}