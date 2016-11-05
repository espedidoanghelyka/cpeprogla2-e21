#include<fstream> 
#include<iostream>
using namespace std;

int low, maximum, num,e,d;

int cycle(long int n) {
  long int i = 1;

  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n) + 1;
    }
    i++;
  }
  return i;
}

int main() {
  ifstream f("input.txt");
  f >>e>>d;

  while (cin >> e>> d) {

    if (e < d) {
      low = e;
      maximum = d;
    } else {
      low = d;
      maximum = e;
    }

    int max = cycle(low);

    for (int i = low + 1; i <= maximum; i++) {
      int l = cycle(i);
      if (l > max) {
        max = l;
      }
    }

    cout << e<< " " << d<< " " << max << "\n";
  }
  return 0;

}

