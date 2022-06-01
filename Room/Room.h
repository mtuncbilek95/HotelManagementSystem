#ifndef HOMEWORK_ROOM_H
#define HOMEWORK_ROOM_H

#include "../libholder.h"
#include "../Enums/RoomStatus.h"

class Room {

private:
    string _roomName;
    RoomStatus status = Empty;
};


#endif //HOMEWORK_ROOM_H
