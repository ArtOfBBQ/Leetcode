#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << std::string("hello, world!") << std::endl;
    
    std::vector<int> vec = {10, 2, 9, 3, 8, 4, 7, 5, 6};

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        // std::cout << (*it) << std::endl;

        std::cout << vec.at(it) << std::endl;
    }
}

