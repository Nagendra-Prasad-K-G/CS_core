#include<print>
struct DroneCoordinate {
    int drone_id;
    double x,y,z;
};

void update_position(DroneCoordinate& drone_pos, double dx, double dy, double dz);
void print_position(const DroneCoordinate& droneP );

int main(){
    DroneCoordinate drone{1,0.0,0.0,0.0};
    print_position(drone);
    update_position(drone, 15.5, -5.2, 100.0);
    print_position(drone);
    return 0;
}
void update_position(DroneCoordinate& drone_pos, double dx, double dy, double dz){
    drone_pos.x += dx;
    drone_pos.y += dy;
    drone_pos.z += dz;
}
void print_position(const DroneCoordinate& droneP ){
    std::println("Drone ID - {}, Position: [{}, {}, {}]",droneP.drone_id, droneP.x, droneP.y, droneP.z);

}