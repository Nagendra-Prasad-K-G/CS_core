#include"telemetry.hpp"
#include<print>



int main(){
    std::println("Bootstrapping Subsystem...");
    broadcast_status();
    return 0;
}