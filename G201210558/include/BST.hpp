/**
* @file BST.hpp
* @description Dokular�n ortas�ndaki veriye g�re a�aca ekleyen ikili arama a�ac� s�n�f�
* @course 2A
* @assignment �dev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#ifndef BST_HPP
#define BST_HPP

#include"Node.hpp"

class BST {
private:
	Node* root;
	Doku** dokular;
	int dokuSayisi;
	void SearchAndAdd(Node*&, Doku*);
	bool SearchAndDelete(Node*&, Doku*);
	bool DeleteNode(Node*&);
	void inorder(Node*);
	void preorder(Node*);
	void postorder(Node*);
	int Height(Node*);
	void PrintLevel(Node*, int);
	bool Search(Node*, Doku*);
	bool Balance(Node*);
public:
	bool programSonu;
	BST();
	bool isEmpty()const;
	void Add(Doku*);
	void Delete(Doku*);
	void inorder();
	void preorder();
	void postorder();
	void levelorder();
	Doku** getDokular();
	bool Balance();
	int Height();
	bool Search(Doku*);
	Node* first();
	void Clear();
	~BST();
};

#endif