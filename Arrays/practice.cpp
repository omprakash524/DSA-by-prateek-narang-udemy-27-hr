#include<iostream>
using namespace std;
int main(){
    int mark[100];

    cout<<"Enter no.of student : ";
    int n;cin>>n;

    for(int i=0; i<n; i++){
        cin>>mark[i];
    }

    for(int i=0; i<n; i++){
        cout<<mark[i]<<" ";
    }
    
    return 0;
}