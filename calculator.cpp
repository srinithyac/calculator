/*
   Simple calculator which can perform
   operations '+', '-', '*', '/', '^'.
   with 2 numbers
*/


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float num1,num2;

    char caloperator;

    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"\nEnter the operator(anyone of '+', '-', '*', '/', '^') : ";
    cin>>caloperator;

    cout<<"\nEnter the second number: ";
    cin>>num2;

    if (caloperator == '+'){
        cout<<"\nSum, "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    }

    else if (caloperator == '-'){
        cout<<"\nDifference, "<<num1<<"-"<<num2<<" = "<<num1-num2<<endl;
    }

    else if (caloperator == '*'){
        cout<<"\nProduct, "<<num1<<"*"<<num2<<" = "<<num1*num2<<endl;
    }

    else if (caloperator == '/'){
            if(num2 == 0){
                cout<<"\nDivision by zero is invalid."<<endl;
            }

            else{
                cout<<"\nDivision, "<<num1<<"/"<<num2<<" = "<<num1/num2<<endl ;
            }

    }
    else if (caloperator == '^'){
        cout<<"\nPower, "<<num1<<"^"<<num2<<" = "<<pow(num1,num2)<<endl;
    }


    return 0;
}
