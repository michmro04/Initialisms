#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    char letters[256];
    cout << "Enter a string:" << endl;
    cin.getline(letters, 256);
    
    cout <<"Initialism:"<<endl;
    for(int i = 0; letters[i] != '\0'; i++){
        if(letters[i] >= 'A' && letters[i] <= 'Z'){
            cout << (char)toupper(letters[i]);
        }
    }
    return 0;
}