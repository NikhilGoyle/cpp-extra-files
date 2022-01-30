#include <iostream>
#include <string> 
//#include <sstream>
#include <limits>

using std::cout, std::cin, std::string, std::endl;



bool isVowel(char c) {
    return ((((c == 97) || (c == 101)) || ((c == 105) || (c == 111))) || ((c == 117) || (c == 121)));
}
int main() {
    int score = 0;
    string word1 = "eel";
    string word2 = "the";
    int i = 0;
    bool cont = true;
    while (true) {
        cont = true;
    if ((word2[i] == '\0') && (word1[i] == '\0')) {
        break;
    }
    if (isVowel(word1[i]) && (word2[i]) == '\0') {
        score += 2;
        cont = false;
    }
    if (isVowel(word1[i]) && !isVowel(word2[i]) && cont) {
        score += 3;
    }//voewl and cons
    if (isVowel(word1[i]) && isVowel(word2[i])) {
        if ((word1[i]) > (word2[i])) {
            score += 1;
        } else {
            score -= 1;
        }
    }


    i += 1;
    }
    return 0;
}