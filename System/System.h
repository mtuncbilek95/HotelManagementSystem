#ifndef HOMEWORK_SYSTEM_H
#define HOMEWORK_SYSTEM_H

#include "../libholder.h"
#include "../Management/Management.h"

class System {

private:
    Management* HotelManagement;
public:
    void Start();
    void Exit();
    void OpenHotel(Management* management);
    void Choose();
};


#endif //HOMEWORK_SYSTEM_H
