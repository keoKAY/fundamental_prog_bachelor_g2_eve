#include<iostream>
using namespace std; 
void printArray(int arr[], int size, string msg ){

    cout<<msg<<endl; 
    for(int i =  0 ; i<size; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 

}
int main(){
    system("clear"); 
    int values[]={10,20,20,30,40,50}; 
    int size = sizeof(values)/sizeof(*values); 
    printArray(values,size,"Array before delete: "); 

    int deleteItem = 20; 
    int index = 0 ; 
    for(int i = 0 ; i<size; i++){
        if(deleteItem != values[i]){
            values[index]= values[i]; 
            index++; 
        }
    }
    size = index; 
    printArray(values,size, "Array after deleted: "); 
    
}