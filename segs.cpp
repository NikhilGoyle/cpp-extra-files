//Important stuff to remember for test
#include <iostream>
#include <string> 
#include <sstream> //string stream, prob not used
#include <limits>

using std::cout, std::cin, std::string, std::endl;


int main() {
    long num = 102354453201;
    int size = 0;
    long copy = num;
    while (copy > 0) {
        size += 1;
        copy /= 10;
    }//find size
    int array[size];
    for (int i = 0; i < size; ++i) {
        array[i] = num%10;
        cout << array[i] << " ";
        num/=10;
    }//build array
    for (int i = 0; i < size/2; ++i) {
        if (array[i] != array[size-i-1]) {
            cout << array[i] << " " << array[size-i-1] << " not palindromic" << endl;
        }
    }
    return 0;
}