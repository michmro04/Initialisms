#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

//funkcja do skrótów
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
        cout << "[PASSED]" << testName << endl;
        passedCount++;
    } else {
        cout << "[FAILED]" << testName << endl;
        cout << "Expected: " << expected << endl;
        cout << "Actual: " << actual << endl;
        failedCount++;
    }
}

//główna funkcja
int main(){





    return 0;
}