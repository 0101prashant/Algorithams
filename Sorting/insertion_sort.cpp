#include <iostream>
#include<algorithm>

using namespace std;

/**
 * @brief sort integer array, by insertion sort algorithm
 * 
 * @param arr integer array
 * @param n size of array
 */


void insertionSort(int arr[], int n){

    for(int i =1; i < n; i++){
        
        int value = arr[i];
        int index = i;

        while(index > 0 && arr[index-1] > value){
            
            arr[index] = arr[index-1];

            index--;
        }

        arr[index] = value;

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


    insertionSort(A,n);
    
    cout << "After sorting:"<< endl;

    for(int i =0; i < n; i++){
       cout << A[i] << ", ";
    }


}
