#include <iostream>
using namespace std;

class AbstractEmployee{
   virtual void askForPromotion() = 0;//ABSTRACT FUNCTION
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public:
    
    void setName(string name){//setter
        Name = name;
    }
    string getName(){//getter
        return Name;
    }
void setCompany(string company){//setter
        Company = company;
    }
    string getCompany(){//getter
        return Company;
    }
    void setAge(int age){//setter
        Age = age;
    }
    int getAge(){//getter
        return Age;
    }

    void intorduceYourself(){
        cout<<"Name - " << Name <<endl;
        cout<<"company - " << Company <<endl;
        cout<<"age - " << Age <<endl;
    }
    Employee(string name, string company, int age ){
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion(){
        if(Age>30)
        cout<<Name<<" got promoted"<<endl;
        else
        cout<<Name<<" sorry no promotion for you"<<endl;
    }
};
class developer: Employee{
    public:
    string FavProgrammingLanguage;

    developer(string name, string company, int age, string favProgrammingLanguage)
    :Employee(name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
};

int main(){
    // Employee employee1 = Employee("mohit", "amazon", 40);
    // Employee employee2 = Employee("sameer","amazon", 19);
    developer d = developer(  "mohit", "amazon", 24, "c++");
} 