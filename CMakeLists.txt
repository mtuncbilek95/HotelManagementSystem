cmake_minimum_required(VERSION 3.21)
project(Homework)

set(CMAKE_CXX_STANDARD 14)

add_executable(Homework
        main.cpp
        Management/Management.cpp Management/Management.h
        System/System.cpp System/System.h
        Person/Person.cpp Person/Person.h
        Enums/RoomStatus.h Enums/RoomTypes.h
        Room/Room.cpp Room/Room.h libholder.h)
