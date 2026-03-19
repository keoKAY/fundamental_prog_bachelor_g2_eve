#include<iostream>
using namespace std; 

void printArray(int arr[], int size){
    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}

int main(){
    system("clear"); 
// initialize
    int values[5]={10,20,30,40,50}; 
    int scores[]={44,55,10,60,70,80,100,45}; 
    int numbers[5]={11,22,33,44,55}; 

    // count total elements 
    int size = sizeof(scores)/sizeof(scores[0]); 
    cout<<"Size of array is : "<<size<<endl; 

    // loop , iterate
    printArray(scores,size);  
    printArray(values,5);  
    printArray(numbers,5); 
    return 0 ; 
}