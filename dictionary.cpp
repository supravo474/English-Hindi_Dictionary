#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std;  


int main()  
{  
   map<string, string> Fruits;  
  
   Fruits["Guava"] = "Aamrut";
   Fruits["Strawberry"] = "Jharaber"; 
   Fruits["Orange"] = "Santra"; 
   Fruits["Banana"] = "Kela"; 
   Fruits["Apple"] = "Seb"; 
   Fruits["Grapes"] = "Angoor"; 
   Fruits["BlueBerry"] = "Blooberee";
   Fruits["Coconut"] = "Naariyal";
   Fruits["Lemon"] = "Neemboo";
   Fruits["Lime"] = "Chakotara";
   Fruits["Grapefruit"] = "Chakotara";
   Fruits["Pomelo"] = "Chakotara";
   Fruits["Melon"] = "Kharbooj";
   Fruits["Date"] = "Khajoor";
   Fruits["Cherry"] = "Cheree";
   Fruits["Pears"] = "Naashapaatee";
   Fruits["Papaya"] = "Papita";
   Fruits["Watermelon"] = "Tarabooj";
   Fruits["Lychee"] = "Leechee";
   Fruits["Peach"] = "Aadoo";
   Fruits["Pineapple"] = "Anaanaas";
   Fruits["Pomegranate"] = "Anaar";
   Fruits["Fig"] = "Anjeer";
   Fruits["Gooseberry"] = "Amla";
   Fruits["Cranberry"] = "Krainaberee";
   Fruits["Kiwi"] = "Keevee";
   Fruits["Dragonfruit"] = "Draigan phal";

    int b;
    string d;
    cout<<"Welcome to Fruit Dictionary"<<endl;

    labe:
    cout<<""<<endl;
    cout<<"What do you want to do"<<endl;
    cout<<""<<endl;
    cout<<"Enter 1 for searching Hindi Fruits Name"<<endl;
    cout<<"Enter 2 for showing all the data"<<endl;
    cin>>b;
    switch(b){
        case 1:
            
            cout<<"Enter the Fruit name in Engish(Avoid Spaces)"<<endl;
            cin>>d;

            cout<<d<<" in Hindi is "<<Fruits[d]<<endl;
            goto labe;
            break;

        case 2: 
            cout << "Elements Amount: " << Fruits.size() << endl;  
            cout << endl << "Data available to us:" << endl;  
                for( map<string,string>::iterator ii=Fruits.begin(); ii!=Fruits.end(); ++ii)  
                {  
                    cout << (*ii).first << ": " << (*ii).second << endl;  
                }
                goto labe;  
                break;

        default:
            cout<<"You Chose wrong option!"<<endl;
            goto labe;
    }
    return 0;
}