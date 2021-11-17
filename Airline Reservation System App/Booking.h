#include <string>
using namespace std ;

class Booking {

public :
	void menuAirlines ();
	void setID (int);
	int getID ();
	void setName (string , string);
	string getName ();
	void setAge (int);
	int getAge ();
	void setPrice(double );
    double getPrice ();
    void setDestination (string );
	string getDestination ();
	void setTrip (string );
    string getTrip();
    void setDate (string );
    string getDate();
    void setTime(string );
    string getTime ();
    void setClassType (string );
    string getClassType();
    void setSeat(int );
    int getSeat () ;
    void setTicketN(int );
    int getTicketN();
    void setReferenceN (int );
    int getReferenceN();
	void info ();
	void chooseAirlineInternational ();
	void chooseAirlineLocal();
	void chooseInternationalDestination ();
	void chooseLocalDestination ();
    void chooseTrip();
    void chooseDate();
    void chooseTime();
    void chooseClass ();
    void enterSeats();
    void show ();
    void remove();
    void update();
    int numberOfLines();
private :
	int ID ;
	string name ;
	int age ;
	double price ;
	string destination ;
	string trip ;
	string date ;
	string time ;
	string classType ;
	int seat ;
	int ticketN ;
	int referenceN;
	
};
