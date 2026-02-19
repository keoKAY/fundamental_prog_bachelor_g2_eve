#include<iostream>
using namespace std; 
// 1. no return value , no parameters 

// 2. no return value, with parameters 
void greeting(string subject ){
    cout<<"========================="<<endl; 
    cout<<"Welcome to "<<subject<<" Programming Class!"<<endl; 
    cout<<"============================"<<endl; 
    
}

// 3. function that has return value, with no params
float usdToKhr(){
    float amount ; 
    cout<<"Enter your amount in USD : ";
    cin>>amount; 
    float result = amount * 4000; 
    return result; 
}

// if bool == true , we exchange from usd -> khr 
// else , we exchange from khr -> usd 
float exchangeMoney(float amount , bool isUsdToKhr ){
    if(isUsdToKhr==true)
        return amount * 4000;
    else 
        return amount / 4000;  
}
int main(){
  
    system("clear"); 
    // value pass to the function is called argument 
    greeting("C++"); 
    greeting("Java"); 
    greeting("Python"); 


    int rields = 50000; 
    cout<<"USD = "<<exchangeMoney(rields,false)<<"usd"<<endl; 

    float usd = 7.5; 
    cout<<"Riels = "<<exchangeMoney(usd, true )
        <<"riels"<<endl; 
    return 0; 
}