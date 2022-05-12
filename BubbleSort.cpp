#include "BubbleSort.h" 

using namespace std; 

vector<int> BubbleSort::sort(vector<int> list){
//Find the set of the size of list 
//set the values of I and J 
//create a switch command 
//call switch whenever two values are the wrong way. 
    int length=list.size
    int i,j; 

    for (i=0; i<length-1; i++){
        swapped=false; 
        for(j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=true; 
            }
        }
        if (swapped==false){
            break; 
        }
    }
    return list; 
}


