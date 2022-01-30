//Important stuff to remember for test
#include <iostream>
#include <string> 
#include <sstream> //string stream, prob not used
#include <limits>

using std::cout, std::cin, std::string, std::endl;


int main() {
    int n = 6;
    int k = 2;
    int l = 3;
    int current = 1;
    int count = 0;
    while (count < n) {
        if ((current % k == 0) || (current % l == 0)) {
            cout << current;
            count += 1;
        }
        current += 1;
    }
    return 0;
}