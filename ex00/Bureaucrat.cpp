#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Yannick"), grade(2)
{}

Bureaucrat::Bureaucrat(std::string m_name) : name(m_name), grade(2)
{}

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

void Bureaucrat::incGrade()
{
    if (grade <= 1)
    {
        throw std::invalid_argument("grade of less than 1");
    }
    else
        grade--;
}

void Bureaucrat::decGrade()
{
    if (grade >= 150)
    {
        throw std::invalid_argument("grade of more than 150");
    }
    else
        grade++;
}

void GradeTooHighException();
void GradeTooLowException();