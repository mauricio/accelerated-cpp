#ifndef _GUARD_grade_h
#define _GUARD_grade_h

#include <vector>
#include "student_info.h"

double grade( const StudentInfo& s );
double grade(double midterm, double final, double homework);
double grade(double midterm, double final, const std::vector<double>& hw);
double median(std::vector<double> vec);
bool fgrade(const StudentInfo& s);

#endif
