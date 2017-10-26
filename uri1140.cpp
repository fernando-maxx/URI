#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    freopen("text.txt", "r", stdin);
    string str;

    while (getline(cin,str)) {

        if (str == "*")
            break;
        int size = str.size();
        char aux = str[0], flag = 'Y';

        for (int i = 1; i < size; ++i) {
            if(str[i] == ' ')
                if (!(str[i+1] == tolower(aux) || str[i+1] ==  toupper(aux)))
                    flag = 'N';
        }

        cout << flag << endl;
    }

}

