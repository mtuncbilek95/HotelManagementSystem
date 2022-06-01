#ifndef HOMEWORK_MANAGEMENT_H
#define HOMEWORK_MANAGEMENT_H


#include "../libholder.h"
#include "../Room/Room.h"
#include "../Person/Person.h"

class Management {

private:
    string _hotelName;
    ifstream customerData;
    ifstream roomData;
    vector<Person> Customers;
    vector<Room> Rooms;
public:

#pragma region "Getter/Setter"
    void setName(string HotelName);
    string getName();
#pragma endregion

#pragma region "Room Functions"
    void ManageRooms();
    void CheckRooms();
    void SignCustomer();
    void CheckCustomers();
#pragma endregion

#pragma region "Customer Functions"
    void AddCustomer();
    void RemoveCustomer();
#pragma endregion

#pragma region "Menu"
    void MainMenu();
    void CustomerChoose();
    void MainMenuChoose();
    void Exit();
#pragma endregion

#pragma region "Constructor"
    Management();
#pragma endregion


};

#endif //HOMEWORK_MANAGEMENT_H
