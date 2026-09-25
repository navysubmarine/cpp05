#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_exe;
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
        Form();
        Form(const Form& ref);
        Form& operator=(const Form& ref);
        ~Form();

        const std::string& getName() const;
        
        bool isSigned() const;


};

std::ostream& operator<<(std::ostream& os, const Form& b);

#endif