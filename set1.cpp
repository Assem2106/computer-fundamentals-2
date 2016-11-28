#include <iostream>
#include <set>

	using namespace std;

	int main() {
	int cnt=0;
	string s;

	//cin>>s; 
	getline(cin,s);

	set<char> apple ;

	apple.insert(',');
	apple.insert('.');
	apple.insert('!');
	apple.insert('?');
	apple.insert(':');
	apple.insert(';');


	for ( int  i=0; i<s.length();  i++)  {

		if(apple.count(s[i])!=0){
			cnt++;
		}
	}
	cout<<cnt;
	 	





return 0;

}
