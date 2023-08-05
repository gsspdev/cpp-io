#include <iostream>

using namespace std;

class HelperClass {
public:
    string result = "result";
    void h1(int i) {
        cout << "The value of i is " << i << '\n';
    }

    void h2(int j) {
        cout << "The value of i is " << j << '\n';
    }
    
    // Share this function with direct access not recommended
    // considering moving this to a getter or similar
    void printResult() {
        cout << result << endl;
    }
};

int main() {

  cout << "10" << endl; 
  int x = 10;
  cout << x << endl;

  HelperClass helper;

  helper.h1(x);
  helper.h2(x);

  int i;
  double d;
  cin >> i >> d;

  cout << "This is a log statement" << endl;
  return 0;
}
