# include <print>
# include <memory>
#include<utility>

struct sensor_data{
    int id;
    double temperature;
};
std::unique_ptr<sensor_data> create_sensor_data();
void analyze_data(const std::unique_ptr<sensor_data>& d);
void archive_data(std::unique_ptr<sensor_data> s);

int main(){
    std::unique_ptr<sensor_data> d = create_sensor_data();
    analyze_data(d);
    archive_data(std::move(d));
    return 0;
}

std::unique_ptr<sensor_data> create_sensor_data(){
    auto data = std::make_unique<sensor_data>();
    data -> id = 1;
    data -> temperature=25.5;
    return data;
}
void analyze_data(const std::unique_ptr<sensor_data>& d){
    std::print("Sensor ID: {}, Temperature: {}\n", d->id, d->temperature);
}
void archive_data(std::unique_ptr<sensor_data> s){
    std::print("Data archived and destroyed: Sensor ID: {}", s->id);
}