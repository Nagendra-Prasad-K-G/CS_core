#include<print>
#include<string>
struct gate_subject{
    std::string subject_name;
    gate_subject* next;
};
int main(){
    gate_subject* subject1 = new gate_subject;
    subject1-> subject_name = "OS";
    gate_subject* subject2 = new gate_subject;
    subject2-> subject_name ="CS";
    gate_subject* subject3 = new gate_subject;
    subject3-> subject_name = "DSA";
    subject1-> next = subject2;
    subject2-> next = subject3;
    subject3-> next = nullptr;
    {
        gate_subject* current = subject1;
        while(current !=nullptr){
            std::println("subjects are: {}", current->subject_name);
            current = current->next;
        }
    }
    delete subject1;
    delete subject2;
    delete subject3;
    subject1 = nullptr;
    subject2 = nullptr;
    subject3 = nullptr;
    return 0;
}