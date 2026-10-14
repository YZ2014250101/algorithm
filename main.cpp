#include<iostream>
#include"m_Sort.h"
using namespace std;

int main() { 
    int a1[] = { 0,2,14,3,3,5,7,1,6,6,6 };
    int n1 = sizeof(a1) / sizeof(a1[0]);
    printf("普通随机数据:\n排序前: ");
    printArray(a1, n1);
    m_quick_sort(a1, 0, n1-1);
    printf("排序后: ");
    printArray(a1, n1);
    printf("\n");


    return 0;
}