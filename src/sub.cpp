//
// Created by sun on 23-4-9.
//sun
//
#include <stdio.h>
#include <unistd.h>
#include <string>
#include <zcm/zcm-cpp.hpp>
#include "demo_t.hpp"
using std::string;

class Handler
{
    public:
        ~Handler() {}

        void handleMessage(const zcm::ReceiveBuffer* rbuf,
                           const string& chan,
                           const demo_t *msg)
        {
            printf("Received message on channel \"%s\":\n", chan.c_str());
            printf("  timestamp   = %lld\n", (long long)msg->timestamp);
        
            printf("\n");
            printf("  name        = '%s'\n", msg->name.c_str());
    
        }
};

int main(int argc, char *argv[])
{
    zcm::ZCM zcm {""};
    if (!zcm.good())
        return 1;

    Handler handlerObject;
    zcm.subscribe("EXAMPLE", &Handler::handleMessage, &handlerObject);
    zcm.subscribe("FOOBAR", &Handler::handleMessage, &handlerObject);
    zcm.run();

    return 0;
}
