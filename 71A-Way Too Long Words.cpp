#include <iostream>
using namespace std;
 
int main() {
	int t;
	std::cin >> t;
	while(t--){
	    string str;
	    cin>>str;
	    if(str.length()>10)
	    cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
	    else
	    cout<<str<<endl;
	}
	return 0;
}