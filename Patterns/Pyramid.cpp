#include<iostream>
using namespace std;

int main(){
	
	int r,c;
	cout<<"Enter The number of Rows:";
    cin>>r;
	// cout<<"Enter The number of Col:";
	// cin>>c;

for(int i=1;i<=r;i++){
	for(int j=1;j<=r-i;j++){
		cout<<" ";
	}
	for(int k=1;k<=i;k++){
		cout<<"* ";
	}
	cout<<endl;
}

	return 0;
}
