//     1
//    22
//   333
//  4444
// 55555

#include<iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<i;
		}
		cout<<endl;
	}
}