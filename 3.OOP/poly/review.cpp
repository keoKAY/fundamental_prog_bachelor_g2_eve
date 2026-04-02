#include<iostream>
using namespace std; 

// boilerplate 
class AuthService{
    public: 
        virtual void login()=0; 
        virtual void signup()=0; 
}; 

class GoogleAuth: public AuthService{
    public: 
        void login() override{
            cout<<"Login with google "<<endl; 
        }
        void signup() override{
            cout<<"Signup with google"<<endl; 
        }
}; 
class FacebookAuth: public AuthService{
    public: 
        void login() override{
            cout<<"Login with Facebook "<<endl; 
        }
        void signup() override{
            cout<<"Signup with Facebook"<<endl; 
        }
}; 

void handleProcess(AuthService* auth){
    // 1. login 
    auth->login(); 
    // access resource
    cout<<" ✅ Successfully download the resource"<<endl;  
}
int main(){
    // Loosely couple vs tightly couple 
    // Pluggable 
    system("clear"); 
    handleProcess(new FacebookAuth()); 
    handleProcess(new GoogleAuth()); 
    return 0; 
}