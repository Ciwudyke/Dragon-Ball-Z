/*This is Chidi Iwudyke*/
#include <iostream>
#include "dbz.h"
using namespace std;
dbz::dbz(string init_name, int init_health, string init_spouse){
        name = init_name; 
	health = init_health;
        spouse = init_spouse;
}

        string dbz::getname(){
                return name;
        }
        int dbz::gethealth(){
                return health;
        }
        string dbz::getspouse(){
                return spouse;
        }
int main(){
        /*Make a dbz object*/
        dbz goku ("Goku", 9000000, "Chi-Chi");
	dbz vegeta ("Vegeta", 900, "Bulma");
	dbz gohan ("Gohan", 5, "Videl");
	dbz trunks ("Trunks", 900000, "Strongest Young Super Sayin");
	dbz goten ("Goten", 900000, "Youngest Super Saiyan");
        cout << goku.getname() << endl << goku.gethealth() << endl << goku.getspouse() << endl << endl;
	cout << vegeta.getname() << endl << vegeta.gethealth() << endl << vegeta.getspouse() << endl << endl;
	cout << gohan.getname() << endl << gohan.gethealth() << endl << gohan.getspouse() << endl << endl;
	cout << trunks.getname() << endl << trunks.gethealth() << endl << trunks.getspouse() << endl << endl;
	cout << goten.getname() << endl << goten.gethealth() << endl << goten.getspouse() << endl << endl;





 return 0;
}


