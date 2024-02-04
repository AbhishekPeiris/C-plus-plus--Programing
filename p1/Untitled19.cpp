#include <iostream>

using namespace std;

int main(){
	
	int score;
	
	cout<< "Enter your score(0-4) : ";
	cin>> score;
	
	if(score == 4){
		
		cout<< "Excellent" <<endl;
	}
	else if(score == 3){
		
		cout<< "Good" <<endl;
	}
	else if(score == 2){
		
		cout<< "Average" <<endl;
	}
	else{
		
		cout<< "Below Average\nNeed Improvement";
	}
	
	return 0;
}