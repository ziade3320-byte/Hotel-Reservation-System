#include"Bst.h"
#include"Node.h"
#include <iostream>
#include <algorithm>
// Function to insert a new node into the BST
void BST::insert(Room room)
{
	root = insert(root, room);
}

Node* BST::insert(Node* root, Room room) {
	if (root == nullptr) {
		return new Node(room);
	}
	if (room.roomNumber < root->data.roomNumber) {
		root->left = insert(root->left, room);
	}
	else if (room.roomNumber > root->data.roomNumber) {
		root->right = insert(root->right, room);
	}
	return root;
}
// Function to search a node from the BST
Node* BST::search(Node* root, int roomNumber) {
	if (root == nullptr) {
		return nullptr;
	}
	if (roomNumber < root->data.roomNumber) {
		return search(root->left, roomNumber);
	}
	else if(roomNumber > root->data.roomNumber) {
		return  search(root->right, roomNumber);
	}
	return root;
}
// Function to perform inorder traversal of the BST
void BST::inorder()
{
	inorder(root);
}
void BST::inorder(Node* root)
{
	if (root == nullptr)
	{
		return;
	}

	inorder(root->left);

	cout << root->data.roomNumber << endl;

	inorder(root->right);
}
// Function to count the number of nodes in the BST
int BST::count(Node* root) {
	if (root == nullptr) {
		return 0;
	}
return 1 + count(root->left) + count(root->right);
}
// Function to calculate the height of the BST
int BST::height(Node* root) {
	if (root == nullptr) {
		return 0;
	}

    int leftHeight = height(root->left);
	int rightHeight = height(root->right);

	return max(leftHeight, rightHeight) + 1;
}
// Function to book a room
void BST::bookRoom(int roomNumber)
{
	Node* room = search(root, roomNumber);

	if (room == nullptr) {
		cout << "Room not found!" << endl;
		return;
	}
	room->data.isBooked = true;
    cout<<"room "<<roomNumber<<" booked successfully!" << endl;
	}
// Function to cancel a booking
void BST::cancelBooking(int roomNumber)
{
	Node* temp = search(root, roomNumber);

	if (temp == nullptr)
	{
		cout << "Room not found";
		return;
	}

	if (temp->data.isBooked == false)
	{
		cout << "Room is already available";
		return;
	}

	temp->data.isBooked = false;

	cout << "Booking cancelled successfully";
}
// Function to display available rooms
void BST::showAvailableRooms()
{
	showAvailableRooms(root);
}

void BST::showAvailableRooms(Node* root) {
	if (root == nullptr) {
		return;
	}
	showAvailableRooms(root->left);
	if (!root->data.isBooked) {
		cout << "This room is avaliable:" << root->data.roomNumber;
	}

	showAvailableRooms(root->right);
}
// Function to display booked rooms
void BST::showBookedRooms() {
	showBookedRooms(root);
}

void BST::showBookedRooms(Node* root) {
	if (root == nullptr) {
		return;
	}
	showBookedRooms(root->left);
	if (root->data.isBooked) {
		cout << "This room is booked:" << root->data.roomNumber;
	}
	showBookedRooms(root->right);

}






	









































