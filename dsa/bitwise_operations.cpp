#include<print>

bool isPow2(const int& n);
int count1(int o);

int main(){
    unsigned int n = 16;
    unsigned int o = 19;
    bool result = isPow2(n);
    int result0 = count1(o);
    std::println("given num is pow of 2? : {}", result);
    std::println(" count of 1 in num is : {}", result0);
    return 0;
}

bool isPow2(const int& n){
    std::println("pow num for input is : {}", n);
    if(n==0){
        std::println("error, input num is 0");
        return false;
    }
    else{
        return (n & (n-1)) ==0;

    }
}

int count1(int o){
    std::println("count num for input is : {}", o);
    int count = 0;
    while (o!=0){
        o = o&(o-1);
        count++;
    }
    return count;
}
