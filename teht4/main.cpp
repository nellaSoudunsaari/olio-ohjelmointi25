#include <iostream>

using namespace std;
string ans;

int main()
{
    cout << "Tervetuloa pankkiin" << endl;
    cout << "Haluatko nostaa vai tallettaa?" << endl;
    cin >> ans;
    if(ans == "tallettaa"){
        cout << "Talletus" << endl;

    } else if(ans == "nostaa") {
        cout << "Nosto" << endl;
    }
    return 0;
}

void talletus(){

}
