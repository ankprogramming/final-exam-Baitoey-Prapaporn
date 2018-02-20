#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;


    do {
        cout<<"MENU"<<endl;
        cout<<"1.Add Student."<<endl;
        cout<<"2.List Student."<<endl;
        cout<<"3.Student."<<endl;
        cout<<"4.Sarch List Student."<<endl;
        cout<<"5.Quit."<<endl;
        cout<<"Please Enter Menu"<<endl;
        cin>>cmd;
          if (cmd == 1){
            cout <<"Enter Student Name : ";
            cin>>name;
            writefile.open("std.txt",fstream::app);
            if (writefile.is_open()){
                writefile<<name<<endl;
                writefile.close();
            }else {
                    cout<<"Unable to open file";
            }
        }else if (cmd==2){
                    readfile.open("std.txt");
                    if (readfile.is_open()){
                        while(getline(readfile,line)){
                            cout<<line<<endl;
                        }
                        readfile.close();
                    }
        }else if(cmd==3){
                    cout<<"Enter Name : ";
                    cin>>name;
                    readfile.open("std.txt");
                    if(readfile.is_open()){
                    (name="&name&",name);
                      while(getline(readfile,line)){
                            cout<<name<<endl;
                        }
        }
        }
        else if (cmd==4){
                    cout<<"Enter Name : ";
                    cin>>name;
                    readfile.open("std.txt");
                    if(readfile.is_open()){
                    (name="&name&",name);
                      while(getline(readfile,line)){
                            cout<<name<<endl;
                        }
        }
        }else{break;}
    }while(1);
       return 0;
    }

