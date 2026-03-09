#include<print>
int velocity(int dis, int time);
int main(){
    std::println("Fault test");
    int value=velocity(58,0);
    std::println("Velocity:{}", value);
    return 0;
}
int velocity(int dis, int time){
    return dis/time;
}