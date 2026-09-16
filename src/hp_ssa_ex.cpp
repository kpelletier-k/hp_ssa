#include <thread>

#include "../include/hp_ssa.h"
#include "../include/hp_ssa_broker.h"

int main(){

    HpSsaBroker broker;
    std::this_thread::sleep_for(std::chrono::seconds(1000));
    return 0;
}