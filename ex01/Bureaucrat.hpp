#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        class GradeTooHighException : public std::exception
        {
            public: 
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public: 
                const char* what() const throw();
        };
        Bureaucrat();
        Bureaucrat(std::string m_name);
        Bureaucrat(std::string m_name, int m_grade);
        Bureaucrat(const Bureaucrat& ref);
        Bureaucrat& operator=(const Bureaucrat& ref);
        ~Bureaucrat();
        const std::string& getName() const;
        int getGrade() const;
        void incGrade();
        void decGrade();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif