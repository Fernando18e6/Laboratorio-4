#include <iostream>
using namespace std;
int main(){
//Definir edad
 int age=0;
//Pedir la edad
 cout<<"welcome to the park";
 cout<<"\nEnter your age to assign your price: ";
 cin>>age;

 //Asignar el cobro basado en la edad
 if (age <= 5){
    cout<<age<<"Your payment is 0";
 }
 else if (age >= 5 and age <= 12){
    cout<<age<<"Your price to pay 5 Dollars";
 }
else if(age > 12){
 cout<<age<<"Your price to pay 10 Dollars";
}
else{
    cout<<"Put a valid format";
}
return 0; 
}
