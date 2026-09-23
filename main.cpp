#include <iostream>
#include <string>
#include <cctype>

using namespace std;

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


int main(){

    char letters[256];
    bool beginningAchieved = false;
    cout << "Enter a string:" << endl;
    cin.getline(letters, 256);
    
    cout << "Initialism of: " << letters << "\"" << endl;
    cout << createInitialism(letters) << endl;
    return 0;
}

/*
g++ main.cpp -o app.exe

 example input to test this program

*/