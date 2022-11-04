#include<iostream>
using namespace std;

int main(){
    int n,j;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<" 1 ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<" 1 ";
        }
        cout<<endl;
    }
    return 0;
}