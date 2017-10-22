#include <iostream>
using namespace std;


int main() {
    //freopen("text.txt", "r", stdin);

    string str;

    while (getline(cin, str)) {
        string aux;
        long int size = str.size(), count = 1, count2 = 1;

        for (int i = 0; i < size; ++i) {
            if (str[i] == '_') {
                if (count++%2) {
                    aux += "<i>";
                }
                else {
                    aux += "</i>";
                }
            }
            else if (str[i] == '*') {
                if (count2++%2) {
                    aux += "<b>";
                }
                else {
                    aux += "</b>";
                }
            }
            else
                aux += str[i];
        }

        cout << aux << endl;
    }
}