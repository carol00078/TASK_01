#include <iostream>
using namespace std;
int main(){
    int select,total=0,bill,price,quantity;
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
   cout<<"--     VIEW    |  EXIT      --"<<endl;
   cout<<"--      (5)    |   (6)      --"<<endl;
   cout<<"------------------------------"<<endl;
   cout<<"SELECT: ";
   cin>>select;
   if (select==1)
   {
    price=200;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    bill=price*quantity;
    total +=bill;
    cout<<"CURRENT BILL: "<<bill<<endl;
   }
   else if (select==2)
   {
    price=500;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    bill=price*quantity;
    total +=bill;
    cout<<"CURRENT BILL: "<<bill<<endl;
   }
   else if (select==3)
   {
    price=100;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    bill=price*quantity;
    total +=bill;
    cout<<"CURRENT BILL: "<<bill<<endl;
   }
   else if (select==4)
   {
    price=80;
    cout<<"ENTER QTY: ";
    cin>>quantity;
    bill=price*quantity;
    total +=bill;
    cout<<"CURRENT BILL: "<<bill<<endl;
   }
   else if (select==5){
    cout<<"TOTAL BILL: "<<total<<"(PKR)"<<endl;
   }
   else { cout<<"THANK YOU"<<endl;}
}
while (select!=6);

return 0;
}