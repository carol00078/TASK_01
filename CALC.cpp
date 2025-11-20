#include <iostream>
#include <cmath>
//#include <windows.h>
using namespace std;
void show_cal()
{
    cout<<"------------------------------"<<endl;
    cout<<"---                        ---"<<endl;
    cout<<"-     SCIENTIFIC             -"<<endl;
    cout<<"-     CALCULATOR             -"<<endl;
    cout<<"---                        ---"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  +   |    -      |  *      -"<<endl;
    cout<<"-  ADD |   MINUS   | MULTIPLY-"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  /   |    m      |  l      -"<<endl;
    cout<<"-DIVIDE|  MODE     | LOG     -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  S   |   C       |  p      -"<<endl;
    cout<<"-SQUARE|   CUBE    | POWER   -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  s   |    c      |  t      -"<<endl;
    cout<<"- SIN  |   COS     | TAN     -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  r   |    k      |  .      -"<<endl;
    cout<<"-sqroot|  Clear    |  Close  -"<<endl;
    cout<<"------------------------------"<<endl;
    
}
void display_out(double answer)
{
    cout<<"------------------------------"<<endl;
    cout<<"---                        ---"<<endl;
    cout<<"-   CURRENT        --------- -"<<endl;
    cout<<"-   OUTPUT         |         -"<<endl;
    cout<<"---                | "<<answer<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  +   |    -      |  *      -"<<endl;
    cout<<"-  ADD |   MINUS   | MULTIPLY-"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  /   |    m      |  l      -"<<endl;
    cout<<"-DIVIDE|  MODE     | LOG     -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  S   |   C       |  p      -"<<endl;
    cout<<"-SQUARE|   CUBE    | POWER   -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  s   |    c      |  t      -"<<endl;
    cout<<"- SIN  |   COS     | TAN     -"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"-  r   |    k      |  .      -"<<endl;
    cout<<"-sqroot|  Clear    |  Close  -"<<endl;
    cout<<"------------------------------"<<endl;
    
}
int main(){
    double num1;
    double num2;
    double answer;
    char inp;
    show_cal();
  while (true)
{
cout<<"Enter: ";
cin>>inp;

if (inp=='.') {break;}
   
switch (inp)
    {
    case '+':
        cout<<"Num1: ";
        cin>>num1;
        cout<<"Num2: ";
        cin>>num2;
        answer=num1+num2;
        display_out(answer);
        break;
    case '-':
    cout<<"Num1: ";
        cin>>num1;
        cout<<"Num2: ";
        cin>>num2;
      answer=num1-num2;
      display_out(answer);
       break;
    case '*':
    cout<<"Num1: ";
        cin>>num1;
        cout<<"Num2: ";
        cin>>num2;
      answer=num1*num2;
      display_out(answer);
       break;
    case '/':
    cout<<"Num1: ";
    cin>>num1;
    cout<<"Num2: ";
    cin>>num2;
    if (num2 == 0) {
        cout << "Error: Division by zero!" << endl;
        break;
    }
    answer = num1 / num2;
    display_out(answer);
    break;
    case 'm':
    cout<<"Num1: ";
        cin>>num1;
        cout<<"Num2: ";
        cin>>num2;
      answer=int(num1) %int(num2);
      display_out(answer);
      break;
    case 'l':
       cout<<"NUM1:";
       cin>>num1;
       answer=log(num1);
      display_out(answer);
     break;
    case 'S':
      cout<<"NUM1:";
       cin>>num1;
      answer=num1*num1;
      display_out(answer);
      break;
    case 'C':
       cout<<"NUM1:";
       cin>>num1;
       answer=num1*num1*num1;
       display_out(answer);
       break;
    case 'p':
      cout<<"Num1: ";
        cin>>num1;
        cout<<"Num2: ";
        cin>>num2;
      answer=pow(num1,num2);
       display_out(answer);
       break;
    case 's':
      cout<<"NUM1:";
       cin>>num1;
      // answer = sin(num1 * M_PI / 180); // for degrees
      answer=sin(num1*M_1_PI);
      display_out(answer);
       break;
    case 'c':
    cout<<"NUM1:";
       cin>>num1;
      answer=cos(num1*M_1_PI);
      display_out(answer);
       break;
    case 't':
    cout<<"NUM1:";
    cin>>num1;
    if (fmod(num1, 180) == 90) {
        cout << "Warning: tan(" << num1 << ") is undefined!" << endl;
        break;
    }
    answer = tan(num1 * M_PI / 180); // Convert to radians if input is in degrees
    display_out(answer);
    break;
    case 'r':
      cout<<"NUM1:";
       cin>>num1;
      answer=sqrt(num1);
      display_out(answer);
      break;
    case 'k':
    system("CLS");  // Clear screen (Windows only)
    show_cal();
    break;
    case '.':
     break;  
    default:
      cout<<"INVALID";
        break;
     }
    

    }   
return 0;
}