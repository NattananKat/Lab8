#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double x){
    if(x > 90){
        return 'A';
    }else if(x > 75){
        return 'B';
    }else if(x > 60){
        return 'C';
    }else if(x > 45){
        return 'D';
    }else{
        return 'F'; 
    }
}

int main(){
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	cin.ignore();

	string name[N];
	float score[N];	

	for(i = 0; i<N; i++){
		cout << "Name of student " << i+1 << ": ";
	    getline(cin, name[i]);
	    cout << "Score of student " << i+1 << ": ";
	    cin >> score[i];
		cin.ignore();
	}


	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	for(i = 0; i < N; i++){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
	} 
	cout << "---------------------------------------------\n";

	return 0;
}	
