#include<vector>
#include<print>
#include<string>

void update_roster(std::vector<std::string>& root, std::string& tar);

int main(){
    std::vector<std::string> roster = {"king", "clash", "trem"};
    std::string target = "trem";
    std::string target1 = "two";
    update_roster(roster, target);
        for(std::vector<std::string>::iterator i=roster.begin(); i!= roster.end(); ++i){
            std::println("{}", *i);
        }
    std::println("");
    update_roster(roster, target1);
    for(std::vector<std::string>::iterator i=roster.begin(); i!= roster.end(); ++i){
            std::println("{}", *i);
        }

    return 0;
}

void update_roster(std::vector<std::string>& root, std::string& tar){
    bool f = false;
    for(std::vector<std::string>::iterator i=root.begin(); i!= root.end(); ++i){
        if(*i == tar){
            *i = "TERMINATED";
            f = true;
        }
    }
    if(!f){
        root.push_back(tar);
    }

}