#include"kmp.h"
#include <iostream>
#include<string>
int main()
{
    std::string s = "abacabac";
    std::string t = "abac";
    int next[100];
    get_next(t, next);

    for (int k = 0; k < t.size()+1; k++) {
        std::cout << next[k] << " ";
    }
    int pos = myIndex_KMP(s, t, next);
    std::cout << "\npos = " << pos << std::endl;
    return 0;
}
