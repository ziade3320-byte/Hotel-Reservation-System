#pragma once
#include"Room.h"

class Node {
public:
	Room data;
	Node* left;
	Node* right;
	Node(Room data) {
		this->data = data;
		left = nullptr;
		right = nullptr;
	}
};