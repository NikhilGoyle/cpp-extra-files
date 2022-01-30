#include <iostream>
#include <string> 
//#include <sstream> //streams are unlikely
#include <limits>

using std::cout, std::cin, std::string, std::endl;


int main() {
    int num = 16;
    int store = 0;
   
    while (num != 1) {
    while (num > 0) {
        store += (num%10)*(num%10);
        num /= 10;
    }
    num = store;
    cout << store << endl;
    store = 0;
    if (num == 4) {
        cout << "FAILURE";
        break;
    }
    }
    return 0;
}