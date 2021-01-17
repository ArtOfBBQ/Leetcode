#include <iostream>
#include <bitset>


void print_bits(int input) {
    char a = input;
    std::bitset<8> bits(a);
    std::cout
        << "integer: " << input
        << " as bits: " << bits << std::endl;
}

int main() {

    std::cout << "insert a number..." << std::endl;
    
    int num = 3;
     
    std::cin >> num;
    
    int num2 = ~num;
    
    print_bits(num);
    print_bits(num2);
    
    return 1;
}

