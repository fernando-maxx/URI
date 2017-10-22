#include <iostream>
using namespace std;

int main()
{
    string str;

    while (getline(cin,str)) {
        int count = 1;
        long int size = str.size();

        for (int i = 0; i < size; ++i) {
            if (isalpha(str[i])) {
                if (count++%2)
                    str[i] = toupper(str[i]);
                else
                    str[i] = tolower(str[i]);
            }
        }

        cout << str << endl;
    }
}