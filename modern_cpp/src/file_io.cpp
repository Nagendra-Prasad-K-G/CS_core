#include<print>
#include<fstream>
#include<string>

int main(){
    {
        std:: ofstream write("config.dat");
        if(!write.is_open()){
            std::println("error, not safe");
            return 1;
        }
        write<<" NETWORK_MODE = UDP ";
    }
    {
    
        std::ifstream read("config.dat");
        if(!read.is_open()){
            std::println("error, not safe");
            return 1;
        }
        std::string ln;
        while(std::getline(read, ln)){
            std::println("Loaded config : {}", ln);
        }
    }

    return 0;
}