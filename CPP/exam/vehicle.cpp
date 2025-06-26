#include<iostream>
using namespace std;

class vehicle
{
	string brand;
	string model;
	int KilometersTravelled;
	int FuelConsumed;
	public:vehicle()
	       {
		       cout<<"vehicle constructor:"<<endl;
	       }
	       void vehicleDetails()
	       {
		       cout<<"Enter the Brand:"<<endl;
		       cin>>brand;
		       cout<<"Enter the Model:"<<endl;
		       cin>>model;
		       cout<<"Enter the KilometersTravelled:"<<endl;
		       cin>>KilometersTravelled;
		       cout<<"Enter the FuelConsumed:"<<endl;
		       cin>>FuelConsumed;
	       }
	      void DisplayVehicleDetails()
	       {
		       cout<<"Brand: "<<brand<<endl;
		       cout<<"Model: "<<model<<endl;
		       cout<<"KilometersTravelled: "<<KilometersTravelled<<endl;
		       cout<<"FuelConsumed: "<<FuelConsumed<<endl;
	       }
	       void CalculateMileage()
	       {
		       float mileage;
		       mileage=FuelConsumed/KilometersTravelled;
		       cout<<"Mileage: "<<mileage<<endl;
	       }
	 /*      virtual void bikeDetails();
	       virtual void DisplayBikeDetails();
	       virtual void carDetails();
	       virtual void DisplayCarDetails();*/
	       ~vehicle()
	       {
		       cout<<"vehicle destructor:"<<endl;
	       }
};

class bike:public vehicle
{
	bool hasABS;
	int EngineCapacity;
	public:bike()
	       {
		       cout<<"Bike constructor:"<<endl;
	       }
	       void bikeDetails()
	       {
		       cout<<"Enter the EngineCapacity: "<<endl;
		       cin>>EngineCapacity;
		       cout<<"hasABS: (Yes=1/No=0)"<<endl;
		       cin>>hasABS;
	       }
	       void DisplayBikeDetails()
	       {
		       cout<<"EngineCapacity: "<<EngineCapacity<<endl;
		       switch(hasABS)
		       {
			       case 0:cout<<"hasABS: "<<hasABS<<endl;
				      break;
			       case 1:cout<<"hasABS: "<<hasABS<<endl;
				      break;
		       }
	       }
	       ~bike()
	       {
		       cout<<"bike destructor:"<<endl;
	       }
};
class car:public vehicle
{
	bool hasAdas;
	int SeatingCapacity;
	public:car()
	       {
		       cout<<"car constructor:"<<endl;
	       }
	       void carDetails()
	       {
		       cout<<"Enter the SeatingCapacity: "<<endl;
		       cin>>SeatingCapacity;
		       cout<<"hasAdas: (Yes=1/No=0)"<<endl;
		       cin>>hasAdas;
	       }
	       void DisplayCarDetails()
	       {
		       cout<<"SeatingCapacity: "<<SeatingCapacity<<endl;
		       switch(hasAdas)
		       {
			       case 0:cout<<"hasAdas: "<<hasAdas<<endl;
				      break;
			       case 1:cout<<"hasAdas: "<<hasAdas<<endl;
				      break;
		       }
	       }
	       ~car()
	       {
		       cout<<"car destructor:"<<endl;
	       }
};

int main()
{
	char choice;
	//vehicle *ptr=NULL;
	while(1)
	{
		cout<<"b.Bike c.Car e.Exit"<<endl;
		cout<<"Enter the choice:"<<endl;
		cin>>choice;
	/*	if(choice=='b')
		{
			//ptr=new bike;
			bike ptr;
			ptr.vehicleDetails();
			ptr.bikeDetails();
			ptr.DisplayVehicleDetails();
			ptr.CalculateMileage();
			ptr.DisplayBikeDetails();
			//delete ptr;
			//ptr=NULL;
		}
		else if(choice=='c')
		{
			//ptr=new car;
			car ptr;
			ptr.vehicleDetails();
			ptr.carDetails();
			ptr.DisplayVehicleDetails();
			ptr.CalculateMileage();
			ptr.DisplayCarDetails();
			//delete ptr;
			//ptr=NULL;
		}
		else if(choice=='e')
		{
			exit(0);
		}*/
		switch(choice)
		{
			case 'b':
				{bike ptr;
			ptr.vehicleDetails();
			ptr.bikeDetails();
			ptr.DisplayVehicleDetails();
			ptr.CalculateMileage();
			ptr.DisplayBikeDetails();}
			break;
			case 'c':
			{car ptr;
			ptr.vehicleDetails();
			ptr.carDetails();
			ptr.DisplayVehicleDetails();
			ptr.CalculateMileage();
			ptr.DisplayCarDetails();}
			break;
			case 'e':{exit(0);}
		}
	}
}
