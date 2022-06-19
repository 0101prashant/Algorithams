#include <iostream>
using namespace std;


/**
*  iterative solution of binary search
*  @param ordered array
*  @param length of array
*  @param element to search
*  @return index of element if found,  -1 if not found
**/


int binarySearch(int arr[], int n, int e){

    int low = 0, high = n-1;

    while(low <= high){

        int mid = (low+high)/2;

        if(arr[mid] == e){
            return mid;
        }
        else if( arr[mid] < e){
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }

    return -1;

}



int main(){

    int n = 0;

    cout << "enter length of array :";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "enter element for index " << i << " : ";
        cin >> arr[i];
    }

    int e = 0;
    cout << "enter element to search :";
    cin >> e;


    int result = binarySearch(arr,n,e);

    cout << "search result : " << result;

    return 0;
}





