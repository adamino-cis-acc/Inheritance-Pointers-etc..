#include <iostream>
using namespace std;

int main(){

    

    int first = 18;
    int second = 12;
    int* selected = &first;

    *selected = 20;
    selected = &second;
    *selected = 15;

    std::cout << first << " " << second << '\n';
    std::cout << std::boolalpha << (selected == &second) << '\n';
    

    return 0;
}