#pragma once
#include "pch.h"
#include <set>
#include "Connection.h"

namespace yawn
{

    class ConnectionManager
    {
    public:
        /// Construct a connection manager.
        ConnectionManager();

        /// Add the specified connection to the manager and start it.
        void start(ConnectionPtr c);

        /// Stop the specified connection.
        void stop(ConnectionPtr  c);

        /// Stop all connections.
        void stop_all();

    private:
        /// The managed connections.
        std::set<ConnectionPtr> connections_;
    };

}

