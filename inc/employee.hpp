#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

using namespace std;


class Employee
{

    public:
        // Employee(string name = "", string gender = "", string hiring_date = "", string birth_date = "", int id_no = 0, float current_wage = 0);
        Employee();
        ~Employee();


        void print();


        
        //setters
        void setName(string name);
        void setGender(string gender);
        void setHiringDate(string date);
        void setBirthDate(string birthdate);
        void setEmployeeID(int id);
        void setCurrentWage(float wage);


        //getters
        string getName();
        string getGender();
        string getHiringDate();
        string getBirthDate();
        int getEmployeeID();
        float getCurrentWage();




    private:
        /* data */
        string m_name;
        string m_gender;
        string m_hiring_date;
        string m_birth_date;
        int m_id_no;
        float m_salary;
};

#endif // !1