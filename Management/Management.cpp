#include "Management.h"

#pragma region "System Actions"

void Management::ManageRooms() {
    system("cls");
    Sleep(100);
    cout << "Unfortunately, our hotel is not have that space to build a room." << endl;
    Sleep(2000);
    system("cls");
    Sleep(100);
    MainMenu();
}

void Management::CheckRooms() {
    //TODO: show the rooms and their status(booked or empty).
}

void Management::SignCustomer() {
    //TODO: Add the customer to the room or remove.
}

#pragma endregion

#pragma region "Getter/Setter"

std::string Management::getName() {
    return _hotelName;
}

void Management::setName(std::string HotelName) {
    _hotelName = move(HotelName);
}

#pragma endregion

#pragma region "System Options"

void Management::Choose() {
    int option;
    std::cout << "Option:";
    std::cin >> option;
    system("cls");
    switch (option) {
        case 1:
            system("cls");
            Sleep(100);
            ManageRooms();
            break;
        case 2:
            system("cls");
            Sleep(100);
            CheckRooms();
            break;
        case 3:
            system("cls");
            Sleep(100);
            SignCustomer();
            break;
        case 4:
            system("cls");
            Sleep(100);
            Exit();
            break;
        default:
            std::cout << "Please put valid input!" << std::endl;
            Sleep(1000);
            MainMenu();
            break;
    }

}

void Management::MainMenu() {

    std::cout << std::left;
    std::cout << std::setw(20) << "Welcome to the Hotel " << getName() << "\n" << std::endl;
    std::cout << std::setw(20) << "Please choose your option below." << std::endl;
    std::cout << std::setw(20) << "1-) Manage Rooms" << std::endl;
    std::cout << std::setw(20) << "2-) Check Rooms" << std::endl;
    std::cout << std::setw(20) << "3-) Sign The Customer" << std::endl;
    std::cout << std::setw(20) << "4-) Exit\n" << std::endl;
    Choose();
}

void Management::Exit() {
    std::cout << "Going back to the system..." << std::endl;
    Sleep(1000);
    system("cls");
}

Management::Management() {

    customerData.open("../Data/Customers.csv");
    string fullname;
    string roomname;

    while (customerData.peek()!=EOF){

        getline(customerData,fullname,',');
        getline(customerData,roomname,'\n');
        Person customer(fullname,roomname);
        Customers.push_back(customer);
    }
}

#pragma endregion



