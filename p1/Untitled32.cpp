#include <iostream>

using namespace std;

long nCr(int n, int r);

int main(){
	
	int n,r;
	
	cout<< "Enter a value for n : ";
	cin>> n;
	
	cout<< "Enter a value for r : ";
	cin>> r;
	
	cout<< "nCr = ";
	cout<< nCr(n,r);
	cout<<endl;
	
	return 0;
}
long nCr(int n, int r){
	
	int i,j,k;
	int Fn=1,Fr=1,Fnr=1;
	int nCr;
	
	for(i=n ; i>=1 ; i--){
		
		Fn = Fn*i;
	}
	for(j=r ; j>=1 ; j--){
		
		Fr = Fr*j;
	}
	for(k=n-r ; k>=1 ; k--){
		
		Fnr = Fnr*k;
	}
		
	nCr = Fn/Fr*Fnr;
	
	return nCr;
	
}
