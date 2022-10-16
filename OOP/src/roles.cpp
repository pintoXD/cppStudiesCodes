#include "roles.hpp"

Manager::Manager()
    : Employee(),
      m_department(""),
      m_projects_qty(0),
      m_wage_bonus(0)

{

}

Manager::~Manager(){}


void Manager::setDepartment(string department){

    m_department = department;
}

void Manager::setProjectsNo(int projects_qty){

    m_projects_qty = projects_qty;
}

void Manager::setSalaryBonus(int salary_bonus){

    m_wage_bonus = salary_bonus;
    
}

string Manager::getDepartment(){

    return m_department;

}

int Manager::getProjectsNo(){


    return m_projects_qty;

}

float Manager::getSalaryBonus(){

    return m_wage_bonus + getCurrentWage();

}





Engineer::Engineer()
        :
        Employee(),
        m_expertise(""),
        m_seniority(0)
    {


    }

Engineer::~Engineer(){

    printf("Deleting Engineer...");
}



void Engineer::setExpertise(string expertise){

    m_expertise = expertise;
}



void Engineer::setSeniority(int seniority){

    m_seniority = seniority;

}




void Engineer::getExpertise(string &expertise){

    expertise = m_expertise;
}


void Engineer::getSeniority(int &seniority){

    seniority = m_seniority;

}