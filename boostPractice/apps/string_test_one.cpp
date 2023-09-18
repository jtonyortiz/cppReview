//
//File: string_test_one.cpp
//Dscription: Checking string Boost extention class with algorithm lib
//

#include <iostream>
#include <boost/algorithm/string.hpp>

using namespace std;
using namespace boost;

int main(void) {
  
  string str1(" hello world! ");
  to_upper(str1);
  
  //String created as upper-case:
  std::cout << "String created to upper-case " << str1 << std::endl;
  trim(str1);

  //Trims string from external whitespace
  std::cout << "Trimmed String: " << str1 << std::endl;

  //Replaces hello with goodbye : goodbye world!
  string str2 = to_lower_copy(ireplace_first_copy(str1, "hello", "goodbye"));

  std::cout <<"String 2 now equals: " << str2 << endl;
  
  return 0;
}
