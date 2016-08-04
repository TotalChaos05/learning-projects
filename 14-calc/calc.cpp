#include <iostream>
#include <string>
#include <sstream> // getline
#include <map>

struct Calc {
  float divide(int first, int second) {
    return first / second;
  }

  int mulitply(int first, int second) {
    return first * second;
  }

  int add(int first, int second) {
    return first + second;
  }

  int subtract(int first, int second) {
    return first - second;
  }
};

// using std::string;
using namespace std;

int main() {
  std::map<string, int(Calc::*)(int, int)> map;
  map["+"] = &Calc::add;

  std::cout << "Enter a sum: ";

  string op;
  int x;
  int y;

  // string input;
  stringstream data(cin);
  // getline(cin, input);
  data >> x >> op >> y;

  std::cout << x << op << y << std::endl;

  string operators[] = {"+", "-", "*", "/"};

  // search for operator in string
  // if not in string, returns number greater than string length
  // can also use std::string::npos
  // for(auto op : operators) {
  //   std::size_t found = input.find(op);

  //   if(found != std::string::npos) {
  //     // std::cout << op << ": " << input.find(op) << std::endl;
  //     // split string at operator
  //     // get first and second numbers
  //     auto start = 0;
  //     auto end = found;
  //     int x = input.substr(start, end - start);
  //     int y = input.substr(end + op.length(), input.length());

  //     std::cout << (int)x << std::endl;
  //     std::cout << (int)y << std::endl;

  //     Calc calc;
  //     auto func = map.find(op);
  //     // get string:function pair out of map
  //     // call function
  //     std::cout << map.find(op)->first << " = " << (calc.*(func->second))(2, 4) << std::endl;
  //     // can't use strings in switch
  //     // switch(op) {
  //     //   case "+":
  //     //     std::cout << first + second << std::endl;
  //     //     break;
  //     // }
  //   }
  // }

  return 0;
}