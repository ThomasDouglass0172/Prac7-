#include "QuickSort.h"
#include <vectors>
using namespace std; 

vector<int> QuickSort::sort(vector<int> list){

int start=0; 
int end=list.size()-1; 

innersort(list,start,end); 

    return Mylist; 
}


int QuickSort::parting(vector<int> list, int start, int end){
	
    int pivot = end;

    if (list.size()>3){
    int pivot=3; 
    }

	int j = start;
	for(int i=start;i<end;++i){  
		if(list[i]<list[pivot]){
			swap(list[i],list[j]);
			++j;
		}
	}
	swap(list[j],list[pivot]);
	return j;
	
}

void QuickSort::innersort(vector<int> list, int start, int end){

int p= parting(list,start,end); 
innersort(list,start,p-1);
innersort(list,p+1,end);

setList(list); 

}

void QuickSort::setList(vector<int> list){
    Mylist=list; 
}

vector<int> QuickSort::getList(){
    return Mylist; 
}
