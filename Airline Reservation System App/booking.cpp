#include "Booking.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std ;

void Booking::setID(int newID){
ID = newID ;
}
int Booking::getID (){
return ID ;
}
void Booking::setName(string first , string last){
name = first + " " + last ;
}
string Booking::getName (){
return name ;
}

void Booking::setAge(int newAge){
age = newAge ;
}
int Booking::getAge (){
return age ;
}
void Booking::setPrice(double newPrice){
	price = newPrice ;
}
double Booking::getPrice (){
return price ;
}
void Booking::setDestination (string d){
	destination  = d ;
}
string Booking::getDestination(){
	return destination ;
}
void Booking::setTrip (string newTrip){
	trip = newTrip ;
}
string Booking::getTrip(){
	return trip ;
}
void Booking::setDate (string newDate){
	date = newDate ;
}
string Booking::getDate(){
	return date ;
}
void Booking::setTime(string newTime){
	time = newTime ;
}
string Booking::getTime(){
	return time;
}
void Booking::setClassType (string newType){
	classType = newType ;
}
string Booking::getClassType(){
	return classType;
}
void Booking::setSeat(int newSeat){
	seat = newSeat ;
}
int Booking::getSeat (){
	return seat ;
}
void Booking::setTicketN(int newT){
	ticketN = newT ;
}
int Booking::getTicketN(){
    return ticketN;
}
void Booking::setReferenceN (int newR){
	referenceN = newR ;
}
int Booking::getReferenceN(){
	return referenceN ;
}
void Booking::menuAirlines (){
int menu_choice ;
do{
cout << "________________[ Welcome | Expedia Travel ]________________\n"
     << "--------------Please Select An Option-----------------\n"
     << "            PRESS 1 FOR DOMESTIC BOOKING        \n"
     << "            PRESS 2 FOR INTERNATIONAL BOOKING      \n"
     << "                 PRESS 0 TO EXIT        \n\n";
cin >> menu_choice ;
system("cls");
switch (menu_choice){
	case 1 : chooseAirlineLocal();
	break ;
	case 2 : chooseAirlineInternational ();
	break ;
	case 0 :
		exit(0);
	default :
		cout << "Invalid Choice! Please Try Again .. ";
		Sleep(1500);
		system("cls");
}
}while (menu_choice < 1 || menu_choice > 2);
}
void Booking::info (){
int i = 0 ;	int x  ;
Booking obj ;

int ID ;
string fname , lname ;
int age ;

 srand(1+i);
ticketN = 1+rand()%10;
referenceN = ticketN + 12345 ;

obj.setTicketN(ticketN);
obj.setReferenceN(referenceN);
obj.setDestination(destination);
obj.setDate(date);
obj.setTime(time);
obj.setTrip(trip);
obj.setClassType(classType);
obj.setSeat(seat);

Booking account [20];

ofstream of ("Booking.txt");
if (!of){
cout << "Failed to open file .!";
exit(0);
}
do{
cout << "Please enter your ID number : ";
cin >> ID ;
obj.setID(ID);
cout << "Please enter your first name : " ;
cin >> fname ;
cout << "Please enter your last name : " ;
cin >> lname ;
obj.setName( fname , lname );
cout << "Please enter your age : "	;
cin >> age ;
obj.setAge(age);

   cout << "\n\n   ______________________________[ Expedia Travel ]_______________________\n\n"
        << "                                             TICKET DETAILS     \n\n"
        << " |Ticket No: " << getTicketN() << "\t\t\t Reference No: "<< getReferenceN()<<"\n"
        << " ********************************************************************************************************\n"
        << "                                        PASSENGER INFORMATION                 \n"
        << " |Name: " << obj.getName() <<"\n"
        << " |Id Number: " << obj.getID() << "\n"
        << " |Age: "<< obj.getAge() <<"\n"
       << " ********************************************************************************************************\n"
        << "                                          FLIGHT INFORMATION                         \n"
        << " |Origin: Beijing (PEK) \n"
        << " |Destination: "<< getDestination()<<"\n"
        << " |Date: "<< getDate() << "\n"
        << " |Time: "<< getTime()<<"\n"
        <<"\n  "<< getTrip()<<"\n  "<< getClassType()<<"\n  Number of seat(s): "<< getSeat()<<"\n"
        << " ********************************************************************************************************\n\n"
        << " |PRICE: "<< getPrice()<<"USD";
        
   cout << "\n\n PLEASE CHECK :\n"
        << "(1) - Confirm \n"
        << "(2) - Cancel \n ";
        cin >> x ;
        system("cls");
        switch (x){
        case 1 :
        account[i] = obj ;
       of << account[i].getID() <<"   "<< account[i].getName() <<"   "<< account[i].getAge() <<"   "<< account[i].getTicketN()
       <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<"   "<<account[i].getTrip()<<"   "
       <<account[i].getClassType()<<"   "<<account[i].getSeat()<<"\n";
       of.close();
  cout << "Would you like to book another flight? \n"
       << " 1 - Yes. \n 2 - No. \n";
       cin >> x ;
      if (x == 1){
     	i++;
     	system("cls");
        menuAirlines();
	    }
		else if (x == 2){
		system("cls");
		cout << " \n\n\n\n\n |Thank You For Using Expedia Travel \n Program will exit now. ";
		Sleep(1500);
		exit(0);
		}
		else {
			system("cls");
			cout << "Invaild choice. The program will exit now ";
			Sleep(1500);
		}
        break ;
    case  2 :
    	do{
		cout << "\n\n\n\n ____________________________________________\n (1) - Home \n (2) - Exit \n";
	    cin >> x ;
	    switch (x){
	  	case 1 : system("cls");  menuAirlines();   break;
	  	case 2 : exit(0); break ;
	  	default: system("cls") ; cout << "Invalid Choice! Please Try Again..."; Sleep(1500); system("cls"); break ;
	  }
	  }while (x<1 || x>2);

}
}while ( x == 1);
}
void Booking::chooseAirlineInternational (){
	int select ;
	 do {
cout << "________________________[ Expedia Travel ]____________________\n"
	 << "\n**************************************************************************\n"
	 << "\n Which Airline Would You Like to Travel With? \n\n"	
     << "(1) - British Airways\n"	
     << "(2) - Emirates\n"
     << "(3) - Delta Airlines\n"
     << "(4) - KLM\n"
     << "(5) - Qantas\n"
     << "**************************************************************************\n";
	 cin >> select ;
	 system("cls");
	 
        if (select == 1 ){
	 	cout << "\n\nYOU HAVE SELECTED BRITISH AIRWAYS\n\n";
        chooseInternationalDestination ();
	 }
	 	else if (select == 2 ){
		  cout << "\n\nYOU HAVE SELECTED EMIRATES\n\n";
        chooseInternationalDestination ();
	 }
	 	else if (select == 3){
	 		cout<<"\n\n YOU HAVE SELECTED DELTA AIRLINES\n\n";
	 		chooseInternationalDestination ();
		 }
		 else if (select == 4){
	 		cout<<"\n\n YOU HAVE SELECTED KLM\n\n";
	 		chooseInternationalDestination ();
		 }
		 else if (select == 5){
	 		cout<<"\n\n YOU HAVE SELECTED QANTAS\n\n";
	 		chooseInternationalDestination ();
		 }
	         if (select < 1 || select > 5 ){
	 	 cout << "\n\n Invalid choice! Please try again..";
	 	 Sleep(1500);
	 	 system("cls");
	 }
	 	} while (select < 1 || select > 5);
	 }

void Booking::chooseAirlineLocal(){ 
    	int select ;
	 do {
cout << "________________________[ Expedia Travel ]____________________\n"
	 << "------------------------------------------------------------------------\n"
	 << "\n Which airline would you like to travel with? \n\n"	
     << "(1) - Air China \n"	
     << "(2) - China Southern Airlines \n"
     << "(3) - China Eastern Airlines \n"
     << "(4) - Hainan Airlines\n"
     << "(5) - Sichuan Airlines\n"
	 << "------------------------------------------------------------------------\n";
	 cin >> select ;
	 system("cls");
	 
        if (select == 1 ){
	 	cout << "\n\nYOU HAVE SELECTED Air China\n\n";
        chooseLocalDestination ();
	 }
	 	else if (select == 2 ){
		  cout << "\n\nYOU HAVE SELECTED China Southern Airlines\n\n";
        chooseLocalDestination ();
	 }
	 	else if(select == 3){
	 		cout<<"\n\nYOU HAVE SELECTED China Eastern Airlines\n\n";
	 		chooseLocalDestination ();
		 }
		else if(select == 4){
	 		cout<<"\n\nYOU HAVE SELECTED Hainan Airlines\n\n";
	 		chooseLocalDestination ();
		 }
		else if(select == 5){
	 		cout<<"\n\nYOU HAVE SELECTED Sichuan Airlines\n\n";
	 		chooseLocalDestination ();
		 }
	         if (select < 1 || select > 5 ){
	 	 cout << "\n\n Invalid choice! Please try Again..";
	 	 Sleep(1500);
	 	 system("cls");
	 }
	 	} while (select < 1 || select > 5);
	 }
 
void Booking::chooseInternationalDestination (){
	int select ;
do{
 cout << "__________________[ Expedia Travel ]_________________"
 	  << "\n Here are the available INTERNATIONAL flights: \n"	
	  << "-----------------------------------------------------------------\n"
	  << "(1) - TAIPEI\n"
	  << "(2) - DUBAI\n"
	  << "(3) - LONDON\n"
	  << "(4) - LOS ANGELES\n"
	  << "(5) - TOKYO\n"
	  << "(6) - NEW YORK\n"
	  << "(7) - JAKARTA\n"
      << "(0) - Go Back \n"
      << "Respective prices will be displayed in United States Dollar(USD)\n"
      << "-----------------------------------------------------------------\n";
      cin >> select ;
      system("cls");
      switch (select){
      	case 1 : 
      	destination = "TAIPEI(TPE)";
      	price = 2300 ;
      	break ;
      	case 2 : 
      	destination = "DUBAI(DXB)";
      	price = 2799 ;
      	break ;
      	case 3 : 
      	destination = "LONDON(LHR)";
      	price = 3200 ;
      	break ;
      	case 4 : 
      	destination = "LOS ANGELES(LAX)";
      	price = 7840 ;
      	break ;
        case 5 : 
      	destination = "TOKYO(HND)";
      	price = 3260 ;
      	break ;
      	case 6 : 
      	destination = "NEW YORK(JFK)";
      	price = 5645 ;
      	break ;
      	case 7 : 
      	destination = "JAKARTA(CGK)";
      	price = 2588 ;
      	break ;
      	case 0 :
     	system("cls");
      	chooseAirlineInternational();
      	break ;
        default :
        	cout << "\n\n Invalid choice! Please try again...";
        	Sleep(1500);
        	system("cls");
	  }
      }while (select < 0 || select > 7);
 chooseTrip();
}
 void Booking::chooseLocalDestination (){
  
int select ;
do{
cout 
<< "__________________[ Expedia Travel ]_______________\n"
<< "----------------------------------------------------------------\n"
<< "\n Here are the available LOCAL flights: \n"
<< "(1) - SHANGHAI \n"
<< "(2) - NANJING \n"
<< "(3) - XIAN \n"
<< "(4) - FOSHAN \n"
<< "(5) - GUANGZHOU \n"
<< "(6) - CHONGQING \n"
<< "(7) - HANGZHOU \n"
<< "(0) - Go Back \n"
<< "Respective prices will be displayed in United States Dollar(USD)\n"
<< "----------------------------------------------------------------\n";
cin >> select ;
system("cls");
switch (select){
case 1 :
destination = "SHANGHAI(PVG)";
price = 700 ;
break ;
case 2 :
destination = "NANJING(NKG)";
price = 850 ;
break ;
case 3 :
destination = "XI'AN(XIY)";
price = 650 ;
break ;
case 4 :
destination = "FOSHAN(FUO)";
price = 485 ;
break ;
case 5 :
destination = "GUANGZHOU(CAN)";
price = 700 ;
break ;
case 6 :
destination = "CHONGQING(CKG)";
price = 350 ;
break ;
case 7 :
destination = "HANGZHOU(HGH)";
price = 595 ;
break ;
case 0 :
system("cls");
chooseAirlineLocal();
break ;
default :
cout << "\n\n Inavalid choice! Please try again ..";
Sleep(1500);
system("cls");
}
}while (select < 0 || select > 7);
chooseTrip();
}
void Booking::chooseTrip(){
	int select ;
cout << "____________[ Expedia Travel ]____________\n"
	 << "One-way Trip or Round Trip? Please Select. \n"	
     << "------------------------------------------------------\n"
     << "  (1)	 One-way Trip \n "
     << " (2) 	 Round Trip \n "
     << " (0) 	 Back \n"
     << "------------------------------------------------------\n";
     cin >> select ;
     system("cls");
     switch (select){
      case 1 : 	
      trip = "ONE-WAY";
      break ;
      case 2 : 
      trip = "ROUND TRIP";
      price *= 2 ;
      cout << "The Price is "<<getPrice();
      break ;
      case 0 :
       system("cls");
       chooseInternationalDestination();
       break ;
       default : 
       cout << "Invalid Choice! Please try again ..";
       Sleep(1500);
       system("cls");
       break ;	
	 }
	chooseDate();
}

void Booking::chooseDate(){
	int select ;
	while (select < 1 ||select > 12){
	cout << "Press (0) - Go Back ";
	
cout << "\n\n______________________________________PLEASE SELECT THE DATE OF YOUR DEPARTURE_________________________________________\n\n "	
     <<"1  " <<setw(10)<< " 2  " <<setw(8)<<"  3  " <<setw(10)<<"  4  " <<setw(10)<<" 5 "  <<setw(11)<<"  6  "<<setw(10)<<" 7  "<<setw(10)
     <<"  8  "<<setw(11)<<"  9  "<<setw(12)<<"  10  "<<setw(10)<<"  11  "<<setw(12)<<"  12  \n"
     <<"*************************************************************************************************************************\n\n"
	 <<"Jan"<<setw(10)<<"Feb"<<setw(10)<<"Mar"<<setw(10)<<"Apr"<<setw(10)
	 <<"May "<<setw(10)<< "June"<<setw(10)<<"July"<<setw(10)<<"Aug" <<setw(14)
	 <<"Sept"<<setw(10)<<"Oct"<<setw(10)<<"Nov"<<setw(14)<<"Dec \n"
	 <<" -  "<<setw(10)<<" -  "<<setw(8)<<" -  "<<setw(10)<<" -  "<<setw(10)<<" -  "<<setw(10)<<" -  "
	 <<setw(10)<<" - "<<setw(9)<<" - " <<setw(10)<<" - "<<setw(14)<<" 28 "<<setw(10)<< " 26 "<<setw(11)<<" 19 "
	 <<"\n*************************************************************************************************************************\n";
	 cout << "\n Choose the respective month(1-12) ..\n";
	 cin >> select ;
	 switch (select){
	 case 1 : 	
	    date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(1500);
     	system("cls");
     	chooseDate();
	    break ;
     case 2 :
     	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(1500);
     	system("cls");
     	chooseDate();
     	break ;
     case 3 :
     	date = "-";
     	cout << "\n ****NO AVAILABLE FLIGHTS**** \n";
     	Sleep(1500);
     	system("cls");
     	chooseDate();
     	break ;
     case 4 :
     	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(1500);
     	system("cls");
     	chooseDate();
     	break ;
     case 5 :
     	date = "-";
     	cout << "\n****NO AVAILABLE FLIGHTS****  \n";
     	Sleep(1500);
     	system("cls");
     	chooseDate();
     	break ;
	  case 6 :
     	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(1000);
     	system("cls");
     	chooseDate();
     	break ;	
	  case 7 :
     	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(600);
     	break ;
	  case 8 :
     	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(600);
     	break ;	
      case 9 :
	 	date = "-";
	    cout << "\n\n****NO AVAILABLE FLIGHTS**** \n";
	    Sleep(600);
     	break ;
     		
	  case 10 :
     	date = "28 Oct 2021";
	    cout << "\n\n       **** The flight is available! **** \n";
	    Sleep(600);
     	break ;	
     case 11 :
     	date = "26 Nov 2021";
	    cout << "\n\n       **** The flight is available! **** \n";
	    Sleep(600);
     	break ;
     case 12 :
     	date = "19 Dec 2021";
	    cout << "\n\n       **** The flight is available! **** \n";
	    Sleep(600);
     	break ;
     case 0 :
       system("cls");
       chooseTrip();
       break ;
	 default :
	 	system("cls");
	 	cout << "\n Invalid Choice! Please try again.";
	 	Sleep(1500);
	 	system("cls");
	 }
}
system("cls");
chooseTime();	
}	
void Booking::chooseTime(){
	int select  ;
do {
cout  << "______________________[ Expedia Travel ]____________________"
	 << "\n ______________________AVAILABLE DEPARTURE TIMES_____________________\n\n"	
     <<"------------------------------------------------------------------------\n\n"
     << "(1) - 0200 \n"
	 << "(2) - 0845 \n"
	 << "(3) - 1450 \n"
	 << "(4) - 1600 \n"
	 << "(5) - 1730 \n"
	 << "(6) - 1930 \n"
	 << "(7) - 2150 \n"
	 << "(0) - Go Back \n";
	 cin >> select ;
 switch(select)	 {
 case 1 :
 	time = "0200 ";
 	system("cls");
 	break;
 case 2 :
 	time = "0845 ";
 	system("cls");
 	break;
case 3 :
 	time = "1450 ";
 	system("cls");
 	break;
case 4 :
 	time = "1600 ";
 	system("cls");
 	break;
case 5 :
 	time = "1730 ";
 	system("cls");
 	break;
case 6 :
 	time = "1930 ";
 	system("cls");
 	break;
case 7 :
 	time = "2150 ";
 	system("cls");
 	break;
case 0 :
 	system("cls");
 	chooseDate();
 	break;
default :
	system("cls");
    cout << "\n Invalid Choice! Please Try Again .. " 	;
 	Sleep(1500);
 	system("cls");
 }	
}while (select < 0 || select > 7);	
chooseClass ();
}	

void Booking::chooseClass (){
int select ;
	 do{
cout  << "_________[ Expedia Travel ]________"
	 << "\n\n Which class would you like to travel in? \n"	
	 << "----------------------------------------------\n"
	 << "(1) - ECONOMY CLASS \n"
	 << "(2) - BUSINESS CLASS \n"
	 << "(0) - Go Back \n"
	 << "----------------------------------------------\n";
	 cin >> select ;
	 switch (select){
	 case 1 :
	 	classType = "ECONOMY CLASS";
	 	price *= 2 ;
	 	break ;
	 case 2 :
	 	classType = "BUSINESS CLASS";
	 	break ;
     case 0 :
	 	system("cls");
	 	chooseTime();
	 	break ;
	 default :
	    system("cls");
        cout << "\nInvalid Choice! Please Try Again .. ";
    	Sleep(1500);
    	system("cls");		
	 } 
	 }while ( select < 0 || select > 2);
	 system("cls");
	 enterSeats();
}

void Booking::enterSeats(){
cout << "\n Enter the number of seats you wish to book: \n";
	cin >> seat ;
	price *= 2 ;
    system("cls");
	info();	
}

void Booking::show (){
int size = numberOfLines () ;
Booking account[size - 1];
ifstream iff ("Booking.txt");
 string llname , mor , ttrip , type ;
 for (int i = 0 ; i < size - 1 ; i++){
 iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
     >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
	 >> account[i].classType >> type >> account[i].seat ;
 
 }
 iff.close();
 for (int i = 0 ; i < size - 1 ; i++){
 cout << account[i].getID() << "   " << account[i].getName() << "   " << llname << "   " << account[i].getAge() << "   "
      << account[i].getTicketN() << "   " << account[i].getReferenceN() <<"   "<<account[i].getDestination()
	  <<"   "<<account[i].getDate() <<"   "<<account[i].getTime()<<" "<<mor<<"   "<<account[i].getTrip()<<" "<<ttrip
	  <<"   "
	  <<account[i].getClassType()<<" "<<type<<"   "<<account[i].getSeat()<<"\n\n";
}

}
void Booking::remove (){
int size = numberOfLines () ;
bool find = false ;	
Booking account [size - 1];
ifstream iff ("Booking.txt");
int key ;
while (find == false){
cout << "Enter ID number to be removed: ";
cin >> key ;
string llname , mor , ttrip , type ;
string newlname , newmor , newtrip , newtype ;
 for (int i = 0 ; i < size - 1 ; i++){
 iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
     >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
	 >> account[i].classType >> type >> account[i].seat ;
	 if (account[i].getID() == key){
	 	find = true ;
	newlname = llname ; newmor = mor ; newtrip = ttrip ; newtype = type ;
 cout <<"\n\n ID Number: "<<account[i].getID() << "\n" 
      <<"Name: "<<account[i].getName() << " " << llname << "\n" 
	  <<"Age: "<<account[i].getAge() << "\n"
      <<"Ticket Number: "<<account[i].getTicketN()<<"\n"
	  <<"Reference Number: " << account[i].getReferenceN() <<"\n"
	  <<"Destination: "<<account[i].getDestination()<< "\n"
	  <<"Date: "<<account[i].getDate()<<"\n"
	  <<"Time: "<<account[i].getTime()<<" "<<mor<<"\n"
	  <<"Trip: "<<account[i].getTrip()<<" "<<ttrip << "\n"
	  <<"Class Type: "<<account[i].getClassType()<<" "<<type<<"\n"
	  <<"Seat Number: "<<account[i].getSeat()<<"\n\n";
}
}
iff.close();
if (find == true){
int choice ;
do {
cout << "Please Confirm: \n (1) - DELETE  \n (2) - CANCEL \n";
cin >> choice ;
switch (choice){
	case 1 : {
	ofstream of ("Booking.txt");
	for (int i = 0 ; i < size - 1 ; i++){
	if (account[i].getID() != key){
	of << account[i].getID() <<"   "<< account[i].getName() <<" "<<newlname<<"   "<< account[i].getAge() 
	   <<"   "<< account[i].getTicketN() <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<" "<<newmor<<"   "<<account[i].getTrip()<<" "<<newtrip
	   <<"   " <<account[i].getClassType()<<" "<< newtype <<"   "<<account[i].getSeat()<<"\n";
	}
	}
	of.close();
	system("cls");
	cout << " Task completed successfully. The program shall exit now.";
	Sleep(500);
	exit(0);
	break ;
}
	case 2 : 
	system("cls");
	cout << "The program will exit NOW ..";
	Sleep(1500);
	exit(0);
	break ;
	default :
	system("cls");
    cout << "\n Invalid Choice! Please Try Again .. ";
    Sleep(1500);
    system("cls");
    break ;
}
 }while ( choice < 1 || choice > 2);
 break ;
}
else {
	system("cls");
   	cout << "ID not found. Please try again. \n\n";
   	Sleep(1500);
   	system("cls");
}
}
}
void Booking::update(){
int size = numberOfLines () ;
bool find = false ;
Booking account [size - 1];
ifstream iff ("Booking.txt");
int key ;
while (find == false){
cout << "Enter ID number to be updated : ";
cin >> key ;
string llname , mor , ttrip , type ;
string newlname , newmor , newtrip , newtype ;
 for (int i = 0 ; i < size - 1 ; i++){
 iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
     >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
	 >> account[i].classType >> type >> account[i].seat ;
	 if (account[i].getID() == key){
	 	find = true ;
	newlname = llname ; newmor = mor ; newtrip = ttrip ; newtype = type ;
 cout <<"\n\nID Number : "<<account[i].getID() << "\n" 
      <<"First name : "<<account[i].getName() << " " << llname << "\n" 
	  <<"Age : "<<account[i].getAge() << "\n"
      <<"Ticket Number : "<<account[i].getTicketN() << "      Reference Number : " << account[i].getReferenceN() <<"\n"
	  <<"Destination : "<<account[i].getDestination()<< "\n"
	  <<"Date : "<<account[i].getDate() <<"         Time : "<<account[i].getTime()<<" "<<mor<<"\n"
	  <<"Trip : "<<account[i].getTrip()<<" "<<ttrip << "\n"
	  <<"Class Type : "<<account[i].getClassType()<<" "<<type<<"\n"
	  <<"Seat Number : "<<account[i].getSeat()<<"\n\n";
	  cout << "ID number:\n"; 
	  cin >> account[i].ID ;
	  cout << "Name:\n";
	  cin >> account[i].name;
	  cout << "Age:\n";
	  cin >> account[i].age;
	  cout << "Destination:\n";
	  cin>> account[i].destination;
	  cout<<"Trip(One-way/Round trip):\n";
	  cin>> account[i].trip;
	  cout<<"Class Type(Economy or Business):\n";
	  cin>>account[i].classType;
	  cout<<"Seat Number : "<<account[i].getSeat()<<"\n\n";
 }
 }
     iff.close();
    if (find == true){
	ofstream of ("Booking.txt",ios::out);
	for (int i = 0 ; i < size - 1 ; i++){
	of << account[i].getID() <<"   "<< account[i].getName() <<" "<<newlname<<"   "<< account[i].getAge() 
	   <<"   "<< account[i].getTicketN() <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<" "<<newmor<<"   "<<account[i].getTrip()<<" "<<newtrip
	   <<"   " <<account[i].getClassType()<<" "<< newtype <<"   "<<account[i].getSeat()<<"\n";
	}
	of.close();	
	cout << "Information Updated....\n\n";
	break ;
}
   else {
   	system("cls");
   	cout << "ID not found....Please try again.\n\n";
   	Sleep(1500);
   	system("cls");
   }
}
}
int Booking::numberOfLines (){
    int number_of_lines = 0 ;
    string line;
    ifstream myfile("Booking.txt");
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            number_of_lines++;
        }
        myfile.close();
    }
	return number_of_lines -- ;		
}





