#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat john("John", 14);
    std::cout << "Current grade of " << john.getName() << ": "; 
    std::cout << john.getGrade() << std::endl;
    john.decGrade();
    std::cout << "Current grade of " << john.getName() << ": "; 
    std::cout << john.getGrade() << std::endl;
    john.incGrade();
}