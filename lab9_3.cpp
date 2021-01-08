#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double mean=0,sd=0,num=0;
	ifstream score;
    string textline;
    score.open("score.txt");
    while (getline(score,textline)){	
        mean += stod(textline);
		sd += stod(textline)*stod(textline);
		num++;
	}
	
    cout << "Number of data = "<< num << "\n";
    cout << "Mean = "<< setprecision(3) << mean/num << "\n";
    cout << "Standard deviation = "<< sqrt((sd/num)-(pow((mean/num),2)));
 
}