#include "System.h"

void System::Start() {

    if(HotelManagement == nullptr){
        HotelManagement = new Management();
        HotelManagement->setName("Luna");
    }

    cout << left;
    cout << setw(10) << "Welcome to the Main System\n" << endl;
    cout << setw(10) << "Please select an operating method." << endl;
    cout << setw(10) << "1-) Open Hotel" << endl;
    cout << setw(10) << "2-) Create Hotel" << endl;
    cout << setw(10) << "3-) Exit" << endl;
    Choose();
}

void System::Exit() {
    cout << "\nGoodbye!" << endl;
}

void System::OpenHotel(Management *management) {
    system("cls");
    Sleep(1000);
    management->MainMenu();
}

void System::Choose() {
    int option;
    cout << "Option:";
    cin >> option;

    switch(option){
        case 1:
            OpenHotel(HotelManagement);
            Sleep(1000);
            Start();
            break;
        case 2:
            cout << "This process is under construction. I'm directing you to Hotel Luna.\n" << endl;
            OpenHotel(HotelManagement);
            Start();
            break;
        case 3:
            Exit();
            break;
        default:
            cout << "Please put valid input!" << endl;
            Choose();
            break;
    }

}


