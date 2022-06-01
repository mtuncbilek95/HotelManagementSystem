#ifndef HOMEWORK_ROOM_H
#define HOMEWORK_ROOM_H

#include "../libholder.h"


class Room {

private:
    string _roomName;
    string _roomStatus;
    string _roomType;

public:
    string getRoomName();
    string getRoomStatus();
    string getRoomType();

    void setRoomStatus(string status);

    Room(string roomname, string status, string type);
};


#endif //HOMEWORK_ROOM_H
