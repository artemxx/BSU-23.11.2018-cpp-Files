#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
#ifndef INGORE_TEST_1
  {
    ifstream input("input.txt");
    ofstream output("output.txt");
    if (input.is_open()) {
      string s;
      while (getline(input, s)) {
        output << s << "\n";
      }
    } else {
      cout << "error" << "\n";
    }
  }
#endif

#ifndef IGNORE_TEST_2
  {
    ofstream output("output.txt", ios::app);
    cout << "kek";
  }
#endif

#ifndef INGONE_TEST_3
  {
    ifstream input("input.txt");
    cout << fixed << setprecision(3);
    if (input.is_open()) {
      double value;
      while (input >> value) {
        cout << value << "\n";
      }
    } else {
      cout << "error" << "\n";
    }
  }
#endif

#ifndef INGORE_TEST_4
  {
    /*
      3 3
      1,2,3
      4,5,6
      7,8,9
    */
    ifstream input("input.txt");
    cout << left;
    cout << setfill('.');
    int n, m;
    input >> n >> m;
    for (int i = 0; i < n; ++i) {
      if (i != 0) {
        cout << "\n";
      }
      for (int j = 0; j < m; ++j) {
        int x;
        input >> x;
        input.ignore(1);
        if (j != 0) {
          cout << " ";
        }
        cout << setw(10) << x;
      }
    }
  }
#endif

  return 0;
}
