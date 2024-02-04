#include <iostream>

using namespace std;

int main(){
	
	int score;
	
	cout<< "Enter your score(1-4) : ";
	cin>> score;
	
	switch(score){
		
		case 4:{
			cout<< "Excellent";
			break;
		}
		case 3:{
			cout<< "Good";
			break;
		}
		case 2:{
			cout<< "Average";
			break;
		}
		default:{
			cout<< "Below Average\nNeed Improvement";
			break;
		}
	}
	return 0;
}