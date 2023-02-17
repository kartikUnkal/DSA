// A 
// B C 
// C D E 
// D E F G 
// E F G H I

#include<iostream>
using namespace std;

int main(){
	int n =5;
	char ch = 'A';
	for(int i=1;i<=n;i++){
		ch = 'A'+i-1;
		for(int j=1;j<=i;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}