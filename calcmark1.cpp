#include<iostream>
using namespace std;

double add(){
    double num1, num2;
    cout<<"Enter 1st number:";
    cin>> num1;
    cout<<"Enter 2nd number:";
    cin>> num2;
    cout<<"Addition of both the numbers is:- ";
    return num1+num2;
}

double sub(){
    double num1, num2;
    cout<<"Enter 1st number:";
    cin>> num1;
    cout<<"Enter 2nd number:";
    cin>> num2;
    cout<<"Subtraction of 1st number by 2nd number is:- ";
    return num1-num2;
}

double multi(){
    double num1, num2;
    cout<<"Enter 1st number:";
    cin>> num1;
    cout<<"Enter 2nd number:";
    cin>> num2;
    cout<<"Multipltication of both the numbers is:- ";
    return num1*num2;}

double divide(){
    double num1, num2;
    cout<<"Enter 1st number (dividend):";
    cin>> num1;
    cout<<"Enter 2nd number (divisor):";
    cin>> num2;
    cout<<"Division of 1st by 2nd number is:- ";
    return num1/num2;}

int main()
{
    cout<< "Following calculations can be executed:-"<<endl;
    cout<< "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5. Exponentiation \n6. Basic Trignometric Function"<<endl;
    
    int serialnum;
    cout<< "Enter the serial number of the required calculation:" ;
    cin>> serialnum;

    if(serialnum == 1){
        cout<< add();
    }
    if(serialnum == 2){
        cout<< sub();
    }
     if(serialnum == 3){
        cout<< multi();
     }
    if(serialnum == 4){
        cout<< divide();
    }
    if(serialnum == 6){
        int s;
        cout<< "following trignometric functions can be executed:-"<<endl;
        cout<< "1. Sin \n2. Cos \n3. Tan \n4. Cot \n5. Sec \n6. Cosec"<<endl;
        cout<< "Enter the serial number of required Trigo function:-";
        cin>> s;

        double theta;
        cout<< "Enter the angle in degrees:-";
        cin>> theta;

        double k = ((theta*3.14)/180);

        
        if(s == 1)
        {
            double sin = (k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k/(120*6*7));
            cout<< "Sin "<<theta<< " = "<<sin ;

        }
        if(s == 2){
            double cos = (1 -k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/(720*7*8));
            cout<<"Cos "<<theta<< " = "<<cos;
        }
        if(s == 3){
            double tan = (k + k*k*k/3 + k*k*k*k*k*2/15 + k*k*k*k*k*k*k*17/315 + k*k*k*k*k*k*k*k*k*62/2835);
            cout<< "Tan " <<theta<< " = "<< tan;
        }
        if(s == 4){
            double tan = (k + k*k*k/3 + k*k*k*k*k*2/15 + k*k*k*k*k*k*k*17/315 + k*k*k*k*k*k*k*k*k*62/2835);
             cout<< "Cot " <<theta<< " = "<< 1/tan;
        }
        if(s == 5){
            double cos = (1 -k*k/2 + k*k*k*k/24 - k*k*k*k*k*k/720 + k*k*k*k*k*k*k*k/(720*7*8));
            cout<<"Sec "<<theta<< " = "<< 1/cos;}
        if(s == 6)
        {
            double sin = (k - k*k*k/6 + k*k*k*k*k/120 - k*k*k*k*k*k*k/(120*6*7));
            cout<< "Cosec "<<theta<< " = "<<1/sin ;}
        
    } 
    return 0;


}
