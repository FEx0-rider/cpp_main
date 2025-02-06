#include <iostream>  // zakladni knihovna
#include <vector> // knihovna na upravu pole
#include <chrono>  // knihovna na cas
#include <fstream> // kihovna pro psani so souborů

using namespace std;  // puziji abych nemusel pokazde odkazovat na promnenou v knihovne
                     // obcas muze delat problemy kdyz mam importovano dost knihoven

int cilso = 2; // toto jsou promenne typy
short cislo = 12; // toto jsou promenne typu short
long cislo2 = 12; // toto jsou promenne typu long
long long cislo3 = 12; // toto jsou promenne typu long long

double desetinne = 3.14;  // pouze 15-16 desetinny cisel
long double desetinne2 = 3.14;  // 18-19 desetinny cisel

float desetinne_mensi = 3.14f; // pouze 6-7 desetinny cisel

char znaky = 'A';

bool logicke = true;

std::string string = "Hello, World!";  // trida pro praci s retezci znaku 
char string2[] = "Toto je muj prvni text z promnene mojeDefinice";  // pole znaku

// void nic = 12; nevrati vysledek

// int* pointer = &cislo; // ukazatel na promennou cislo

auto auto_cislo = 12; // automaticky typ cislo
/*
stl = standard template library stardartní knihovna v c++
endl = end of line ukonci radu neco jako /n v pythonu

ted se chci ucit cpp protoze je to pokrocilejsi jazyk a je podobny pythonu

= je prirazeni
== je porovnani
*/

const int mojeNepromnenaPromenna = 5; // nejde zmenit hodnotu stejne jako v c

void mojeDefinice() { 
    cout << string2 << endl;
}

void hlavniCast() {
    
    int a = 5;
    int b = 10;

    if (a == b) {
        cout << "Hodnoty jsou stejné." << endl;
    } else {
        cout << "Hodnoty nejsou stejné." << endl;
    }


    int x = 2;

    while (x < 3) {
        cout << "While loop" << endl;
        x = 4;
    }
    
    for (int i = 0; i < 5; i++) {
    if (i == 3) {
        cout << "i je rovno 3." << endl;
    }
    }
    
    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default: // kdyz zadne z case neodpovida vyplni se default
        break;
        
    }
    // Outputs "Thursday" (day 4)

    int i = 0;
    do { // do se vyplni pred while i kdyz while neni True
    cout << i << "\n";
    i++;
    }
    while (i < 5);

    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};  // Nejde pridat do pole nemuze se jim menit hodnota
    cout << cars[0] << endl;

    // A vector with 3 elements
    vector<std::string> cars1 = {"Volvo", "BMW", "Ford"};  // Jde pridat pomoci knihovny vector
  
  // Adding another element to the vector
    cars1.push_back("Tesla");
    
    int cisla[3] = {1, 2, 3};
    cout << sizeof(cisla) << endl;  // vypise 12 jako bitu protoze int = cca. 4 bity a 3*4=12 tzn. 3 data v poli


    std::string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    cout << letters[0][2] << endl;  // Vypise "C"


    struct {  // vytvari strukturu
    int myNum;
    std::string myString;
    }

    myStructure;

    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";


    class Mojetrida { // trida a nazev tridy
        public: // urceni public, private nebo protected
            
            void mymethod(const std::string& text) {
                cout << "ahoj z prommnene" << endl << text << endl;
        }
            
    }; // ! tadyy se za tridou musi psat strednik

        Mojetrida objekt;
        objekt.mymethod("Tento text bude vypsan ze tridy.");


    
    ofstream MyFile("filename.txt"); //vytvori a otevre soubor

    MyFile << "Files can be tricky, but it is fun enough!"; //zapise do souboru
    
    MyFile.close(); // Close the file
    }

int main() {
    auto start = std::chrono::high_resolution_clock::now(); // zacal se pocitat cas

    cout << "Ahoj, muj prvni C++ program!" << endl;
    cout << "Takto muze vypadat novy radek \n";
    cout << "takto muze vypadat novy radek" << "\n" << "ahoj \n"; // << funguje jako plus v pythonu na strings tzn string << string2 = string string2
    mojeDefinice(); // je dulezite napsat zavorky...
    
    
    cin >> string2; // ziskava input
    cout << string2 << endl;
    
    cout << "Chces vypsat hlavniCast? (Y/N): " << endl;
    char odpoved;
    cin >> odpoved;
    if (odpoved == 'Y' or 'y') { // jde i pouzit || misto or
        hlavniCast();

    }

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start);

    std::cout << "Operace trvala: " << duration.count() << " s" << std::endl;

    return 0;
}
