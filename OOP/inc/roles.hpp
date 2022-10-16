#ifndef ROLES_H
#define ROLES_H

#endif // !1

#include "employee.hpp"
#include <iostream>



class Manager : public Employee{

    public:
        Manager();
        ~Manager();

        void setDepartment(string department);
        void setProjectsNo(int projects_qty);
        void setSalaryBonus(int salary_bonus);

        string getDepartment();
        int getProjectsNo();
        float getSalaryBonus();

    
    private:
        string m_department;
        int m_projects_qty;
        float m_wage_bonus;
        

};



class Engineer : public Employee{

    public:

        Engineer();
        ~Engineer();

        void setExpertise(string expertise);
        void setSeniority(int seniority);

        void getExpertise(string &expertise);
        void getSeniority(int &seniority);


    private:

        string m_expertise;
        int m_seniority;


};