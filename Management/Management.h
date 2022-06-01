#ifndef HOMEWORK_MANAGEMENT_H
#define HOMEWORK_MANAGEMENT_H


#include "../libholder.h"
#include "../Person/Person.h"

class Management {

private:
    std::string _hotelName;
    ifstream customerData;
    std::vector<Person> Customers;

public:

#pragma region "Getter/Setter"
    void setName(std::string HotelName);
    std::string getName();
#pragma endregion

#pragma region "Room Functions"
    void ManageRooms();
    void CheckRooms();
    void SignCustomer();
#pragma endregion

#pragma region "Customer Functions"
    //TODO: create customer functions,
#pragma endregion

#pragma region "Menu"
    void MainMenu();
    void Choose();
    void Exit();
#pragma endregion

#pragma region "Constructor"
    Management();
#pragma endregion

};


#endif //HOMEWORK_MANAGEMENT_H
