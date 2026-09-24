#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat john("John", 5);
        std::cout << john << std::endl;
        john.incGrade();
        john.incGrade();
        john.incGrade();
        john.incGrade();
        std::cout << john << std::endl;
        john.decGrade();
        std::cout << john << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}