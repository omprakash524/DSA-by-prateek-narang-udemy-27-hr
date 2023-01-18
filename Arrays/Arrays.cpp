#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    cout<<"In function"<<sizeof(arr)<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int marks[100];
    int n;
    cout<<"Enter the no.of student : ";
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    for(int i = 0; i<n; i++){
        cout<<marks[i]<<" ";
    }
    cout<<endl;
    int arr[] = {1,2,3,4,5,6,7};
    // float n = sizeof(arr)/sizeof(int);
    printArray(arr,n);

    return 0;
}