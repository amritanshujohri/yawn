#include "pch.h"
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include "..\yawn\SocketServer.h"


TEST(TestCaseName, TestName) {
    yawn::SocketServer s("127.0.0.1", "999", "C:\\work\\bill\\");
    s.run();
}