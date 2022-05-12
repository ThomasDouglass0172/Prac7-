#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>
using namespace std; 


bool RecursiveBinarySearch::search(vector<int> list , int x){
int right=list.size()-1; 
int left=0; 
return BinarySearch(list, left, right,x);
cout<<endl;
}


bool RecursiveBinarySearch::BinarySearch(vector<int> list,int  left, int right, int x){  //splits the vector in 2 and figures out if it is left right or ontop of the correct value


    int mid=(left + right)/2;

    if(left<=right)
    {
        if (list[mid] == x)
        {
        return true;
        }
        else if  (list[mid] >x){
            return BinarySearch(list,left,mid -1, x);
        }
        else{
            return BinarySearch(list,mid+1,right, x);
        }
    }
    return false;
}

 