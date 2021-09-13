#include <iostream>
#include<windows.h>
#include <stdlib.h>
using namespace std; 
int bal;

void Exit() //Exit() is a user defined function to exit loop.
{
    cout<<"***Thank you***"<<endl<<"---Please Collect Your Card--"<<endl;
}
void WithDraw() //It is a function to withdraw amount.
{
    int WiAm;
    cout<<"Please Enter the WithDraw Amount : "<<endl<<"(NOTE: INPUT should be Hundred are Multiples of Hundred)"<<endl;
    cin>>WiAm;
    if(WiAm%100==0 && WiAm>0)
    {
      if(WiAm<=bal)
      {
        bal=bal-WiAm;
        cout<<"***Congratulations You have been Successfully WithDrawn Rs"<<WiAm<<" ***"<<endl
        <<"Your Current Balance is : "<<bal<<endl;
      }
      else
      {
          Beep(500,1000);
        cout<<"***ERROR***Insufficient Balance---"<<endl;
      }  
    }
    else
    {
        Beep(500,1000);
        cout<<"***ERROR***INVALID INPUT***PLease Enter the Valid INPUT***"<<endl
            <<"(NOTE: INPUT should be Hundred are Multiples of Hundred)"<<endl
            <<"PRESS 1 : To ReEnter a VALID INPUT"<<endl<<"PRESS 2 : Exit"<<endl;
            int des;
            cin>>des;
            if(des==1)
            {
                WithDraw();
            }
            else
            {
                Exit();
            }
    }
}
int Deposit() // It is a function to deposit amount.
{
    int dep;
    cout<<"Please Enter the Deposit Amount : "<<endl<<"NOTE:"<<endl<<"1.Amount must be Hundred or Multiples of Hundred"
    <<endl<<"2.Only Rs100,Rs200,Rs500,Rs2000 are accepted"<<endl;
    
    cin>>dep;
    if(dep%100==0 && dep>0)
    {
    bal+=dep;
    cout<<"Congratulations! Your Amount has been Successfully Deposited"<<endl;
    cout<<"Your Current Balance is : Rs"<<bal<<endl;
    }
    else
    {
        Beep(500,1000);
        cout<<"***INVALID INPUT***"<<endl<<"PRESS 1 : To ReEnter VALID INPUT"<<endl<<"PRESS 2 : To EXIT"<<endl;
        int b;
        cin>>b;
        if(b==1)
        {
        Deposit();
        }
        else{}
    }
}
void Balance() // It is a function to Check Balance.
{
   
    cout<<"Your Current Balance is : Rs"<<bal<<endl;
}
int main()
{
    int n;
    do{
    cout<<"\n"<<"-----***********Welcome To ATM**********-----"<<endl;
    cout<<"\n"<<"Select Option: "<<"\n"<<endl;
    
    cout<<"Press 1 : To Check Balance."<<endl;
    cout<<"Press 2 : To Deposit Amount."<<endl;
    cout<<"Press 3 : To WithDraw Amount."<<endl;
    cout<<"Press 4 : To Exit."<<endl;
    cin>>n;
    
    switch (n)
     {
        case 1: 
            Balance();break;
        case 2:
            Deposit();break;
        case 3:
            WithDraw();break;
        case 4:
            Exit();break;
        default:
        Beep(500,1000);
        cout<<"#### INVALID INPUT ####"<<endl<<"***Thank you***"<<endl;
     }
    }while(n!=4);
    
}





