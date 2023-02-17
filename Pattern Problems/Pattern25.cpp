//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1


#include<iostream>
using namespace std;

int main(){
	int n = 4;
	int count = 1;
	for(int i=1;i<=n;i++){
		int count = 1;
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int k=1;k<=i;k++){
			cout<<count<<" ";
			count++;
		}
		int count2 = i-1;
		for(int l=1;l<=i-1;l++){
			cout<<count2<<" ";
			count2--;
		}
		cout<<endl;
	}
}