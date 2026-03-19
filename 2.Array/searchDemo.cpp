#include<iostream>
using namespace std; 
int main(){
    system("clear"); 
    int values[]={10,209,40,50,60,70}; 
    int size = sizeof(values)/sizeof(values[0]); 
    int item = 600; 
    bool isFound = false; 
    for(int i = 0 ; i<size; i++){
        if(item==values[i]){
            cout<<"Record found at index = "<<i<<endl; 
            cout<<"Value is : "<<values[i]<<endl; 
            isFound = true; 
        }
    }
    if(isFound==false){
        cout<<"Item = "<<item<<" not found!! "<<endl; 
    }
    return 0 ; 
}