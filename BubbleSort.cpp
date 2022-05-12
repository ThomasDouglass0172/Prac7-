#include "BubbleSort.h" 

using namespace std; 

vector<int> BubbleSort::sort(vector<int> list){
//Find the set of the size of list 
//set the values of I and J 
//create a switch command 
//call switch whenever two values are the wrong way. 
    int length=list.size();
    int i,j; 

    for (i=0; i<length-1; i++){
        bool swapped=false; 
        for(j=0;j<length-i-1;j++){
            if (list[j]>list[j+1]){
                swap(list[j], list[j+1]);
                swapped=true; 
            }
        }
        if (swapped==false){
            break; 
        }
    }
    return list; 
}


