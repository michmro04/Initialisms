#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

//funkcja do skrotow
string createInitialism(const string& str){
    string result = "";
    bool newWord = true;

    for (char c : str){
        if(isspace(static_cast<unsigned char>(c))){
            newWord = true;
        }else if(newWord && isalpha(static_cast<unsigned char>(c))){
            result+=static_cast<char>(toupper(static_cast<unsigned char>(c)));
            newWord = false;
        }
    }
    return result;
}

//mechanizm asercji
int passedCount = 0;
int failedCount = 0;

void assertEqual(const string& testName, const string& expected, const string& actual){
    if(actual == expected){
        cout << "[PASSED] " << testName << endl;
        passedCount++;
    } else {
        cout << "[FAILED] " << testName << endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual: " << actual << endl;
        failedCount++;
    }
}

//glowna funkcja
int main(){
    cout << "Uruchomienie testow jednostkowych funkcji createInitialism" << endl;

    //testy jednostkowe
    assertEqual("Test 1: Same wielkie litery", "PTDTP", createInitialism("PRoBNY TEKST DO TESTOWANIA PROGRAMU"));
    assertEqual("Test 2: Same male litery", "PTDTP", createInitialism("probny tekst do testowania programu"));
    assertEqual("Test 3: Wielkie i male litery na poczatku i w srodku wyrazow", "PTDTP", createInitialism("ProBny teKsT Do teStoWAnia pRogRAmu"));
    assertEqual("Test 4: Kilka spacji na poczatku", "PTDTP", createInitialism("   probny tekst do testowania programu"));
    assertEqual("Test 5: Kilka spacji miedzy slowami", "PTDTP", createInitialism("probny           tekst     do  testowania   programu"));
    assertEqual("Test 6: Spacje na poczatku i miedzy slowami", "PTDTP", createInitialism("    probny   tekst       do  testowania   programu"));

    //podsumowanie
    cout << "==========================================================" << endl;
    cout << "Wynik:" << endl;
    cout << "Ilosc testow: " << passedCount + failedCount << endl;
    cout << "Pomyslne: " << passedCount << endl;
    cout << "Niepomyslne: " << failedCount << endl;
    return (failedCount == 0) ? 0 : 1;
}

/*
g++ test_runner.cpp -o test.exe


*/