#include <iostream>
#include<algorithm>

using namespace std;

/**
 * @brief sort integer array, by bubble sort algorithm
 * 
 * @param arr integer array
 * @param n size of array
 */


void bubbleSort(int arr[], int n){
    for(int i =0; i < n; i++){
        for(int j=0; j <n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
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


    bubbleSort(A,n);
    
    cout << "After sorting:"<< endl;

    for(int i =0; i < n; i++){
       cout << A[i] << ", ";
    }


}
