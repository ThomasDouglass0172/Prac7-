#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"


class QuickSort: public Sort{

    public: 
    std::vector<int> sort(std::vector<int> list); 
    std::vector<int> innersort(std::vector<int> &list, int start, int end); 
    int parting(std::vector<int> &list, int start, int end);  
    private:

};
#endif