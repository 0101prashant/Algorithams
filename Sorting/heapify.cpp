#include <iostream>
#include <algorithm>

using namespace std;


void heapify(int A[], int index, int size){
    int left = 2*index+1;
    //int right = 2*index+2;
    //or
    int right = left+1;

    int max = index;

    if( left <= size && A[left] > A[max] ){
        max = left;
    }
    
    if( right <= size && A[right] > A[max]){
        max = right;
    }

    if(max != index){
        swap(A[max],A[index]);
        heapify(A, max, size);
    }


}


void buildHeap(int A[] ,int size){

    for(int i = size/2; i >= 0; i--){
        heapify(A,i,size);
    }

}





int main(){

    int n;
    cout << "enter size : ";
    cin >> n;

    int A[n]; 

    for(int i =0; i < n; i++){
        cout << "index "<< i << " : "; 
        cin >> A[i];
    }


    buildHeap(A,n-1);

   
    cout << "After sorting:"<< endl;

    for(int i =0; i < n; i++){
       cout << A[i] << ", ";
    }


}
