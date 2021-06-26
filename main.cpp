#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class RegisterAndLogin
{
   private:
       string name;
       string User_Name; // This is the user name which is provided by the user to register
       string User_Password; // This is the password which is provided by the user to register
       string temp_name, temp_User_Name, temp_User_Password; // These are the temp variables which I will use in later functions
    public:
       void registeration() //This function will ask for the details required for registering
       {
           cout<<"Enter your full name: "<<endl;
           cin>>name;
           cout<<"Enter the New User Name:"<<endl;
           cin>>User_Name;
           cout<<"Enter the New password:"<<endl;
           cin>>User_Password;
           
           ofstream regMaker(name + ".txt");
           regMaker << name << endl;
           regMaker << User_Name << endl;
           regMaker << User_Password << endl;
           regMaker.close();
           cout<<"Registration Successful!"<<endl;
       }

       inline bool exist(const string& name)
       {
          ifstream file(name);
          if(!file) // If the file was not found, then file is 0, i.e. !file=1 or true.
          {
              cout<<"The user does not exist please register"<<endl;
              registeration();
              return false;
          }                   
          else // If the file was found, then file is non-0.
          {
              cout<<"The user exists"<<endl;
              return true;
          }                  
        }
       void Login()
       {
           cout<<"Enter your Name: "<<endl;
           cin>>name;
           cout<<"Enter your User Name: "<<endl;
           cin>>User_Name;
           cout<<"Enter your Password: "<<endl;
           cin>>User_Password;
           string Full_Name, user_n, user_p;
           ifstream LoginCheck(name + ".txt");
           string full_name_of_file = name + ".txt";
           exist(full_name_of_file);
           getline(LoginCheck, Full_Name);
           getline(LoginCheck, user_n);
           getline(LoginCheck, user_p);
           if (name != Full_Name)
           {
               cout<<"Check the name"<<endl;
           }
           else if(User_Name != user_n)
           {
               cout<<"Check the user name"<<endl;
           }
           else if(User_Password != user_p)
           {
               cout<<"Check the password"<<endl;
           }
           else if(name == Full_Name && User_Name == user_n && User_Password == user_p)
           {
               cout<<"Login Successful!"<<endl;
           }

           LoginCheck.close();
       }

       void Remove_user()
       {
            int confirmation;
            cout<<"1. Delete my Account"<<endl;
            cout<<"2. Don't Delete my Account"<<endl;
            cout<<"Enter 1 to Delete your Account"<<endl;
            cout<<"Enter 2 to skip deleting the account"<<endl;
            cin>>confirmation;
            if(confirmation == 1)
            {
                cout<<"Enter your Name: "<<endl;
                cin>>name;
                cout<<"Enter your User Name: "<<endl;
                cin>>User_Name;
                cout<<"Enter your Password: "<<endl;
                cin>>User_Password;
                string full_name_of_the_file = name + ".txt";
                exist(full_name_of_the_file);
            }
            else if(confirmation == 2)
            {
                User_Choice();
            }
       }
};

void User_Choice(RegisterAndLogin obj)
{
    int Ans;
    cout<<"1. Login"<<endl;
    cout<<"2. Register"<<endl;
    cout<<"3. Remove"<<endl;
    cout<<"Enter 1 to Login or Enter 2 to Register or Enter 3 to Remove your Account"<<endl;
    cin>>Ans;
    if(Ans == 1)
    {
       obj.Login();
    }
    else if(Ans == 2)
    {
       obj.registeration();
       string check;
           cout<<"Do you want to restart the program. Format: Yes | No"<<endl;
           cin>>check;
           if(check == "Yes")
           {
              User_Choice(obj);
           }
           else if(check == "No")
           {
               cout<<"Ok exiting the program"<<endl;
           }
    }
           else if(Ans == 3)
           {
               obj.Remove_user();
           }
           else 
           {
               cout<<"Enter the correct number"<<endl;
               User_Choice(obj);
           }
}

int main(){
    RegisterAndLogin regAndLog_obj;
    User_Choice(regAndLog_obj);
    return 0;
}