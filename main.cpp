#include <iostream>
#include "Menu.h"
#include<stdlib.h>

using namespace std;



int main(){
     cout<<"------------------------------------------------------------------------------------------------------------------------";
     cout<<endl<<"\t\t\t\t\t Hotel Management Software \t\t\t\t\t"<<endl;
     cout <<"------------------------------------------------------------------------------------------------------------------------";
     cout<<endl<<"\t\t\t\t\t\tWELCOME!\t\t\t\t\t\t\t\t"<<endl;
     cout<<"1-Login \n2-Exit"<<endl;
     Menu menu;
     int iz;
     cin>>iz;
    switch(iz){

    case 1:
    menu.Meni1();
    break;
    case 2:
        cout<<"\t\t\t\t\t+-------------------------------+\t\t\t\t"<<endl;
        cout<<"\t\t\t\t\tAre you sure you want to exit?\n\n\t\t\t\t\t\tYES\t\tN0"<<endl;
        cout<<"\t\t\t\t\t+-------------------------------+\t\t\t\t"<<endl;
        string odg;
        cin>>odg;
        if(odg=="no"){
        cout<<"\n\n\t\t\t\t\t You decided to stay in the program:D\n\n Please log in with one of the options:\n"<<endl;
        menu.Meni1();
        }
        else {exit(0);}


    }

    return 0;
}
