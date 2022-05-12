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
string str; 
int i=0;

cin>>str; 


replace( str.begin(), str.end(), ',', ' ');


string::size_type sz;

  while (!str.empty()) {
    int conversionInt = stoi (str,&sz,0);
    sequence.push_back(conversionInt); 
    str = str.substr(sz);
  }
   vector<int> sequence2=sequence; 
  int length = sequence.size(); 

      for (int i; i<length; i++){
        cout<<sequence[i]; 

    }  
cout<<endl;

BubbleSort Bubbles; 
RecursiveBinarySearch RBS; 
QuickSort Quicky; 

 vector<int> Bsequence=Bubbles.sort(sequence); 

int lengthB= Bsequence.size(); 
   cout<<"Bsequence has a size of "<<lengthB<<endl;
    cout<<"Should be sorted "<<endl;
    for (int i; i<lengthB; i++){
    
        cout<<Bsequence[i]; 
    }
bool answer=RBS.search(sequence, 3); 
cout<<endl;
cout<<"your answer is"<<endl;
cout<<answer<<endl; 


vector<int> Qsequence=Quicky.sort(sequence2); 
int lengthQ= Qsequence.size(); 
   cout<<"Qsequence has a size of "<<lengthQ<<endl;
    cout<<"Should be sorted "<<endl;
    for (int i; i<lengthQ; i++){
    
        cout<<Qsequence[i]; 
    }




    return 0; 
}