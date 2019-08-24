#include <iostream>
#include <string.h>
using namespace std;

class phone
{
    private:
        int lockcode, flag;
        long a;
        string msg;
        void call();
        void message();
        void type();
    public:
        void lock();

};

void phone::lock()
{
    int lockcode = 1234;
    cout << "Enter the lockcode" << endl;
    cin >>a;
    if(a == lockcode)
    {
        type();
    }
    // else if(a != lockcode){
    //     lock();
    // }
    else{
        lock();
    }

}

void phone::call()
{
    cout << "Enter the number you want to call" << endl;
    cin >> a;
    cout << "The number you want to call is:" << a << endl;
}

void phone::message()
{
    cout << "Enter the message you want to send" << endl;
    cin.ignore();
    getline(cin, msg);
    cout << "Msg: " << msg << endl;
}

void phone::type()
{
   cout<< "Enter 1 to call and 2 to msg" << endl;
   cin>> flag;
   if(flag==1){
       call();
   } 
   else if (flag==2)
   {
       message();
   }
   else{
       cout<<"wrong selection";
   }
}

int main()
{
    phone samsung;
    samsung.lock();
}