#pragma once
#include<string>
using namespace std;
class Room {
public:
	int roomNumber;
	string roomType;
	double price;
	bool isBooked;
	string customerName;
	string checkInDate;
	string checkOutDate;

	Room() {
		roomNumber = 0;
		roomType = "";
		price = 0.0;
		isBooked = false;
		customerName = "";
		checkInDate = "";
		checkOutDate = "";
	}

	Room(int roomNumber, string roomType, double price, bool isBooked, string customerName, string checkInDate, string checkOutDate) {
		this->roomNumber = roomNumber;
		this->roomType = roomType;
		this->price = price;
		this->isBooked = isBooked;
		this->customerName = customerName;
		this->checkInDate = checkInDate;
		this->checkOutDate = checkOutDate;
	}

};
