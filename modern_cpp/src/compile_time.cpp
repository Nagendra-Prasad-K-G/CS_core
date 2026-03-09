#include<print>

consteval int calculation_bandwidth(int frequency, int channels){
    return frequency*channels;
}
int main(){
    constexpr int total_bandwidth = calculation_bandwidth(192000, 2);
    std::println("pre-computed bandwidth : {}", total_bandwidth);

    return 0;
}
