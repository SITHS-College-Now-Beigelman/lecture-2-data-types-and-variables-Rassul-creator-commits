

//Rassul Khalizov Lecture 2
//9/16/24

#include <iostream>
#include <string> 
using namespace std;

int main()
{
    //the names of the variables
    int banana = 1;              //Whole numbers
    float apple = 21;             // decimals
    double kiwi = 1.5;            // Float large numbers
    bool pineapple = 4;         //true statements
    char watermelon = 1;       // can only hold one character 
    string orange = "Jefferson HELP";        // output the words in the quotation marks

    cout << banana << endl; 
    cout << apple << endl;
    cout << kiwi << endl;
    cout << pineapple << endl;
    cout << watermelon << endl;
    cout << orange << endl; 

    // Given length in inches, this program outputs the equivalent
    // length in feet and inch(es)

    int inches; // variable to store total inches
    inches = 100; // store 100 in variable inches

    cout << inches << " inch(es) ="; // output the value of inches and the equal sign
    cout << inches / 12 << " feet (foot) and "; // output maximium number of feet (foot) 
    cout << inches % 12 << "inch(es)" << endl; // output remaining inches
    
    char variable1 = 'C'; 
    char variable2 = 'S';

    variable1 = 67;
    variable2 = 83;

    cout <<"C<S" << (variable1 < variable2) << endl; 

    cout << "2 + 3.5=" << (2 + 3.5) << endl;
    cout << "6 / 4 + 3.9=" << (6 / 4 + 3.9) << endl;
    cout << "5.4 * 2 - (13.6 + 18 / 2)=" << (5.4 * 2 - (13.6 + 18 / 2)) << endl;

/*1
21
1.5
1
☺
Jefferson HELP
100 inch(es) =8 feet (foot) and 4inch(es)
C<S1
2 + 3.5=5.5
6 / 4 + 3.9=4.9
5.4 * 2 - (13.6 + 18 / 2)=-11.8*/

    return 0;
}