#include <iostream>
#include <fstream> //for file handling
#include <string.h>
using namespace std;

//declare functions
void login(string end1);
void sign_up(string end1);
void forget();

int main ()
{
    int choice;
    string end1="\t\t________________________________________________________\n\n";
    cout<<"\t\t\n                                          JOIN US NOW!! <3                    \n\n";
    cout<<"\t      Choose from the following :         ";
    cout<<"\n\n\t\t      Choose 1 to Login          "<<end1;
    cout<<"\n\n\t\t      Choose 2 to Sign Up        "<<end1;
    cout<<"\n\n\t\t      Choose 3 to Forgot Password"<<end1;

    cin>>choice;
    
    switch(choice){
        
        case 1:
            login(end1);
            break;
        case 2:
            sign_up(end1);
            break;
        case 3:
            forget();
            break;
        case 4:
            cout<<"\t\t THANK YOU ALL DONE \n\n";
            break;
            default:
                cout<<"\t\t Please select a valid option between 1-3 \n\n";
                main();
    }

}

//functions
void login(string end1){
    int count;
    string user_id,password;
    cout<<"\n\t Please enter your username and password"<<end1;
    cout<<"\n\t\t USERNAME : ";
    cin>>user_id;
    cout<<"\n\t PASSWORD : ";
    cin>>password;
    ifstream input("data.txt");
    
    string id,pass1;
    while(input>>id>>pass1){
        if(id==user_id && pass1==password){
            count=1;
        }
    }
    input.close(); //close the file after saving the data
    if(count==1){
        cout<<user_id<<"\n Succesful login";
        main();
    }
    else{
        cout<<"\n Error login. Please try again later or create an account.";
        main();
    }
        
}
void sign_up(string end1){
    string reg_userid, reg_password;
    cout<<"\n\t USERNAME : ";
    cin>>reg_userid;
    cout<<"\n\t PASSWORD : ";
    cin>>reg_password;
    
    ofstream f1("data.txt", ios::app); //ios::app add data to existing file without overwriting it
    f1 << reg_userid << " " << reg_password << endl; // Add a space between username and password for proper reading
    f1.close(); // Always good practice to close the file after writing to it
    cout<<"\n\t Thank you. Registration successful.\n";
    main();
}

void forget(){
    int choose;
    cout<<"\n\t Press 1 to search username ";
    cout<<"\n\t Press 2 to return ";
    cout<<"\n\n\t Enter here : ";
    cin>>choose;
    
    switch(choose){
        case 1:{
            int count = 0;
            string id2,pass2,id3;
            cout<<"\n\t Enter your previous username here : ";
            cin>>id2;
            
            // check if username exsits in the file
            ifstream f2("data.txt");
            while(f2>>id3>>pass2){
                if(id3==id2){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\t Please memorize your password this time. Your password is : "<<pass2;
            }
            else{
                cout<<"\n\t Account not found. Try again later.";
            }
            break;
        }
            
        case 2 :
            main();
            break;
        default :
            cout<<"\n\t Invalid entry. Please try again.\n";
            forget();
    }
    
}

