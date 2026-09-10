#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat john("John");
    john.decGrade();
    std::cout << john.getGrade() << std::endl;
}