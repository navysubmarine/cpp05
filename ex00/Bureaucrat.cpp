#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Yannick"), grade(2){}

Bureaucrat::Bureaucrat(std::string m_name) : name(m_name), grade(2) {}

Bureaucrat::Bureaucrat(std::string m_name, int m_grade) : name(m_name)
{
    if (m_grade < 1)
        throw GradeTooHighException();
    if (m_grade > 150)
        throw GradeTooLowException();
    grade = m_grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : name(ref.name)
{
    grade = ref.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
    if (this != &ref)
    {
        grade = ref.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{}

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

void Bureaucrat::incGrade()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decGrade()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
