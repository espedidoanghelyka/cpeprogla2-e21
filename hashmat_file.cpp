#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    ifstream f("input.txt");
    int hashmat, opponent;
    
    while (f >> hashmat >> opponent) {
          cout << abs(hashmat-opponent);      
    }
    system("pause");
    return 0;
}   
