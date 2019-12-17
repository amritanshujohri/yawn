#include "pch.h"
#include "ConnectionManager.h"
#include "Connection.h"

namespace yawn
{
    ConnectionManager::ConnectionManager()
    {
    }

    void ConnectionManager::start(ConnectionPtr c)
    {
        connections_.insert(c);
        c->start();
    }

    void ConnectionManager::stop(ConnectionPtr c)
    {
        connections_.erase(c);
        c->stop();
    }

    void ConnectionManager::stop_all()
    {
        for (auto c : connections_)
            c->stop();
        connections_.clear();
    }
}
