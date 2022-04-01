#include <iostream>
using namespace std;



int main()
{
    //Hello World
    cout << "Hello World!" << endl;

    //1 --- Primitive types --- 
    cout << "1. ------------- Primitive types -------------\n";

    int age = 25;
    string name = "Szymon";
    float weight = 100.5;
    double balance = 55.95;
    char gender = 'M';
    bool isTodaySunny = false;

    cout << "int: " << age << endl;
    cout << "string: " << name << endl;
    cout << "float: " << weight << endl;
    cout << "double: " << balance << endl;
    cout << "char: " << gender << endl;
    cout << "bool: " << isTodaySunny << endl;

    //2 --- Arrays --- 
    cout << "2. ------------- Arrays -------------\n";

    int lottoNumbers[6] = {11, 13, 14, 7, 88, 5};
    string colors[10] = {"red","pink","green","blue","orange"}; //5 hold, 5 free
    char symbols[] = {'A','11','#'};  //Array with long 3

    cout << "1) Second element of lottoNumbers: " << lottoNumbers[1] << endl;
    cout << "2) First element of colors : " << colors[1] << endl;
    cout << "3) Change third element of colors (comment now)" << endl;

    //Change array element
    //cout << "Actual: " << colors[2] << endl;
    //cout << "New value:";
    //cin >> colors[2];
    //cout << "New value: " << colors[2] << endl;


    //3 --- If...else statement --- 
    cout << "3. ------------- If...elese statement -------------\n";




    system("pause>0");
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie
