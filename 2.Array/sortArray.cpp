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
    int values[]={23,10,5,6,100,56}; 
    int size = sizeof(values) / sizeof(*values); 
    printArray(values,size,"+ Array before sort: "); 

    // Bubble Sort 
    for(int i = 0 ; i<size; i++){
        for(int j=0; j<size -i-1 ; j++){
            if(values[j] > values[j+1]){
                swap(values[j],values[j+1]);
            }
        }
    }
    printArray(values,size,"+ Array after sort : ");
}
