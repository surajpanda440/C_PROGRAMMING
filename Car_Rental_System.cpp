#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 
using namespace std;
class customer 
{
	private:
	public:
	string customername;
	string customername2;
	string age;
	string adhno;
	string lincno;
    string carmodel;
    int  carnumber;
    string date;
    string month;
    int year=2022;
    int amount;
    string phone;
    char data;
};
class rent : public customer 
{
	public:
	int days, rentalfee,due;
	
	void data()
	{
	int login();
	login();
	cout<<"\n\n\n\n\t\t\t\t\t         CAR RENTAL SYSTEM \n\n";
    cout<<"\t\t\t\t\t-----------------------------------------\n\n";
    cout<< "\t\t\t\t\t[KINDLY FILL UP YOUR PERSONAL INFORMATION] \n\n";
	cout << "\t\t\t\t\tPlease Enter your first Name :- "; 
    cin >> customername;
    cout << "\t\t\t\t\tPlease Enter your last Name :- ";
    cin >> customername2;
    cout<< "\t\t\t\t\tEnter your age --> ";
    cin>>age;
    cout<< "\t\t\t\t\tEnter your adharcard no. --> ";
    cin>>adhno;
    cout<< "\t\t\t\t\tenter your driving licence no.=  ";
    cin>>lincno;
    cout<< "\t\t\t\t\tEnter your phone number := ";
    cin>>phone;
    cout<< "\n\t\t\t\t\t[[ YOUR INFORMATION HAS BEEN RECORDED ]]";
    cout<<endl;
    do
    {
        cout <<"\n\t\t\t\t\t   Please Select a Car"<<endl; 
        cout<<"\t\t\t\t\t    *Enter '(A)' for TATA CAR."<<endl;
        cout<<"\t\t\t\t\t    *Enter '(B)' for HYUNDAI CAR."<<endl;
        cout<<"\t\t\t\t\t    *Enter '(C)' for MARUTI SUZUKI CAR."<<endl;
        cout<<"\t\t\t\t\t    *Enter '(D)' for BMW CAR."<<endl;
        cout<<"\t\t\t\t\t    *Enter '(E)' for AUDI CAR."<<endl;
        cout<<endl;
        cout<<"\n\t\t\t\t\tChoose a Car from the above options :- ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	//system("CLS");
 
		cout<<"\t\t\t\t<<__ You have choosed TATA CAR __>>"<<endl;
		cout<<"\t\t\t\t<<__ PER DAY RENT :- 1050/- __>>"<<endl;
		 ifstream inA("A.txt"); 
         char str[200];
         while(inA) 
		 {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
         }
sleep(1);
 }
  if(carmodel=="B")
  {
  	//system("CLS");
  
		cout<<"\t\t\t\t<<__ You have choosed HYUNDAI CAR __>>"<<endl;
		cout<<"\t\t\t\t<<__ PER DAY RENT :- 1700/- __>>"<<endl;
		 ifstream inB("B.txt"); 
         char str[200];
         while(inB) 
		 {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         }
     sleep(1);
 }
 if(carmodel=="C")
 {
 	//system("CLS");
	     cout<<"\t\t\t\t<<__ You have choosed MARUTI SUZUKI CAR __>>"<<endl;
	     cout<<"\t\t\t\t<<__ PER DAY RENT :- 1500/- __>>"<<endl;
		 ifstream inC("C.txt"); 
         char str[200];
         while(inC) 
		 {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     	 }
     sleep(1);
 }  
  if(carmodel=="D")
 {
 	//system("CLS");
	     cout<<"\t\t\t\t<<__You have choose BMW CAR__>>"<<endl;
	     cout<<"\t\t\t\t<<__ PER DAY RENT :- 2000/- __>>"<<endl;
		 ifstream inD("D.txt"); 
         char str[200];
         while(inD) 
		 {
         inD.getline(str, 200);  
         if(inD) cout << str << endl;
     	 }
     sleep(1);
 }  
  if(carmodel=="E")
 {
 	//system("CLS");
	     cout<<"\t\t\t\t<<__ You have choosed AUDI __>>"<<endl;
	     cout<<"\t\t\t\t<<__ PER DAY RENT :- 2500/- __>>"<<endl;
	     ifstream inE("E.txt"); 
         char str[200];
         while(inE) 
		 {
         inE.getline(str, 200);  
         if(inE) cout << str << endl;
     	 }
     sleep(1);
 }  
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel!="E" )
     
      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E" );
    cout<<"______________________________________________________________________________"<<endl;
    cout << "Please provide the following information :- "<<endl; 
    cout <<"-------------------------------------------"<<endl;
    cout<<"Please enter how many car you want :=  ";
    cin >> carnumber;
    cout<<"\nNumber of days you wish to rent the car := ";
    cin >> days;
    cout<<"\nEnter today's date (DD/MM/YY) :=  ";
    cin>>date;
    cout<<"\nPay advance for access the car :\n(minimun 5000 you have to pay )\n";
    cout<<"\nEnter your advance emount := ";
    cin>>amount;
    cout<<"\n[[ TRANSACTION SUCCESSFUL ]]";
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		//system ("CLS");
		cout<<"\n\t\t\t Calculating rent. Please wait......"<<endl;
		sleep(3);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days* 1050 *carnumber;
        due=rentalfee-amount;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days* 1700 *carnumber;
        due=rentalfee-amount;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days* 1500 *carnumber;
        due=rentalfee-amount;
        if(carmodel == "D" ||carmodel=="d")
        rentalfee=days* 2000 *carnumber;
        due=rentalfee-amount;
        if(carmodel == "E" ||carmodel=="e")
        rentalfee=days* 2500 *carnumber;
        due=rentalfee-amount;
    }
void showrent()
    {
    cout << "\n\t\t                       CAR RENTAL - CUSTOMER INVOICE                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#OD-XYZ"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(2)<<customername<<' '<<customername2<<" |"<<endl;
     cout << "\t\t	| Customer phone number :"<<"--------|"<<setw(10)<<phone<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Number of cars :"<<"---------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
     cout << "\t\t	| Car rental date :"<<"--------------|"<<setw(10)<<date<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<amount<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<"/-"<<" |"<<endl;
    cout << "\t\t	| Total DUE Amount is :"<<"----------|"<<setw(10)<<due<<"/-"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 you can easily pay both in offline and online mode #"<<endl;
    cout << "\t\t\t  HOPE YOU ARE ENJOIED OUR SERVIVE "<<endl;
    cout << "\t\t	 DO NOT FORGET TO RATE US...(5*)"<<endl;
    cout << "\t\t	 HAVE A GOOD DAY (^:^)..."<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	TERMS & CONDINATION :-"<<endl;
    cout << "\t\t	You are advised to pay up the "<<"["<< due<<"/-"<<"]"<<" amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied (^!^)"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thank_you.txt");

  
  char str[300];

  while(inf) 
  {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}
};

int main()
{
//welcome obj1; 
//obj1.welcum(); 
rent obj2; 
obj2.data();
obj2.calculate();
obj2.showrent();

return 0; 
}

int login()
{
   string pass ="";
   char ch;
   cout<<"\n\n\n\t\t\t\t\t  WELLCOME TO CAR RENTAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t||--------------------------------------||";
   cout<<"\n\t\t\t\t\t\t       LOGIN REQUIRED\n";	
   cout<<"\t\t\t\t\t||--------------------------------------||\n\n";	
   cout << "\t\t\t\t\tKINDLY ENTER THE PIN : ";
   ch = _getch();
   while(ch != 13)
   {
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "1234")
   {
      cout << "\n\n\n\t\t\t\t\t\t  [Access Granted!] \n";
      //system("PAUSE");
      //system ("CLS");
   }
   else
   {
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}


