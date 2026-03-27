#include<print>
#include<vector>
struct DroneCoordinate {
    int drone_id;
    double x,y,z;
};

int main(){
    std::vector<DroneCoordinate> fleet;
    fleet.push_back(DroneCoordinate{1,0.0,0.0,0.0});
    fleet.push_back(DroneCoordinate{2,10.5,5.5,50.0});
    fleet.push_back(DroneCoordinate{3,-20.1,14.1,120.5});
    std::println("Fleet Size: {}", fleet.size());
    for(const DroneCoordinate& D: fleet){
    std::println("Drone ID - {}, Position: [{}, {}, {}]",D.drone_id, D.x, D.y, D.z);
    }

    return 0;
}
