#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat john("John");
    std::cout << "Current grade of " << john.getName() << ": "; 
    std::cout << john.getGrade() << std::endl;
    john.incGrade();
    std::cout << "Current grade of " << john.getName() << ": "; 
    std::cout << john.getGrade() << std::endl;
    john.incGrade();
}