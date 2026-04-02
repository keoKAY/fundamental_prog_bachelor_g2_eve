#include<iostream>
using namespace std; 
// interface 
class Auth{
    public: 
        virtual void login()=0; 
        virtual void logout()=0; 
        
}; 
class FacebookAuth : public Auth{
    public: 
        void login() override {
            cout<<"Login with facebook ✅"<<endl;
        }
        void logout() override{
            cout<<"Logout from facebook ✅"<<endl; 
        }
}; 


class GoogleAuth: public Auth{
    public: 
        void login() override {
            cout<<"Login with Google "
                <<endl; 
        }
        void logout() override {
            cout<<"Logout from Google "
            <<endl; 
        }
};  
int main(){
    system("clear"); 
    Auth* authService = new FacebookAuth(); 
    authService->login(); 

    // Loosely Coupling , Tightly coupling 
    authService = new GoogleAuth(); 
    authService->login();  

    delete authService; 
    return 0 ; 
}