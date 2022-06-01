#ifndef HOMEWORK_PERSON_H
#define HOMEWORK_PERSON_H

#include "../libholder.h"

class Person {

private:
    string _fullname;
    string _roomName;

public:
    void BookRoom();
    void ReleaseRoom();

public:
    void setFullName(string name);
    string getFullName();

    void setRoomName(string name);
    string getRoomName();

    Person();

    Person(std::string name, std::string room);
};


#endif //HOMEWORK_PERSON_H
