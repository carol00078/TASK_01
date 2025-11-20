#include <iostream>
using namespace std;
int main(){
  int select,price,quantity;
  float total=0;
  do{
   cout<<"-------------------------------"<<endl;
   cout<<"---     CPP RESTAURANT     ---"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     BURGER  |  PIZZA     --"<<endl;
   cout<<"--       (1)   |  (2)       --"<<endl;
   cout<<"--      200$   |  500$      --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     FRIES   |  PEPSI     --"<<endl;
   cout<<"--      (3)    |   (4)      --"<<endl;
   cout<<"--      100$   |    80$     --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"--     TOTAL   |  EXIT      --"<<endl;
   cout<<"--      (5)    |   (6)      --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"SELECT: ";
   cin>>select;
   switch (select)
   {
   case 1:
    price=200;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    cout<<"CURRENT BILL: "<<price*quantity<<endl;
    total +=price*quantity;
    break;
   case 2:
    price=500;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    cout<<"CURRENT BILL: "<<price*quantity<<endl;
    total +=price*quantity;
    break;
   case 3:
    price=100;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    cout<<"CURRENT BILL: "<<price*quantity<<endl;
    total +=price*quantity;
    break;
   case 4:
    price=80;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    cout<<"CURRENT BILL: "<<price*quantity<<endl;
    total +=price*quantity;
    break;
   case 5:  
    cout<<"TOTAL BILL: "<<total<<endl;
    break;  
    case 6:
    cout << "Thank you for visiting CPP Restaurant!" << endl;
    break;

 default:
  cout<<"INVALID\n";
    break;
   }
}
while (select!=6);
cout << "FINAL BILL: " << total << endl;
return 0;
}