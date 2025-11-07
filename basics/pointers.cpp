#include <iostream>
#include <string>
using namespace std;
int main(){
	string Name ="Dogge Challenger srt demon";
	string* ptr;
	ptr =&Name;
	cout<<*ptr;//returns Dogge challenger srt Demon
	return 0;
	}
