#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "PA10.h"

void printVec(std::vector<std::string> vec) {
    for (std::string s : vec) {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

void fizzTest(std::vector<std::string> expected, std::vector<std::string> results) {
    std::cout << "expected: " << std::endl;
    printVec(expected);
    std::cout << "vs actual: " << std::endl;
    printVec(results);
    std::cout << std::endl;
    bool match = true;
    for (int i = 0; i < results.size(); i++) {
        if (expected[i].compare(results[i]) != 0) match = false;
    }
    for (int i = 0; i < expected.size(); i++) {
        if (expected[i].compare(results[i]) != 0) match = false;
    }
    CHECK(match);
}


TEST_CASE( "FizzBuzz are computed", "[fizzBuzz]" ) {
    std::vector<std::string> expected = {"1", "2", "Fizz"};
    std::vector<std::string> results = fizzBuzz( 3);
    fizzTest(expected, results);

    expected = {"1", "2", "Fizz", "4", "Buzz"};
    results = fizzBuzz( 5);
    fizzTest(expected, results);

    expected = {"1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz", "11", "Fizz", "13", "14", "FizzBuzz"};
    results = fizzBuzz(15);
    fizzTest(expected, results);
}
