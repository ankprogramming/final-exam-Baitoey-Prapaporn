#include <iostream>
using namespace std;
int main() {
    float a,b,cmd,sum1,sum2,sum3,sum4;
    do{cout<<"Welcome To CLI Calculator V1.00"<<endl;
    cout<<"Number 1 : ";
    cin>>a;
    cout<<"Number 2 : ";
    cin>>b;
        cout<<"Menu\n1.+\n2.-\n3.*\n4./\n5.Quit"<<endl;
        cin>>cmd;
        if(cmd==1){
            sum1=a+b;
            cout<<"Result = "<<sum1<<endl;
        }else if (cmd==2){
            sum2=a-b;
            cout<<"Result = "<<sum2<<endl;
        }else if (cmd==3){
            sum3=a*b;
            cout<<"Result = "<<sum3<<endl;
        }else if (cmd==4){
            sum4=a/b;
            cout<<"Result = "<<sum4<<endl;
        }else{break;}
    }while(1);
        return 0;
}
