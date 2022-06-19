#include <iostream>
using namespace std;


/**
*  iterative solution of binary search
*  @param ordered array
*  @param length of array
*  @param element to search
*  @return index of element if found,  -1 if not found
**/

int linearSearch(int arr[], int n, int e){

    for(int i=0; i < n; i++){

        if(arr[i] == e){
            return i;
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


    int result = linearSearch(arr,n,e);

    cout << "search result : " << result;

    return 0;
}





