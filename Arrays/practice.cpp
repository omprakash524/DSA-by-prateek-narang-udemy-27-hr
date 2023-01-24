#include<iostream>
using namespace std;
int main(){
    int mark[100]={-1};

    cout<<"Enter no.of student : ";
    int n;cin>>n;

    mark[0] = -1;

    for(int i=0; i<n; i++){
        cin>>mark[i];
        mark[i] = mark[i]*2;
    }

    for(int i=0; i<100; i++){
        cout<<mark[i]<<" ";
    }
    
    return 0;
}