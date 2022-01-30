#include <iostream>
#include <string> 
//#include <sstream>
#include <limits>

using std::cout, std::cin, std::string, std::endl;

double mult_arrays(const double v[], unsigned int v_size, const double w[], unsigned int w_size) {
    if (v_size != w_size) {
        throw std::invalid_argument("Array sizes are unequal");
    }
    double product = 0.0;

    for (int i = 0; i < (int)v_size; ++i) {
        product += (v[i]*w[i]);
    }
    return product;
}


int main() {
    const double v[] = {0,0,6,6,4};
    const double w[] = {9,10,11,12};
    cout << mult_arrays(v, 5, w, 5);
    return 0;
}