#include<iostream>
using namespace std;
long long int fact(long long int n){
	if(n<=1) return 1;
	return n*fact(n-1);
}
long long int Comb(long long int n, long long int r){
	return (fact(n)/(fact(r) * fact(n-r)));
}
int main(){
	cout<<"Enter n and r values : ";
	long long int n = 0, r=0;
	cin>>n>>r;
	if(n<=0 || r<=0) cout<<"Please enter a valid inputs.."<<endl;
	else cout<<Comb(n,r)<<endl;
	return 0; 
}
