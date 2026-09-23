#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Yannick"), grade(2){}

Bureaucrat::Bureaucrat(std::string m_name) : name(m_name), grade(2) {}

Bureaucrat::Bureaucrat(std::string m_name, int m_grade) : name(m_name), grade(m_grade) {}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
{
    *this = ref;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    if (this != &ref)
    {
        *this = ref;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{}

std::string Bureaucrat::getName()
{
    return(name);
}

int Bureaucrat::getGrade()
{
    return(grade);
}

void Bureaucrat::GradeTooHighException()
{
    std::cout << "Error : grade too high, you cannot be more than first" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
    std::cout << "Error : grade too low, you cannot be less than 150th" << std::endl;
}

void Bureaucrat::incGrade()
{
    try
    {
        if (grade <= 1)
        {
            throw "invalid grade";
        }
        grade--;
    }
    catch (const char* msg)
    {
        GradeTooHighException();
    }
}

void Bureaucrat::decGrade()
{
    try
    {
        if (grade >= 150)
        {
            throw "invalid grade";
        }
        grade++;
    }
    catch (const char* msg)
    {
        GradeTooLowException();
    }
}
