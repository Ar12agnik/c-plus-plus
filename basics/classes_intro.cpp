#include <iostream>
#include <string>
using namespace std;
class Car{
	public:
		string brand;
		string model;
	void set_engine_prop(string engine){
		Engine = engine;
	}
	void set_sitting_cap(int Seating_cap){
		seating_cap = Seating_cap;
	}
	void see_private_prop(){
		cout<<"engine "<<Engine<<endl;
		cout<<"seatting capacity "<< seating_cap;
	}
	private:
		string Engine;
		int seating_cap;
	
};
int main(){
	Car car1;
	car1.brand = "Dodge";
	car1.model = "Challenger SRT Demon";
	car1.set_engine_prop("6.2-liter Supercharged HEMI V8");
	car1.set_sitting_cap(4);
	cout<<car1.brand<<" "<<car1.model;
	car1.see_private_prop();
	return 0;
}
