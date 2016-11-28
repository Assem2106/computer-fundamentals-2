#include <iostream>
#include <set>


	using namespace std ;

	int main () {

	string s;

	cin>>s;
	
	set <char> set2;
	
	int count=0;

	for ( int i=0 ; i<s.length() ;i++) {

	int a = atoi(s.c_str()) ;


	if ( a >= 0 && a <= 9)  {

		set2.insert( s[i]) ;
		
		}
	}
	  if (!s.empty()) {
	     
	  for ( set<char>::iterator it = set2.begin(); it!=set2.end(); ++it) {
		
		cout << *it ;


				} 
		}   else {

		cout<< "NO" ;
}

return 0;

}	