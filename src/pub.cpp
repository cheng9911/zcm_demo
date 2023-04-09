#include <unistd.h>
#include <zcm/zcm-cpp.hpp>
#include "demo_t.hpp"

int main(int argc, char *argv[])
{
    // zcm::ZCM zcm {""};

    zcm::ZCM zcm{"ipc"};
    if (!zcm.good())
        return 1;

    std::string channel = "EXAMPLE";
    if (argc > 1) channel = argv[1];

    demo_t my_data {};
    my_data.timestamp = 0;

    my_data.name="sun";

   
    //my_data.num_ranges = 100000;
    
   

  



    while (1) {
        zcm.publish(channel, &my_data);
        
        usleep(1000*1000);
    }

    return 0;
}
