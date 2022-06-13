#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i;
    char ans;
    
    start:
    cout<<"welcome to 2-digits calculator"<<endl;
    cout<<"what type of calculation you wanna perform?"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    cin>>a;

    if(a==1){
        cout<<"enter two digits whom you wanna add"<<endl;
        cin>>b>>c;
        cout<<b+c<<"\n";
        cout<<"do you want to do more calculations? (Y/N)"<<endl;
        cin>>ans;

        if(ans=='Y' || ans=='y')
        {
            goto start;
        }
        
 
    }

    else if(a==2){
        cout<<"enter two digits whom you wanna subtract"<<endl;
        cin>>d>>e;
        cout<<d-e<<"\n";
        cout<<"do you want to do more calculations? (Y/N)"<<endl;
        cin>>ans;

        if(ans=='Y' || ans=='y')
        {
            goto start;
        }
    }

    else if(a==3){
        cout<<"enter two digits whom you wanna multiply"<<endl;
        cin>>f>>g;
        cout<<f*g<<"\n";
        cout<<"do you want to do more calculations? (Y/N)"<<endl;
        cin>>ans;

        if(ans=='Y' || ans=='y')
        {
            goto start;
        }
    }

    else if(a==4){
        cout<<"enter two digits whom you wanna divide"<<endl;
        cin>>h>>i;
        cout<<h/i<<"\n";
        cout<<"do you want to do more calculations? (Y/N)"<<endl;
        cin>>ans;

        if(ans=='Y' || ans=='y')
        {
            goto start;
        }
    }

    else{
        cout<<"you choose wrong operator"<<endl;
        cout<<"do you want to do more calculations? (Y/N)"<<endl;
        cin>>ans;
        if(ans=='Y' || ans=='y')

        {
            goto start;
        }
    }

    return 0;
}