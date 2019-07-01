#ifndef __STUDENT__
#define __STUDENT__

#include <string>

class Student
{
  public:
	Student(const std::string& n, int a) : name(n), age(a) {}

    void print_details() const;

  private:
    std::string name;
	
    int age;
};

#endif
