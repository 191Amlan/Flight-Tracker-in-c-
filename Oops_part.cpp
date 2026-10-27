#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Flight{
	string flightNumber;
	string deptPlace;
	string arrvPlace;
	string deptTime;
	string arrvTime;
};

int PrintFligt(const Flight flight[], int size){
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"| Flight |  Departure city  |  Arrival city  |  Departure Time  |  Arrival Time  |"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	
	for(int i=0; i<size; i++){
		cout<<"| "<<setw(7)<<flight[i].flightNumber<<" | "
		<<setw(14)<<flight[i].deptPlace<<"  | "
		<<setw(14)<<flight[i].arrvPlace<<" | "
		<<setw(14)<<flight[i].deptTime<<"  | "
		<<setw(14)<<flight[i].arrvTime<<"  | "<<endl;
	}
	cout<<"----------------------------------------------------------------------------------"<<endl;
}
int main(){
	const int numberFlight=3;
	Flight flight[numberFlight]={
		{"A1276", "New york", "Atlanta", "09:00 AM", "11:00AM"},
		{"A1296", "New york", "London", "13:20 PM", "21:00PM"},
		{"A1276", "New york", "New Delhi", "16:00 PM", "12:00AM"}
	};
	PrintFligt(flight, numberFlight);
	return 0;
}
