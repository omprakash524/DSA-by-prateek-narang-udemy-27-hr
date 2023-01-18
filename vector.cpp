#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> arr= {1,2,3,4};

    vector<int> arr(10,7);

    arr.pop_back();
    //push-Back 0(1)
    arr.push_back(16);
    cout<<"arr.size() : "<<arr.size()<<endl;

    //capacity of vector
    cout<<"arr.capacity() : "<<arr.capacity()<<endl;

    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<endl;
    }
    

    return 0;
}