#include <iostream>
#include <fstream>
#include "Booking.h"
#include <string>
#include <windows.h>
#include <iomanip>

using namespace std ;

int main (){
Booking b ;
int menu_choice;
cout<<"\n\n\n\n           Hello. Please Wait While the Menu Loads...\n";
for (int i=1;i<=5;i++){
	cout<<"______________";
	Sleep(800);
}
system("cls");
do
{
cout << "\n\n\n_______________________[Welcome To Expedia Travel]_______________________\n\n"
     << "                                 Main Menu                     \n\n"
     << "                            Please Enter Your Choice                  \n"
     << "                            PRESS 1 FOR BOOKING YOUR FLIGHT           \n"
     << "                            PRESS 2 TO DISPLAY BOOKING DETAILS        \n"
     << "                            PRESS 3 TO UPDATE YOUR BOOKING DETAILS    \n"
     << "                            PRESS 4 IF YOU WANT YOUR BOOKING CANCELLED AND REFUNDED          \n "
     << "                           PRESS 5 TO EXIT PROGRAM          \n ";
     
cin >> menu_choice ;
system("cls");
switch (menu_choice)
{
	case 1 : b.menuAirlines();
	break ;
	case 2 : b.show();
	break ;
	case 3 : b.update();
	break ;
	case 4 : b.remove();
	break ;
	case 5: exit(0);
	break;
	default :
		cout << "Invalid Choice! Please try again....";
		Sleep(1500);
		system("cls");
}
}
while (menu_choice > 1 || menu_choice < 5);

}


