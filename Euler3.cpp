#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream f("input1.txt");
    int num, sum=0;
    while(f>>num){
	}
for (int x=0; x<num; x++) {
          if ((x % 3 == 0) || (x % 5 == 0)) 
               sum += x;
    }
	cout << sum;
	return 0;
}
