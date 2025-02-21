#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:{
            string Name;
            int Age;

            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Name of the new student?" << endl;
            cin >> Name;

            cout << "Age of the new student?" << endl;
            cin >> Age;

            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(Name, Age));
            break;
        }
        case 1:{
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for (auto &p : studentList){
                p.printStudentInfo();
            }
            break;
        }
        case 2:{
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat


            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){
                return a.getName() < b.getName();
            });

            for(auto &h : studentList){
                h.printStudentInfo();
            }
            break;
        }
        case 3:{
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });

            for(auto &h : studentList){
                h.printStudentInfo();
            }
            break;
        }
        case 4:{
            string haku;
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Enter a name to search: ";
            cin >> haku;
            auto it = find_if(studentList.begin(), studentList.end(), [&](Student& a){
                return haku == a.getName();
            });

            if(it != studentList.end()){
                cout << "Name was found on the list: " << endl;
                it->printStudentInfo();
            } else {
                cout << "Name was not found on the list." << endl;
            }
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

    return 0;
}



