#ifndef _GUARD_student_info_h
#define _GUARD_student_info_h

#include <vector>
#include <string>
#include <iostream>

struct StudentInfo {
  std::string name;
  double midterm, final;
  std::vector<double> homework;
};

std::istream& read_homework(std::istream& in, std::vector<double>& homework);
std::istream& read(std::istream& is, StudentInfo& s);
bool compare(const StudentInfo& l, const StudentInfo& r);

#endif
