#include <vector>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include "grade.h"

using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::setprecision;
using std::vector;
using std::domain_error;
using std::string;
using std::max;

int main()
{

  vector<StudentInfo> students;
  StudentInfo record;
  string::size_type maxlen = 0;

  while (read(cin, record))
  {
    cout << "Enter student name midterm and final" << endl;

    maxlen = max(maxlen, record.name.size());
    students.push_back(record);
  }

  sort(students.begin(), students.end(), compare);

  for(vector<StudentInfo>::size_type i = 0; i != students.size(); i++) {

    const StudentInfo& student = students[i];

    cout << student.name << string(maxlen + 1 - student.name.size(), ' ');

    try {
      double final_grade = grade(student);
      streamsize prec = cout.precision();
      cout << setprecision(3) << final_grade << setprecision(prec);
    } catch (domain_error e) {
      cout << e.what();
    }

    cout << endl;
  }

  return 0;
}
