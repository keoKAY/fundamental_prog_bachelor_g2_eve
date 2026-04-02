#include<iostream>
using namespace std; 
class Login{
    public: 
        virtual void login(){
            cout<<"Login with username and password ✅"
                <<endl; 
        }

}; 
class LoginWithFacebook: public Login{
    public: 
     void login() override{

            // function definition or body 
            cout<<"Login with facebook! ✅"<<endl; 
        }
}; 
class LoginWithGoogle: public Login{
    public: 
        void login(){
            cout<<"Login with google ✅"
                <<endl; 
        }
};
int main(){
    system("clear");    
    // allocation
    Login* loginService = new LoginWithFacebook(); 
    loginService->login(); 

    // clear = deallocation
    delete loginService; 
    return 0 ; 
}