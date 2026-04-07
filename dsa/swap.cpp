#include<print>
#include<iostream>
void swap_values(int *q, int *w);

int main(){
    int a = 10, b = 20;
    std::println("Before swapping: a = {}, b = {}", a, b);
    swap_values(&a,&b);
    int* dynamic = new int[5];
    dynamic[0] = 0;
    for (int i = 0; i<5 ; i++){
        dynamic[i] = i+2;
    }
    for(int i =0; i<5; i++){
        std::println("values in dynamic array/heap : {}", dynamic[i]);
    }
    delete [] dynamic;
    dynamic = nullptr;
    return 0;

}
void swap_values(int *q, int *w){
    int temp = *q;
    *q = *w;
    *w = temp;
    std::cout<<"after swapping: a = "<<*q<<" b ="<<*w<<std::endl;
}