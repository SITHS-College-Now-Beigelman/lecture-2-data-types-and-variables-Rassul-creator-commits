// Rassul Khalizov 
// Lecture 2
// 9/16/24

#include<iostream> 

using namespace std; 

#include<string>

int main()
{
    // labels variables 
    int bananana = 1;
    float apple = 1.5;
    double kiwi = 2;
    bool pineapple = 4; 
    char Ras = 'a';
    char ul = 'b'; 
    string orange = "Jefferson HELP"; 

    // prints out the values of those variables
    cout << bananana << endl;   
    cout << apple << endl; 
    cout << kiwi << endl; 
    cout << pineapple << endl;
    cout << Ras << endl; 
    cout << ul << endl; 
    cout << orange << endl; 

    int inches; // variable to store total inches 
    inches = 100; // store 100 in variable inches 

    cout << inches << " inch(es) = "; // output the value of inches and the equal sign 
    cout << inches /  12 << "feet (foot) and "; // outputs the maximium number of feet (foot)
    cout << inches % 12 << " inche (es)" << endl; // output remaining inches 

    cout << "a < b= " << (Ras > ul) << endl;  

    cout << "2 + 3.5 = " << 2 + 3.5; 
    cout << " 6 / 4 + 3.9 = " << 6 / 4 + 3.9;  
    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2); 

    return 0;

     /*
    1
1.5
2
1
a
b
Jefferson HELP
100 inch(es) = 8feet (foot) and 4 inche (es)
a < b= 0
2 + 3.5 = 5.5 6 / 4 + 3.9 = 4.95.4 * 2 - (13.6 + 18 / 2) = -11.8%    
    */

}
