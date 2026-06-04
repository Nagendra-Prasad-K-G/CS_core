#include<print>
#include<vector>
#include<algorithm>

void quicksort(std::vector<int>& vec, int low, int high);
int doSort(std::vector<int>& vec, int low, int high);
void doSearch(std::vector<int>& vec, int low, int high,const int target);
int binarySearch(std::vector<int>& vec, int low, int high,const int target);

int main(){
    std::vector<int> vector = {0,9,12,8,3,25,4,6,1,17};
    quicksort(vector, 0, vector.size() -1);
    int target = 17;
    doSearch(vector, 0, vector.size()-1, target);
    return 0;
}

void quicksort(std::vector<int>& vec, int low, int high){
    if (low<high){
        int piv = doSort(vec, low, high);
        quicksort(vec, low, piv -1);
        quicksort(vec,piv + 1, high);
    }
}

int doSort(std::vector<int>& vec, int low, int high){
    int pivot = vec[high];
    int i = low -1;
    for(int j= low; j < high; ++j){
        if(vec[j]<=pivot){
            i++;
            std::swap(vec[i],vec[j]);
        }
    }
    std::swap(vec[i+1], vec[high]);
    return i+1;
}

void doSearch(std::vector<int>& vec, int low, int high,const int target){
    int result = binarySearch(vec,low,high,target);
    if(result == -1){
        std::println("error");
    }
    else {
        std::print("the target {} ", target);
        std::println(" found at index: {}", result);
    }
}

int binarySearch(std::vector<int>& vec, int low, int high,const int target){
    if(low>high){
        return -1;
    }
    int mid = low+(high - low)/2;
    if(target ==vec[mid]){
        return mid;
    }
    if(target<vec[mid]){
        return binarySearch(vec, low, mid -1, target);
    }
    return binarySearch(vec, mid+1, high, target);
   
}