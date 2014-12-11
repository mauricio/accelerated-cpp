#include "fails.h"
#include "grade.h"

using std::vector;

vector<StudentInfo> extract_fails(vector<StudentInfo>& students) {
  vector<StudentInfo> fails, pass;

  for(vector<StudentInfo>::size_type x = 0; x < students.size(); x++) {
    const StudentInfo& student = students[x];

    if (fgrade(student)) {
      fails.push_back(student);
    } else {
      pass.push_back(student);
    }
  }

  students = pass;

  return fails;
}
