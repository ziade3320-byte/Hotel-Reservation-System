#include "BST.h"
#include <iostream>

using namespace std;

int main()
{
    BST hotel;

    // Add rooms to the hotel
    Room r1(101, "Single", 100.0, false, "", "", "");
    Room r2(102, "Double", 150.0, false, "", "", "");
    Room r3(103, "Suite", 250.0, false, "", "", "");
    Room r4(104, "Single", 100.0, false, "", "", "");
    Room r5(105, "Double", 150.0, false, "", "", "");

    hotel.insert(r1);
    hotel.insert(r2);
    hotel.insert(r3);
    hotel.insert(r4);
    hotel.insert(r5);

    int choice;
    int roomNumber;

    do
    {
        cout << "\n===== Hotel Reservation System =====\n";
        cout << "1. Book Room\n";
        cout << "2. Cancel Booking\n";
        cout << "3. Show Available Rooms\n";
        cout << "4. Show Booked Rooms\n";
        cout << "5. Display All Rooms\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter room number: ";
            cin >> roomNumber;
            hotel.bookRoom(roomNumber);
            break;

        case 2:
            cout << "Enter room number: ";
            cin >> roomNumber;
            hotel.cancelBooking(roomNumber);
            break;

        case 3:
            cout << "\nAvailable Rooms:\n";
            hotel.showAvailableRooms();
            break;

        case 4:
            cout << "\nBooked Rooms:\n";
            hotel.showBookedRooms();
            break;

        case 5:
            cout << "\nAll Rooms:\n";
            hotel.inorder();
            break;

        case 6:
            cout << "Thank you for using the Hotel Reservation System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}