#include<print>
#include<vector>
#include<algorithm>
#include<string>

struct process{
    std::string name;
    int priority;
};

int main(){
    std::vector<process> schedular{{"Telemetry", 2},{"Physics_Engine",9},{"Audio", 5},{"Garbage_collector", 1}};
    auto d_order = [](const process& a, const process&b) {
        return a.priority > b.priority;
    };
    std::ranges::sort(schedular, d_order);

    for(const auto& s:schedular){
        std::println("string name:{}, priority: {}", s.name, s.priority);
        
    }


}
