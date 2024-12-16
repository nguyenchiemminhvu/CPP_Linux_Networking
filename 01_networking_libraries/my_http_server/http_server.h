#ifndef HTTP_SERVER_H
#define HTTP_SERVER_H

#include "http_connection_handler.h"

class HTTPServer
{
public:
    HTTPServer(int port);
    void start();

private:
    bool setup_socket();
};

#endif // HTTP_SERVER_H