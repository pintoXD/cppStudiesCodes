#include <iostream>
#include "employee.hpp"
// using namespace std;

int main(){
    

    Employee empregado;

    empregado.getBirthDate();


    empregado.setName("João");
    empregado.setGender("Male");
    empregado.setEmployeeID(7456);

    empregado.print();


}