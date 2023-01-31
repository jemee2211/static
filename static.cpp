//hotel_id
//- hotel_name
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year
//- hotel_staff_quantity
//- hotel_room_quantity

#include<iostream>

using namespace std;

class hotel{
	
	private:
	static int hotel_id;
	static int hotel_establish_year;
	static int hotel_staff_quantity;
	static int hotel_room_quantity;
	static char hotel_name[50];
	static char hotel_type[50];
	static char hotel_rating[50];
	static char hotel_location[50];
	
	public:
		
		static void setter();
		static void getter();
		
		
};

    int hotel::hotel_id = 20;
    int hotel::hotel_establish_year =30;
	int hotel::hotel_staff_quantity =50;
    int hotel::hotel_room_quantity =40;
    char hotel::hotel_name[50] ="jemi";
	char hotel::hotel_type[50]="deda";
	char hotel::hotel_rating[50]="5 star";
	char hotel::hotel_location[50]="surat";
	

 void hotel::setter(){
	
	cout<< "Enter Hotel id:";
	cin>>hotel_id;
	
	cout<< "Enter Hotel Establish Year:";
	cin>>hotel_establish_year;
	
	cout<< "Enter Hotel Staff Quantity:";
	cin>>hotel_staff_quantity;
	
	cout<< "Enter Hotel Room Quantity:";
	cin>>hotel_room_quantity;
	
	cout<< "Enter Hotel Name:";
	cin>>hotel_name;
	
	cout<< "Enter Hotel Type:";
	cin>>hotel_type;
	
	cout<< "Enter Hotel Rating:";
	cin>>hotel_rating;
	
	cout<< "Enter Hotel Location:";
	cin>>hotel_location;
		
}

  void hotel::getter(){
	
	cout<<"Hotel id ="<<hotel_id<<endl;
	cout<<"Hotel establish_year ="<<hotel_establish_year<<endl;
	cout<<"Hotel Staff Quantity ="<<hotel_staff_quantity<<endl;
	cout<<"Hotel Room Quantity ="<<hotel_room_quantity<<endl;
	cout<<"Hotel Name ="<<hotel_name<<endl;
	cout<<"Hotel Type ="<<hotel_type<<endl;
	cout<<"Hotel Rating ="<<hotel_rating<<endl;
	cout<<"Hotel Location ="<<hotel_location<<endl;
	
	
	
}

main(){
	
	int n;
	hotel o[n];
	int i;
	
	cout<<"Enter Size of N:";
	cin>>n;
	
	for(i=0; i<n; i++){
		
		o[i].setter();
		o[i].getter();
		
	}
	
}


