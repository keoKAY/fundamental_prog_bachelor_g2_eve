#include<iostream>
using namespace std; 
void printArray(int values[], int size ){
    cout<<"All Values are : " <<endl; 
    for(int i = 0 ; i<5; i++){
        cout<<values[i]<<" "; 
    }
    cout<<endl; 
}
int main(){
    system("clear"); 

    int values[5]={10,20,30,40,50}; 
    int scores[5]={11,22,33,44,55}; 
    // iterate 
    printArray(scores, 5); 
    printArray(values, 5); 

    // Update  
    int item = 40;  
    bool isFound = false; 
    cout<<"Searching item is : "<<item<<endl; 
    for(int i = 0 ; i<5; i++){
        if(item == values[i]){

            cout<<" ✅ Result found at index = "<<i<<endl; 
            cout<<"Enter New Value: "; 
            cin>>values[i]; 
            cout<<"Update successfully ! "<<endl; 
            isFound = true; 
        }
    }
    if(isFound==false){
        cout<<" ❌ Item = "<<item <<" not found! "<<endl; 
    }
    
    printArray(values, 5); 
    return 0; 
}