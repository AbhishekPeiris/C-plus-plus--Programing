#include <iostream>

using namespace std;

int main(){
	
	int count = 1000;
	
	// while loop
	
	while(count>=100){
		
		cout<< count << " ";
		count -= 100;
	}
	cout<< "\n\n";
	
	// do while loop
	
	count = 1000;
	
	do{
		
		cout<< count << " ";
		count -= 100;
		
	}while(count>=100);
	
	cout<< "\n\n";
	
	// for loop
	
	for(count=1000 ; count>=100 ; count-=100){
		
		cout<< count << " ";
	}
	
	return 0;
}