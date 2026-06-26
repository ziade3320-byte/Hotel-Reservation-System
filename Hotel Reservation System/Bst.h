#pragma once
#include"Node.h"
class BST {
private:
	Node* root;
public:
    BST() {
		root = nullptr;
	}
	
	Node* insert(Node* root, Room room);
	Node* deleteNode(Node* root, int roomNumber);
	Node* search(Node* root, int roomNumber); 
	void insert(Room room);

	void inorder();
	void inorder(Node* root);
	int count(Node* root);
	int height(Node* root);

	void bookRoom(int roomNumber);
	void cancelBooking(int roomNumber);
	void showAvailableRooms();
	void showAvailableRooms(Node* root);
	void showBookedRooms();
	void showBookedRooms(Node* root);

};