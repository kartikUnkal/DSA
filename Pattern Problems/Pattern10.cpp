// A A A 
// B B B 
// C C C

#include<iostream>
using namespace std;

int main(){
	int n=3;
	char alph ='A';
	for(int i =1;i<=n;i++){
		
		for(int i=1;i<=n;i++){
			cout<<alph<<" ";
		}
		alph++;
		cout<<endl;
	}
}