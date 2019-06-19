#include <iostream>
#include <string.h>
#include <set>
#include <sstream>

using namespace std;

int main(){
    
    int n;
	cin >> n;
    string str;
    getline(cin,str);

    while(n--){
		getline(cin, str);
        stringstream f(str);

        set<string> s;
		set<string>::iterator it; 
        
		string temp;
        

        while(f >> temp){
            s.insert(temp);
        }

		it = s.begin();
		int size = s.size();
		for (int i = 0; i < size - 1; it++, i++)
		{
			cout << *it << " ";
		}
		cout << *it << endl;
	}
}