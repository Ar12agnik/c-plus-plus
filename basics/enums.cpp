#include <iostream>
#include <string>
using namespace std;
enum gender{
	Male,
	Female
};
int main(){
	string name;
	enum gender g;
	name="Anusree Roy";
	g = Female;
	cout<< name <<" is a "<<g;
	return 0;
}
