#include <iostream>
#include <string>
using namespace std;
struct car{
	string engine;
	int siting_cap;
	bool turbo;
	string brand;
	
};
int main(){
	car mycar1;
	mycar1.brand="BMW";
	mycar1.engine = "4.4L twin Turbo V8 engine";
	mycar1.siting_cap=4;
	mycar1.turbo=true;
	cout<< mycar1.brand<<endl<<mycar1.engine<<endl<<mycar1.siting_cap<<endl<<mycar1.turbo;
	return 0;
}
