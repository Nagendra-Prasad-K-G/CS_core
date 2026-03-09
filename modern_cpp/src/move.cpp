#include<string>
#include<vector>
#include<utility>
#include<print>

int main(){
    std::string Sensor_Data = "[INFRARED_SWEEP_COMPLETE]";
    std::println("Sensor Data: {}", Sensor_Data);

    std::vector<std::string> data_pipeline;
    data_pipeline.push_back(std::move(Sensor_Data));
    std::println("Sensor Data: {}", Sensor_Data);

    std::println("Data Pipeline: {}", data_pipeline[0]);
    return 0;
}