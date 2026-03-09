#include<vector>
#include<algorithm>
#include<print>

int main(){
    std::vector<int> latency_ms{12, 45, 9, 105, 8, 300};
    int threshold=15;
    auto is_true = [&threshold](int n) -> bool {
        return n> threshold;
    };
    auto counts =std::ranges::count_if(latency_ms,is_true);
    std::println("total counts are: {}", counts);
    return 0;
}