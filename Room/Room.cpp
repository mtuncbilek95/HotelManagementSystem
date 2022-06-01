#include "Room.h"

Room::Room(string roomname, string status, string type) {
    _roomName = roomname;
    _roomStatus = status;
    _roomType = type;
}

string Room::getRoomName() {
    return _roomName;
}

string Room::getRoomStatus() {
    return _roomStatus;
}

string Room::getRoomType() {
    return _roomType;
}

void Room::setRoomStatus(string status) {
    _roomStatus = status;
}
