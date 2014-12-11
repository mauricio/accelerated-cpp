#include <cctype>
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

vector<string> split(const string& s) {
  vector<string> result;

  typedef string::size_type s_size;

  s_size x = 0, i = 0, j = 0;

  while( x < s.size() ) {

    if (!isspace(s[x])) {
      if ( i == 0 ) {
        i = x;
      }
      j++;
    } else if (j != 0) {
      result.push_back(s.substr(i,j));
      j = 0;
      i = 0;
    }

    x++;
  }

  return result;
}

int main() {
  vector<string> words = split("    I am a    bad person     ");

  for(vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter) {
    cout << *iter << endl;
  }

}
