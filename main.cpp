#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    char letters[256];
    bool beginningAchieved = false;
    cout << "Enter a string:" << endl;
    cin.getline(letters, 256);
    
    cout <<"Initialism:"<<endl;
    int i = 0;

    //skip spaces at the beginning of the string
    while(beginningAchieved == false && letters[i] == ' '){
        i++;
    }
    beginningAchieved = true;    //we found the first char of the string
    cout<< (char)toupper(letters[i]); // first char of the string is printed in uppercase

    while(letters[i] != ' ' && letters[i] != '\0'){ 
        i++; //skip the letters in the word
        if(letters[i] == ' '){
            i++; //skip the space
            cout<< (char)toupper(letters[i]);
        }
    }

    cout << endl;

    return 0;
}

/*

  example input to test this program

*/