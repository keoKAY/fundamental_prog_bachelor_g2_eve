#include<iostream>
using namespace std; 
int main(){
    system("clear");
    int numberOfCar; 

    cout<<"Enter number of car: ";
    cin>>numberOfCar; 

    cout<<"You buy : "<<numberOfCar
        <<((numberOfCar>=2)?"  cars":" car")<<endl;
//    cout<<"You buy : "<<numberOfCar; 
//     if(numberOfCar>=2){
//      cout<<" cars"<<endl; 
//     }else{
//      cout<<" car"<<endl;   
//     }
    return 0 ; 
}