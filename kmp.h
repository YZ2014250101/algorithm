#pragma once
#include <string>
void get_next(const std::string& T, int next[])
{
    int i = 0, j = -1;
    next[0] = -1;
    int len = (int)T.size();
    while (i < len ) {
        if (j == -1 || T[i] == T[j]) {
            i++;
            j++;
            next[i] = j;
        } else
            j = next[j];
    }
}

int myIndex_KMP(const std::string& S, const std::string& T, int next[])
{
    int i = -1, j = -1;
    int n = (int)S.size(), m = (int)T.size();
    while (i < n && j < m) {
        if (j == -1 || S[i] == T[j]) {
            i++;
            j++;
        } else {
            j = next[j];
        }
    }
    if (j >= m)
        return i - m;
    else
        return -1;
}