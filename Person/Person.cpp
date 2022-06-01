#include "Person.h"

void Person::BookRoom() {
    //TODO: Add the room an owner
}

void Person::ReleaseRoom() {
    // TODO: Release the room's owner.
}

void Person::setFullName(string name) {
    _fullname = move(name);
}

string Person::getFullName() {
    return _fullname;
}

void Person::setRoomName(string name) {
    _roomName = move(name);
}

string Person::getRoomName() {
    return _roomName;
}

Person::Person(string name, string room) {
    _fullname = name;
    _roomName = room;
}

Person::Person() {

}
