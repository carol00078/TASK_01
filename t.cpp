#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
class sms{
string name,fname,subject,result;
int marks,rollno,grade;
public:
void add();
void display();
void menu();
bool search(int r);

};
void sms::add(){
    cout<<"---REGISTER STUDENT----"<<endl;
    cout<<"STUDENT NAME: ";
    cin>>name;
    cout<<"FATHER NAME: ";
    cin>>fname;
    cout<<"STUDENT GRADE: ";
    cin>>grade;
    cout<<"STUDENT ROLLNO: ";
    cin>>rollno;
    cout<<"SUBJECT: ";
    cin>>subject;
    cout<<"MARKS: ";
    cin>>marks;
    cout<<"RESULT: ";
    cin>>result;
    cout<<"---REGISTERED----"<<endl;
}
void sms::menu(){
    cout<<"------------------------------------"<<endl;
    cout<<"---      STUDENT PORTAL          ---"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"---- 01 REGISTER STUDENT       -----"<<endl;
    cout<<"---- 02 SHOW STUDENT RECORD    -----"<<endl;
    cout<<"---- 03 SEARCH STUDENT         -----"<<endl;
    cout<<"---- 04    EXIT                -----"<<endl;
    cout<<"------------------------------------"<<endl;
}
bool sms::search(int r){
  
  bool found=false;
  if (r==rollno)
  {
    cout<<"----STUDENT FOUND----"<<endl;
    cout<<"STUDENT NAME    : "<<name<<endl;
    cout<<"FATHER  NAME    : "<<fname<<endl;
    cout<<"STUDENT ROLLNO  : "<<rollno<<endl;
    cout<<"STUDENT GRADE   : "<<grade<<endl;
    cout<<"STUDENT SUBJECT : "<<subject<<endl;
    cout<<"STUDENT MARKS   : "<<marks<<endl;
    cout<<"STUDENT RESULT  : "<<result<<endl;
    cout<<"---------------------"<<endl;  
    
    return true;
  }
   
  return false;
}
void sms::display(){
  // string line="----------------+---------------+--------------+-------------+----------------+-------------+--------------+";
    //print top border 
  // cout<<line<<endl;
    //print student data row
     cout<<string(102,'-')<<endl;
     cout <<"|"<< left << setw(15)<<name 
          <<"|"<< setw(15)<<fname 
          <<"|"<< setw(15)<<rollno 
          <<"|"<< setw(15)<<grade 
          <<"|"<< setw(15)<<subject 
          <<"|"<< setw(15)<<marks 
          <<"|"<< setw(10)<<result 
          <<"|"<< endl;
      //    cout<<string(80,'-')<<endl;
  //   cout<<line<<endl;     
    
}
int main(){
int choice;
sms temp;
vector<sms>student;
do{
    temp.menu();
    cout<<"ENTER CHOICE"<<endl;
    cin>>choice;
    switch (choice)
    {
    case  1:{
        sms ten;
        ten.add();
        student.push_back(ten);
    }
        break;
    case  2:
        //print header row
     cout <<"|"<< left << setw(15)<<"NAME" 
          <<"|"<< setw(15)<<"FATHER NAME" 
          <<"|"<< setw(15)<<"ROLLNO"
          <<"|"<< setw(15)<<"GRADE"
          <<"|"<< setw(15)<<"SUBJECT" 
          <<"|"<< setw(15)<<"MARKS" 
          <<"|"<< setw(10)<<"RESULT" 
          <<"|"<< endl;
        for (sms&s:student)
        s.display();
        break;
    case  3:{
        int r;
            cout << "ENTER ROLL NO TO SEARCH: ";
            cin >> r;
            bool found = false;

        for (sms&s:student){
        if ( s.search(r)){
        found=true;
        break;
        }
    }
}
        break;
    case  4:
        cout<<"EXITING"<<endl;
        break;
    
    default:
    cout<<"INVALID";
        break;
    }
}
while (choice!=4);

return 0;
}