// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;

int main(){
	int n = 5;
	for(int i=1;i<=5;i++){
		int count1 = 1;
		for(int j=1;j<=n-i+1;j++){
			cout<<count1;
			count1++;
		}
		for(int k=1;k<i;k++){
			cout<<"*";
		}
		for(int x=1;x<i;x++){
			cout<<"*";
		}
		int count2=n-i+1;
		for(int y=1;y<=n-i+1;y++){
			cout<<count2;
			count2--;
		}
		cout<<endl;
	}
}