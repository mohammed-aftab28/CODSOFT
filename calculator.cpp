#include<iostream>
using namespace std;
int main(){
    cout<<"_________________________________________________________________________________________________________________________________"<<endl;

    cout<<"_______________________________________________________SIMPLE CALCULATOR_________________________________________________________"<<endl;

    cout<<"_________________________________________________________________________________________________________________________________"<<endl;
    
    //Declaration of variables

     double num1 , num2 , operation ;
     int newNum1 , newNum2 ;
     char op ;
     char start;

    //Start the calculator if start is equal to s

    cout<<"ENTER 's' TO START OR ANY OTHER KEY TO QUIT __";
    cin>>start;

    //if start == s then loop is executed

    while(start=='s'){
         double num1 , num2 , operation ;
         int newNum1 , newNum2 ;
         char op ;

        //Initialization of numbers and operators

         cout<<"ENTER FIRST NUMBER : "<<endl;
         cin>>num1;
         cout<<"ENTER SECOND NUMBER : "<<endl;
         cin>>num2;
         cout<<"CHOOSE OPERATOR : "<<endl;
         cin>>op;

         //Switch case for specific operator and its operation

    switch (op)
    {
    case '+' : operation=num1+num2;
    cout<<"THE ANSWER IS : ";
    cout<<operation<<endl;
        break;
    case '-' : operation=num1-num2;
    cout<<"THE ANSWER IS : ";
    cout<<operation<<endl;
        break;
    case '*' : operation=num1*num2;
    cout<<"THE ANSWER IS : ";
    cout<<operation<<endl;
        break;
    case '/' : operation=num1/num2;
    cout<<"THE ANSWER IS : ";
    cout<<operation<<endl;
        break;
    case '%' : newNum1=num1;newNum2=num2;
    cout<<"THE ANSWER IS : ";
    operation=newNum1%newNum2;
    cout<<operation<<endl;
        break;
    default:cout<<"ERROR OR INVALID INPUTS"<<endl;
        break;
    }
    cout<<"_________________________________________________________________________________________________________________________________"<<endl;
    cout<<"_________________________________________________________________________________________________________________________________"<<endl;
    cout<<" "<<endl;
    cout<<"ENTER 's' TO START OR ANY OTHER KEY TO QUIT __";
    cin>>start;
    }
    return 0;
}