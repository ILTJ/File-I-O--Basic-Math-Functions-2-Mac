//
//  main.cpp
//  O: Basic Math Functions_2
//
//  Created by Ryan Wong on 1/4/14.
//  Copyright (c) 2014 rwjhwong. All rights reserved.
/*  This is a basic C++ program on Mac that uses file input (data.txt) and output (output.txt). This program calculates the number of integers (1 to 100) you have entered in the input file (data.txt) and displays the number of integers, the sum of the integers, the largest integer, the smallest integer, the average of the integers and finally the number of integers above the average. 
 */

#include <fstream>
using namespace std;
int main() {
    int n, sum, x, max, min,avg,a;
    ifstream infile("data.txt");
    ofstream outfile ("output.txt");
    n = 0; // for counting
    sum = 0; // for adding
    min = 100;
    max = 0;
    avg = 0; // for average
    a = 0; // for number of integers over average
    while (infile>>x) { // x is the integer to be read from the file
        n++;
        sum = sum + x;
        if (x > max) max=x;
        if (x < min) min=x;
    }
	avg = sum/n;
	infile.close();
	ifstream infile1("data.txt");
	
	while (infile1>>x){
		if (x>avg) a++;
	}
   	outfile << "The number of integers in the file is: " << n << endl;
	outfile << "The sum of integers in the file is: " << sum << endl;
   	outfile << "The largest number is:" <<max<<endl;
   	outfile << "The smallest number is:" <<min<<endl;
   	outfile << "The average of the integers is:" << avg <<endl;
   	outfile << "The number of integers in the file greater than the average:" << a << endl;
   	return 0;
}
