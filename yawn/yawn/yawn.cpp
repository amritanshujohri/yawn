// yawn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include "SocketServer.h"

int main()
{
    yawn::SocketServer s("127.0.0.1", "999", "C:\\work\\bill\\");
    s.run();
}
