#include <vector>
#include <string>
#include <iostream>

using namespace std;

std::vector<std::string> fizzBuzz(int n) {
    // Your code here.


}

int main() {
    std::vector<std::string> output = fizzBuzz(15);
    for (const auto &str : output) {
        std::cout << str << std::endl;
    }
    return 0;
}