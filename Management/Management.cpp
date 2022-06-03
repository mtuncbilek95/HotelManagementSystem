#include "Management.h"


#pragma region "System Actions"

void Management::ManageRooms() {
    counter+=1;

    switch (counter) {
        case 1:
            system("cls");
            Sleep(100);
            cout << "Unfortunately, our hotel does not have that budget to edit a room." << endl;
            Sleep(3000);
            system("cls");
            Sleep(100);
            break;
        case 2:
            system("cls");
            Sleep(100);
            cout << "As I mentioned before, we don't have the money." << endl;
            Sleep(3000);
            system("cls");
            Sleep(100);
            break;
        case 3:
            system("cls");
            Sleep(100);
            cout << "Dude! ! ! Stop......" << endl;
            Sleep(3000);
            system("cls");
            Sleep(100);
            break;
        case 4:
            system("cls");
            Sleep(100);
            cout << "ENGLISH MOTHERF****R DO YOU SPEAK IT????" << endl;
            Sleep(3000);
            system("cls");
            Sleep(100);
            break;
        case 5:
            system("cls");
            Sleep(100);
            cout << "I DARE, I DOUBLE DARE YOU MOTHERF****R!!!" << endl;
            Sleep(3000);
            system("cls");
            Sleep(100);
            break;
        case 6:
            system("cls");
            Sleep(100);
            cout << "FUCK..." << endl;
            Sleep(1500);
            system("cls");
            cout << "YOU..." << endl;
            Sleep(1500);
            system("cls");
            Sleep(100);
            exit(0);
    }
    MainMenu();
}

void Management::CheckRooms() {
    string enter;
    cout << left;
    cout << setw(20) << "Room Name" << setw(20) << "Room Type" << setw(20) << "Room Status" << endl;
    for (int i{}; i < Rooms.size(); i++) {
        cout << setw(20) << Rooms[i].getRoomName() << setw(20) << Rooms[i].getRoomType() << setw(20)
             << Rooms[i].getRoomStatus() << endl;
    }
    cout << "\nPlease click any key and enter to go to the menu." << endl;
    cin >> enter;
    system("cls");
    MainMenu();
}

void Management::CheckCustomers() {
    string enter;
    cout << left;
    cout << setw(20) << "Customer Full Name" << setw(20) << "Room Name" << endl;
    for (int i{}; i < Customers.size(); i++) {
        cout << setw(20) << Customers[i].getFullName() << setw(20) << Customers[i].getRoomName() << endl;
    }
    cout << "\nPlease click any key and enter to go to the menu." << endl;
    cin >> enter;
    system("cls");
    MainMenu();
}

void Management::SignCustomer() {

    system("cls");

    cout << left;
    cout << setw(20) << "Please choose your option below." << endl;
    cout << setw(20) << "1-) Add Customer" << endl;
    cout << setw(20) << "2-) Remove Customer" << endl;
    cout << setw(20) << "3-) Exit\n" << endl;
    CustomerChoose();
}

#pragma endregion

#pragma region "Getter/Setter"

std::string Management::getName() {
    return _hotelName;
}

void Management::setName(string HotelName) {
    _hotelName = move(HotelName);
}

#pragma endregion

#pragma region "System Options"

void Management::MainMenuChoose() {
    int option;
    cout << "Option:";
    cin >> option;
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
            CheckCustomers();
            break;
        case 4:
            system("cls");
            Sleep(100);
            SignCustomer();
            break;
        case 5:
            system("cls");
            Sleep(100);
            Exit();
            break;
        default:
            std::cout << "Please put valid input!" << std::endl;
            Sleep(1000);
            MainMenuChoose();
            break;
    }

}

void Management::CustomerChoose() {
    int option;
    cout << "Option:";
    cin >> option;
    system("cls");
    switch (option) {
        case 1:
            system("cls");
            Sleep(100);
            AddCustomer();
            SignCustomer();
            break;
        case 2:
            system("cls");
            Sleep(100);
            RemoveCustomer();
            SignCustomer();
            break;
        case 3:
            system("cls");
            Sleep(100);
            MainMenu();
            break;
        default:
            std::cout << "Please put valid input!" << std::endl;
            Sleep(1000);
            SignCustomer();
            break;
    }
}

void Management::MainMenu() {

    cout << left;
    cout << setw(20) << "Welcome to the Hotel " << getName() << "\n" << endl;
    cout << setw(20) << "Please choose your option below." << endl;
    cout << setw(20) << "1-) Manage Rooms" << endl;
    cout << setw(20) << "2-) Check Rooms" << endl;
    cout << setw(20) << "3-) Check Customers" << endl;
    cout << setw(20) << "4-) Sign Customer" << endl;
    cout << setw(20) << "5-) Exit\n" << endl;
    MainMenuChoose();
}

void Management::Exit() {
    system("cls");
    cout << "Goodbye!" << endl;
    Sleep(1000);
    exit(0);
}

#pragma endregion

#pragma region "Constructor"

Management::Management() {

    customerDataInput.open("../Data/Customers.csv");
    string fullname;
    string roomname;

    while (customerDataInput.peek() != EOF) {

        getline(customerDataInput, fullname, ',');
        getline(customerDataInput, roomname, '\n');
        Person customer(fullname, roomname);
        Customers.push_back(customer);
    }


    roomDataInput.open("../Data/Rooms.csv");
    string type;
    string status;

    while (roomDataInput.peek() != EOF) {

        getline(roomDataInput, roomname, ',');
        getline(roomDataInput, type, ',');
        getline(roomDataInput, status, '\n');
        Room roombase(roomname, status, type);
        Rooms.push_back(roombase);
    }
}

#pragma endregion

void Management::AddCustomer() {

    string fullname;
    string roomname;

    cout << "Full Name:";
    getline(cin >> ws, fullname);
    cout << "Room Name:(Room X)";
    getline(cin >> ws, roomname);

    Person customer(fullname, roomname);
    Customers.push_back(customer);

    customerDataOutput.open("../Data/Customers.csv", fstream::trunc);

    for (int i{}; i < Customers.size(); i++) {
        customerDataOutput << Customers[i].getFullName() << "," << Customers[i].getRoomName() << "\n";
    }

    customerDataOutput.close();

    roomDataOutput.open("../Data/Rooms.csv", fstream::trunc);

    for (int i{}; i < Rooms.size(); i++) {
        if (Rooms[i].getRoomName() == roomname) {
            Rooms[i].setRoomStatus("Booked");
        }
        roomDataOutput << Rooms[i].getRoomName() << "," << Rooms[i].getRoomType() << "," << Rooms[i].getRoomStatus()
                       << "\n";
    }

    roomDataOutput.close();

}

void Management::RemoveCustomer() {
    string fullname;
    cout << "Full Name:";
    getline(cin >> ws, fullname);

    for (int i{}; i < Customers.size(); i++) {
        for (int j{}; j < Rooms.size(); j++) {
            if (Customers[i].getFullName() == fullname && Customers[i].getRoomName() == Rooms[j].getRoomName()) {
                Customers.erase(Customers.begin() + i);
                Rooms[j].setRoomStatus("Empty");
            }
        }
    }

    customerDataOutput.open("../Data/Customers.csv", fstream::trunc);

    for (int i{}; i < Customers.size(); i++) {
        customerDataOutput << Customers[i].getFullName() << "," << Customers[i].getRoomName() << "\n";
    }

    customerDataOutput.close();
    roomDataOutput.open("../Data/Rooms.csv", fstream::trunc);

    for (int i{}; i < Rooms.size(); i++) {
        roomDataOutput << Rooms[i].getRoomName() << "," << Rooms[i].getRoomType() << "," << Rooms[i].getRoomStatus()
                       << "\n";
    }

    roomDataOutput.close();
}
