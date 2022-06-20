#include <iostream>
#include <algorithm>

using namespace std;


/**
 * @brief sort integer arrary using selection sort algorithm
 * 
 * @param A integer array 
 * @param n size of integer array
 */

void selectionSort(int A[], int n){
    for(int i =0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if( A[i] > A[j]){
                swap(A[i],A[j]);
            }
        }
    }
}



int main(){

    int n;
    cout << "enter size : ";
    cin >> n;

    int A[n]; 

    for(int i =0; i < n; i++){
        cin >> A[i];
    }


    selectionSort(A,n);
    
    cout << "After sorting:"<< endl;

    for(int i =0; i < n; i++){
       cout << A[i] << ", ";
    }


}
