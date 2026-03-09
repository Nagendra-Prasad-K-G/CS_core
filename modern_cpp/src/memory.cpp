#include <print>
#include <memory>

struct trade{
    int price, quantity;
};

void trade_execute(trade& t, int n_quantity);

int main(){
    trade stack_t{150, 1000};
    std::println("before trade price and quantity are : {} and {}", stack_t.price, stack_t.quantity);
    trade_execute(stack_t,stack_t.quantity);
    std::println("after trade quantity is  : {}",stack_t.quantity);


    std::unique_ptr<trade> heap_t = std::make_unique<trade>(trade{200,5000});
        std::println("before trade price and quantity are : {} and {}", heap_t->price, heap_t->quantity);
        trade_execute(*heap_t, heap_t->quantity);
        std::println("after trade quantity is  : {}",heap_t->quantity);

    return 0;
}

void trade_execute(trade& t, int n_quantity){
    t.quantity-=n_quantity;

}