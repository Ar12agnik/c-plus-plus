#include <iostream>
#include <string>
using namespace std;
int main(){
	string food;
	food="Pizza";
	string &meal = food;
	cout<<meal<<endl;
	meal="biryani";
	cout<<food;
	return 0;
}
