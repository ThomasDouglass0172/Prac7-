#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector> 
#include <iostream> 
#include <string> 
#include <algorithm>
using namespace std; 

int main(){
vector<int> sequence; 
int i=0;


int num=0; 

while(cin>>num){
    sequence.emplace_back(num); 
}

BubbleSort Bubbles; 
RecursiveBinarySearch RBS; 
QuickSort Quicky; 

 vector<int> Bsequence=Bubbles.sort(sequence); 

int lengthB= Bsequence.size(); 
    for (int i; i<lengthB; i++){
    
        //cout<<Bsequence[i]; 
    }



vector<int> Qsequence=Quicky.sort(sequence); 
int lengthQ= Qsequence.size(); 

bool answer=RBS.search(Qsequence, 1); 
cout<<answer; 



    for (int i; i<lengthQ; i++){
    
        cout<<" "<<Qsequence[i]; 
    }





    return 0; 
}