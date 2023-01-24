#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 and arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = current;
    }
}
int main(){
    int arr[] = {-2,3,4,6,2,33,9,88,43};
    int size = sizeof(arr)/sizeof(int);

    insertionSort(arr, size);

    return 0;
}