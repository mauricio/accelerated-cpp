#include "student_info.h"

using std::vector;
using std::string;
using std::istream;

istream& read_homework(istream& in, vector<double>& homework) {
  if (in) {
    homework.clear();

    double x;

    while (in >> x) {
      homework.push_back(x);
    }

    in.clear();
  }

  return in;
}

istream& read(istream& is, StudentInfo& s)
{
  is >> s.name >> s.midterm >> s.final;

  read_homework(is, s.homework);

  return is;
}

bool compare(const StudentInfo& l, const StudentInfo& r)
{
  return l.name < r.name;
}
