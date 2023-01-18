#include<iostream>
using namespace std;
void printAllPairs(int arr[], int size){
    //  printing all the element
    for(int i = 0; i<size; i++){
        int x = arr[i];
        for(int j = i + 1; j<size; j++){
            int y = arr[j];
            cout<<"["<<"["<<x<<"]"<<","<<"["<<y<<"]"<<"]"<<endl;
        }cout<<endl;
    }
}
int main(){
    int arr[]  = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(arr[0]);

    // using for each loop
    for(int x : arr){
        cout<<x<<" ";
    }cout<<endl<<endl;

    printAllPairs(arr,size);

    return 0;
}

/*#include<iostream>
using namespace std;
    void printpair(int arr[], int size){
        for(int i = 0; i<size; i++){
            int store1 = arr[i];
            for(int j = i+1; j < size; j++){
                int store2 = arr[j];
                cout<<"["<<store1<<"]"<<"["<<store2<<"]"<<endl;
            }
            cout<<endl;
        }
    }

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    for(int x : arr){
        cout<<x<<" ";
    }cout<<endl;

    printpair(arr, size);

    return 0;
}*/