/**
* @file BST.cpp
* @description Dokularýn ortasýndaki veriye göre aðaca ekleyen ikili arama aðacý sýnýfý
* @course 2A
* @assignment Ödev 2
* @date 25.12.2022
* @author Fuad Garibli
*/

#include"BST.hpp"

void BST::SearchAndAdd(Node*& subNode, Doku* newItem) {
	if (subNode == NULL) subNode = new Node(newItem);
	else if (newItem->ortadakiEleman() <= subNode->data->ortadakiEleman())
		SearchAndAdd(subNode->left, newItem);
	else if (newItem->ortadakiEleman() > subNode->data->ortadakiEleman())
		SearchAndAdd(subNode->right, newItem);
	else return;
}
bool BST::SearchAndDelete(Node*& subNode, Doku* data) {
	if (subNode == NULL) return false;
	if (subNode->data == data) return DeleteNode(subNode);
	else if (data->ortadakiEleman() < subNode->data->ortadakiEleman()) return SearchAndDelete(subNode->left, data);
	else return SearchAndDelete(subNode->right, data);
}
bool BST::DeleteNode(Node*& subNode) {
	Node* DelNode = subNode;

	if (programSonu)
	{
		delete subNode->data;
	}
	if (subNode->right == NULL) subNode = subNode->left;
	else if (subNode->left == NULL) subNode = subNode->right;
	else {
		DelNode = subNode->left;
		Node* parent = subNode;
		while (DelNode->right != NULL) {
			parent = DelNode;
			DelNode = DelNode->right;
		}
		subNode->data = DelNode->data;
		if (parent == subNode) subNode->left = DelNode->left;
		else parent->right = DelNode->left;
	}
	delete DelNode;
	return true;
}
void BST::inorder(Node* subNode) {
	if (subNode != NULL) {
		inorder(subNode->left);
		cout << subNode->data << " ";
		inorder(subNode->right);
	}
}
void BST::preorder(Node* subNode) {
	if (subNode != NULL) {
		cout << subNode->data << " ";
		preorder(subNode->left);
		preorder(subNode->right);
	}
}
void BST::postorder(Node* subNode) {
	if (subNode != NULL) {
		postorder(subNode->left);
		postorder(subNode->right);
		subNode->data->dokuyuMutasyonaUgrat();
		dokular[dokuSayisi++] = subNode->data;
	}
}
int BST::Height(Node* subNode) {
	if (subNode == NULL) return -1;
	return 1 + max(Height(subNode->left), Height(subNode->right));
}
void BST::PrintLevel(Node* subNode, int level) {
	if (subNode == NULL) return;
	if (level == 0) cout << subNode->data << " ";
	else {
		PrintLevel(subNode->left, level - 1);
		PrintLevel(subNode->right, level - 1);
	}
}
bool BST::Search(Node* subNode, Doku* item) {
	if (subNode == NULL) return false;
	if (subNode->data == item) return true;
	if (item < subNode->data) return Search(subNode->left, item);
	else return Search(subNode->right, item);
}
bool BST::Balance(Node* subNode)
{
	if (subNode == NULL) return true;
	if (abs(Height(subNode->left) - Height(subNode->right)) <= 1 && Balance(subNode->left) && Balance(subNode->right)) return true;
	return false;
}
BST::BST() {
	root = NULL;
	programSonu = false;
}
bool BST::isEmpty()const {
	return root == NULL;
}
void BST::Add(Doku* newItem) {
	SearchAndAdd(root, newItem);
}
void BST::Delete(Doku* data) {
	if (SearchAndDelete(root, data) == false) throw "Item not found.";
}
void BST::inorder() {
	inorder(root);
}
void BST::preorder() {
	preorder(root);
}
void BST::postorder() {
	postorder(root);
}
void BST::levelorder() {
	int h = Height();
	for (int level = 0; level <= h; level++) {
		PrintLevel(root, level);
	}
}
Doku** BST::getDokular()
{
	dokular = new Doku * [20];
	dokuSayisi = 0;
	postorder(root);
	return dokular;
}
bool BST::Balance()
{
	return Balance(root);
}
int BST::Height() {
	return Height(root);
}
bool BST::Search(Doku* item) {
	return Search(root, item);
}
Node* BST::first()
{
	return root;
}
void BST::Clear() {
	while (!isEmpty()) DeleteNode(root);
}
BST::~BST() {
	Clear();
}