#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>


class QuickSort: public Sort{

    public: 
    std::vector<int> sort(std::vector<int> list); 
    void setList(vector<int> list); 
    vector<int> getList(); 
    void innersort(vector<int> list, int start, int end); 
    int parting(vector<int> list, int start, int end); 

    private: 
    vector<int> Mylist; 

};
#endif