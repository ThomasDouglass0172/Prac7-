#include "RecursiveBinarySearch.h"
using namespace std; 


bool RecursiveBinarySearch::search(vector<int> list , int x){
int length = list.size(); 
int n=(size/2+1); 

return BinarySearch(vector<int> list,int  x, int n, int size);
}


bool BinarySearch(vector<int> list,int  x, int n, int size){  //splits the vector in 2 and figures out if it is left right or ontop of the correct value

 if (x==list[(size-n)]){
     return true; 
 }
 if (x>list[(size-n)]){
    n=n+(size/4); 
    size=(size/2);
    return BinarySearch(vector<int> list,int  x, int n, int size); 
     }
if (x<list[(size-n)]){
    n=n-(size/4); 
    size=(size/2);
    return BinarySearch(vector<int> list,int  x, int n, int size); 
}
 }