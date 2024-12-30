#include<iostream>
using namespace std;
int main(){
    int n;
    double a,b,suma,resta,mul,division;
    cout<<" [1] suma\n";
    cout<<" [2] resta\n";
    cout<<" [3] multiplicasion\n";
    cout<<" [4] division\n";
    cin>>n;
    switch(n){
        case 1:{
            cout<<"ingrese los valores de A y B en ese orden\n";cin>>a>>b;
            suma=a+b;
            cout<<"la suma es: "<<suma;
            break;
        }
        case 2: {
            cout<<"ingrese los valores de A y B en ese orden\n";cin>>a>>b;
            resta=a-b;
            cout<<"la suma es: "<<resta;
            break;
            }
        case 3:{
            cout<<"ingrese los valores de A y B en ese orden\n";cin>>a>>b;
            mul=a*b;
            cout<<"la multiplicasion es: "<<mul;
            break;
            }
        case 4:{
            cout<<"ingrese los valores de A y B en ese orden\n";cin>>a>>b;
           if(b!=0){
             division=a/b;
            cout<<"la division es: "<<division;
           }else{
            cout<<"error\n";
           }
            break;
            }
        default:{
            cout<<"error";
            break;
         }
    }
    return 0;
}