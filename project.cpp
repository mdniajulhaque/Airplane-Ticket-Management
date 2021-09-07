#include<iostream>
//#include<bits/stdc++.h>
#include<iomanip>
#include<conio.h>
#include<string>
#include<windows.h>

using namespace std;
class mytime
{
protected:
    int choose;
public:
    void getdata()
    {
           int pres;
       g: cout<<"\n\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE"<<endl<<endl;
       cout<<"(1)for LONDON"<<endl;
       cout<<"(2)for USA"<<endl;
       cout<<"(3)for PARIS"<<endl;
       cin>>pres;
       if(pres==1||pres==2||pres==3){
        switch(pres)
        {
        case 1:
            if (pres==1)
                cout<<setw(40)<<"\n\n\n                                Destination is London"<<endl;
            break;
        case 2:
            if(pres==2)
                cout<<setw(40)<<"\n\n\n                                Destination is Usa"<<endl;
            break;
        case 3:
            if(pres==3)
                cout<<setw(40)<<"\n\n\n                                Destination is Paris"<<endl;
            break;

        }}
        else
           {

            cout<<setw(60)<<"You Choose Wrong Key word"<<endl<<setw(60)<<"Pleace Choose your Destination Again"<<endl;
        goto g;}
        cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
        cout<<"PRESS 1 FOR 11 AM"<<endl;
        cout<<"PRESS 2 FOR 10 AM"<<endl;
        cout<<"PRESS 3 FOR 9 AM"<<endl;
        cin>>choose;
    }
      void show()
    {
        if(choose==1)
        {
            cout<<"|                                                                         "<<endl;
            cout<<"|flight mytime 11 AM                                                        "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
        }
        if(choose==2)
        {
            cout<<"|                                                                         "<<endl;
            cout<<"|flight mytime 10 AM                                                        "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
        }
        if(choose==3)
        {
            cout<<"|                                                                         "<<endl;
            cout<<"|flight mytime 9 AM                                                        "<<endl;
            cout<<"|_________________________________________________________________________"<<endl;
            cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
        }
    }
};
class passenger
{
public:
    virtual void getdata()
    {
    }
    virtual void show()
    {
    }
};

class hotel{
public:
    int hot,sel,day,total;
    string hotelname;


void getdat (){
cout<<setw(60)<<"Please Choose Hotel Categoy"<<endl<<endl;
cout<<setw(60)<<"*************************************"<<endl;
            cout<<setw(60)<<"*     Press 1 for Five Star Hotel    *"<<endl;
            cout<<setw(60)<<"*     Press 2 for General Hotel     *"<<endl;
            cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
cin >>hot;

if(hot==1){
 cout<<setw(30)<<"This List of Five star Hotels You able to Book From our Airlines"<<endl<<setw(20)<<"Please Choose Your Favorite One"<<endl;
 cout<<"Press 1 For Emirates Five Star Hotel"<<endl<<endl<< "Press 2 For Qatar Five Star Hotel"<<endl<<endl<<"Press 3 For Hotel Arts Barcelona "<<endl;
 cin>>sel;

 if(sel==1){

cout<<setw(20)<<"Thank you For Choose Emirates Five Star Hotel"<<endl<<setw(20)<<"You Have to Pay 300$ USD Per Day to Stay This Hotel"<<endl;
cout<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<"You Want to stay This Hotel";
 cout<< day;
 cout<<"  Day"<<"your Total Bill is :";
 total=day*300;
 cout<<total<<"$";
 hotelname="Emirates Five Star Hotel";


 }
 else if(sel==2){
   cout<<setw(20)<<"Thank you For Choose Qatar Five Star Hotel"<<endl<<setw(20)<<"You Have to Pay 350$ USD Per Day to Stay This Hotel"<<endl<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<endl<<"You Want to stay This Hotel"<< day<<"  Day"<<endl<<"your Total Bill is :";
 total=day*350;
 cout<<total<<"$";
 hotelname="Qatar Star Hotel";

    }

    else if(sel==3){
   cout<<setw(20)<<"Thank you For Choose Hotel Arts Barcelona"<<endl<<setw(20)<<"You Have to Pay 250$ USD Per Day to Stay This Hotel"<<endl<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<endl<<"You Want to stay This Hotel"<< day<<"  Day"<<endl<<"your Total Hotel Bill is :";
 total=day*250;
 cout<<total<<"$"<<endl;
 hotelname="Hotel Arts Barcelona";

    }
}

else if(hot==2){
        cout<<setw(30)<<"This List of General Hotels You able to Book From our Airlines"<<endl<<setw(20)<<"Please Choose Your Favorite One"<<endl;
 cout<<"Press 1 For Belmond Copacabana Palace Hotel"<<endl<<endl<< "Press 2 For Claridges  Hotel"<<endl<<endl<<"Press 3 For Hotel Arts Barcelona "<<endl;
 cin>>sel;

 if(sel==1){

cout<<setw(20)<<"Thank you For Choose Belmond Copacabana Palace"<<endl<<setw(20)<<"You Have to Pay 200$ USD Per Day to Stay This Hotel"<<endl<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<endl<<"You Want to stay This Hotel"<< day<<"  Day"<<endl<<"your Total Bill is :";
 total=day*200;
 cout<<total<<"$";
 hotelname="Belmond Copacabana Palace";}
 else if(sel==2){
   cout<<setw(20)<<"Thank you For Choose Claridges Hotel"<<endl<<setw(20)<<"You Have to Pay 150$ USD Per Day to Stay This Hotel"<<endl<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<endl<<"You Want to stay This Hotel"<< day<<"  Day"<<endl<<"your Total Bill is :";
 total=day*150;
 cout<<total<<"$";
 hotelname="Claridges Hotel";
    }

    else if(sel==3){
   cout<<setw(20)<<"Thank you For Choose Hotel Arts Barcelona"<<endl<<setw(20)<<"You Have to Pay 250$ USD Per Day to Stay This Hotel"<<endl<<setw(20)<<"How many day you Like to stay on this Hotel"<<endl;
 cin>>day;
 cout<<endl<<"You Want to stay This Hotel"<< day<<"  Day"<<endl<<"your Total Bill is :";
 total=day*250;
 cout<<total<<"$";
 hotelname="Hotel Arts Barcelona";
    }

}// m else*/




}
void sho(){
cout<<endl<<setw(60)<<"YOUR BOOKED HOTEL NAME IS :"<<hotelname<<endl;
cout<<setw(60)<<"HOTEL BILL IS :"<<total<<"$"<<endl;



}

};


class booking:public mytime,public passenger
{
protected:
    int num;
    float fcal;
    char ch;
    char firstname[60];
    char lastname[60];
    char address[60];
    char c_loc[30];
    char dest[30];
    char reservation_no[60];
    int option;
public:
    void getdata()
    {
        mytime::getdata();
        cout<<setw(40)<<"\n\n        ::Please enter the required information for passenger number::"<<endl;
        cout<<"\n\n\nEnter the firstname of passenger: ";
        cin>>firstname;
        cout<<"Enter the last name of passenger: ";
        cin>>lastname;
        cout<<endl<<endl;
        cout<<"Enter address of passenger:  ";
        cin>>address;
        cout<<endl<<endl;
        cout<<"Enter the Resevation No. of Ticket"<<endl;
        cin>>reservation_no;
        cout<<endl;
        cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY):  ";
        cin>>c_loc;
        cout<<endl<<endl;

        cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY):  ";

       cin>>dest;
        cout<<endl<<endl;
        system("CLS");
    }

    void show()
    {
        mytime::show();
        cout<<setw(40)<<"Your E-Ticket is :"<<endl;
        int t=1;
        int r=12345;
        cout<<"                           AIRLINE TICKET                                 "<<endl;
        cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
        cout<<"|__________________________________________________________________________"<<endl;
        cout<<"|Passenger Information :                                                  "<<endl;
        cout<<"|First Name :"<<firstname<<"                                     "<<endl;
        cout<<"|Last Name :"<<lastname<<"                                     "<<endl;
        cout<<"|                                                                         "<<endl;
        cout<<"|Address :"<<address<<"                                                   "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|flight Information :                                                     "<<endl;
        cout<<"|12 DEC 2017                                                              "<<endl;
        cout<<"|BOING 747                                                                "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;
        cout<<"|Depart :"<<c_loc<<"                                                      "<<endl;
        cout<<"|Arrive :"<<dest<<"                                                       "<<endl;
        cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
        cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
        cout<<"|_________________________________________________________________________"<<endl;

    }


};
class international:public booking,public hotel

{

public:
     int cal,snum;

    int b1_seat=30;

    int e1_seat=30;

    int choice;

    int c;

    int b;

    int v;

    char g;
char j;


float fc,sum;

    void getdata()

    {
        booking::getdata();
       // booking::calculate();

        b=0;

        v=0;

        cout<<"In which AIRLINE you want to travel"<<endl<<endl;
        cout<<"1)PIA"<<endl;
        cout<<"2)AIR BLUE"<<endl;
        cout<<"3)ARAB EMIRATES"<<endl;
        cout<<"4)QATAR AIRWAYS"<<endl;
        cout<<"enter your choice"<<endl;;
        cin>>option;

        system ("cls");

        switch(option)
        {
        case 1:
            if (option==1)
                cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
            break;
        case 2:
            if(option==2)
                cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
            break;
        case 3:
            if(option==3)
                cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
            break;
        case 4:
            if(option==4)
                cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
            break;
        }
            cout<<"In which class you want to travel?"<<endl;


            cout<<"Make your choice"<<endl<<endl;


            cout<<"\n\n\n\n\n\n";



        cout<<"____Enter which type of seat you want to reserve____"<<endl<<endl;
        cout<<"                       There are Two kind of Class"<<endl<<endl;

        cout<<"----------if u entered 1 then u will find these kind of facilities------------"<<endl<<endl;
        cout<<"          1. Full flat-bed seats are the general standard for business class        "<<endl;
        cout<<"         2. From pre-flight drinks (in real glasses, obvs.), to meals served on real china with proper knives and forks,you’re spoiled rotten."<<endl;
        cout<<"         3. everything is good"<<endl;
        cout<<"         For Business class Seat You Have to pay 25000 Tk for per seat"<<endl;


        cout<<"----------if u entered 2 then u will find these kind of facilities------------"<<endl<<endl;
        cout<<"       1.aside from privacy, and seat size (bear in mind that many first class flights don’t so much have seats, as individual suites), there’s not that much they can do to make first stand out markedly from business."<<endl;
        cout<<"        2.  The standard of food leaps up a notch up too, with many menus and dishes created by Michelin starred chefs."<<endl;
        cout<<"        3.There, you can choose between three different first class suites, the most indulgent being The Residence – a three-room suite, comprised of a living room, bedroom (with double bed), and private bathroom (with shower, of course)."<<endl;
         cout<<"         For Business class Seat You Have to pay 18000 Tk for per seat"<<endl;
        cout<<endl;

p:

           cout<<setw(60)<<"*************************************"<<endl;
            cout<<setw(60)<<"*     Press 1 for buisness class    *"<<endl;
            cout<<setw(60)<<"*     Press 2 for economy class     *"<<endl;
            cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;


            cout<<"Enter your choice"<<endl;

            cin>>choice;
            if(choice==1||choice==2){

           cout<<"Enter Your Number of seat"<<endl;
    cin>>snum;
      if(choice==1)
       {
           fc=snum*2500;
           cout<<"Your Total Bill is ="<<fc;
       }
       else if(choice==2)
       {
           fc=snum*1800;
           cout<<"Your Total Bill is ="<<fc<<"$";
       }
            }
else{cout<<setw(60)<<"You choose wrong key word"<<endl;
goto p;
}
cout<<endl;
 system("CLS");
cout<<setw(60)<<"Do You Want to Book Hotel Room "<<endl<<"Enter Your Choose (Y/N) :";
cin>>j;
if(j=='y'||j=='Y'){
hotel::getdat();

hotel::sho();}
else if(j=='n'||j=='N')
{
    cout<<"Thank You";
}
cout<<endl;


            booking::show();
            cout<<"Total Ticket Prize ="<<fc<<"$"<<endl;

            if(choice==1)

            {

                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|BUISNESS CLASS                                                           "<<endl;

            }

            if(choice==2)

            {

                cout<<"|                                                                         "<<endl;
                cout<<"|Ticket Information:                                                      "<<endl;
                cout<<"|ECONOMY CLASS                                                           "<<endl;

            }

            cout<<"|Status: confirmed                                                        "<<endl;

        if(choice>3)

        {
            cout<<"__________________________________________________________________________"<<endl;
            cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
            cout<<"__________________________________________________________________________"<<endl;


    }
    }
};
class main1

{
private:

    char f;

    int menu_choice;

    char a;

public:


    void getdata()
    {
m:
        cout<<"\n\n\n\n\n\n";
        cout<<setw(60)<<"*************************************"<<endl;
        Sleep(500);
        cout<<setw(60)<<"*        AIRWAYS RESERVATION        *"<<endl;
         Sleep(500);
        cout<<setw(60)<<"*             MAIN MENU             *"<<endl;
         Sleep(500);
        cout<<setw(60)<<"*        ENTER YOUR CHOICE          *"<<endl;
         Sleep(500);
        cout<<setw(60)<<"* PRESS 1 FOR INTERNATIONAL BOOKING *"<<endl;
         Sleep(500);
        cout<<setw(60)<<"*       NOW ENTER YOUR CHOICE:      *"<<endl;
         Sleep(500);
        cout<<setw(60)<<"*************************************"<<endl;
         Sleep(500);


        cin>>menu_choice;

        system("cls");

        passenger* p1;

        international i1;
        booking bb;

       char back;

if(menu_choice==1){
        switch(menu_choice)

        {
        case 1:


            p1=&i1;

            p1->getdata();

            cout<<"To Go To Main Menu Press b"<<endl;

            cin>>back;


            system("CLS");

            if (back=='b')

            {

                goto m;

            }

            else

            {

                cout<<"\n\n\n\n\n\n";

                cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";

            }

            break;

        }}
        else
            {cout<<setw(60)<<"You Choose Wrong Key"<<endl<<

"please  Again Choose your option";
        goto m;}
    }
};
int main()
{

    system("color 3f");
    cout<<"\n\n\n\n\n\n\n\n\n\n     WELCOME TO AIRWAYS RESERVATION SYSTEM";
    //4Sleep(2500);
    cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
    Sleep(500);
    cout<<"  Sadbin Shakil";
   // Sleep(500);
    cout<<"\n\n\n\t\t             Naeem hasan           ";
    cout<<"\n\n\n\t\t             Niajul Haque          ";
    //Sleep(2500);
   main1 m1;
m1.getdata();
return 0;
}
