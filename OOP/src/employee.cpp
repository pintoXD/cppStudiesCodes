// #include <iostream>
#include "employee.hpp"

Employee::Employee(string name, string gender, string hiring_date, string birth_date, int id_no, float current_wage)
                :
                m_name(name),
                m_gender(gender),
                m_hiring_date(hiring_date),
                m_birth_date(birth_date),
                m_id_no(id_no),
                m_salary(current_wage)
            
{

    // return 0;
    printf("Objeto criado");

}



Employee::Employee()
        :
        m_name("null"),
        m_gender("null"),
        m_hiring_date("null"),
        m_birth_date("null"),
        m_id_no(0),
        m_salary(0)

    {


    }

Employee::~Employee()
{

    printf("Excluindo objeto.\n");

}

void Employee::print(){

    printf("%s %s %s %s %d %.2f\n", 
            getName().c_str(), getGender().c_str(), getHiringDate().c_str(), getBirthDate().c_str()
            , getEmployeeID(), getCurrentWage());

} 

void Employee::setName(string name){
    m_name = name;
}

void Employee::setGender(string gender)
{
    m_gender = gender;
}

void Employee::setHiringDate(string hiringDate)
{
    m_hiring_date = hiringDate;
}
void Employee::setBirthDate(string birthDate)
{
    m_birth_date = birthDate;
}

void Employee::setEmployeeID(int employeeID)
{
    m_id_no = employeeID;
}
void Employee::setCurrentWage(float wage)
{
    m_salary = wage;
}


string Employee::getName(){

    return m_name;
    
}
string Employee::getGender(){

    return m_gender;

}
string Employee::getHiringDate(){

    return m_hiring_date;

}
string Employee::getBirthDate(){

    return m_birth_date;
}

int Employee::getEmployeeID(){

    return m_id_no;

}

float Employee::getCurrentWage(){

    return m_salary;

}
