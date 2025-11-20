#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
struct Person{
 string name;
 int age;
 string occupation;
};
int main(){
    //DYNAMIC LIST OF PEOPLE
 vector<Person>people=  {
    {"ALICE",22,"ENGINEER"},
    {"CAROL",24,"NURSE"},
    {"KEVIN",25,"DOCTOR"}
 };

   //TABLE HEADER
 cout<<left<<setw(15)<<"NAME"
     <<setw(10)<<"AGE"
     <<setw(15)<<"OCCUPATION"<<endl;
     cout<<string(50,'-')<<endl; //LINE SEPERATOR
     

     //TABLE ROWS LOOPS VECTOR
     for (const auto&person:people){
     cout<<setw(15)<<person.name
     <<setw(10)<<person.age
     <<setw(15)<<person.occupation<<endl;
     cout<<string(50,'-')<<endl;  //placing it inside looop ensure that it prints after each row
     }
return 0;
}

/*
WHATS HAPPENING:
1.struct Person holds individual data.
2.vector<Person> allows dynamic number of entries.
3.The loop prints each person with formatting using setw() and left.*/