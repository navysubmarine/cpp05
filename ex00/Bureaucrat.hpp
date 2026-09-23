#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string m_name);
        Bureaucrat(std::string m_name, int m_grade);
        Bureaucrat(const Bureaucrat& ref);
        Bureaucrat& operator=(const Bureaucrat& ref);
        ~Bureaucrat();
        std::string getName();
        int getGrade();
        void incGrade();
        void decGrade();
        void GradeTooHighException();
        void GradeTooLowException();
};

#endif