#include <iostream>

using namespace std;
int CountWhiteSpace(string s){

    int n = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ')
            n++;

    }
    return n;
}

void OutputWithoutWhitespace(string s){
    int n = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' ')
            cout << s[i];

    }
}
int main(){

    char phrase[9999];
    string nwsPhrase;
    int wSpaces;
    
    
    cout << "Enter a sentence or phrase:" << endl;
    cin.getline(phrase, sizeof(phrase));
    wSpaces = CountWhiteSpace(phrase);
    cout << endl << "You entered: " << phrase<< endl;

    cout << "Whitespace count: " << wSpaces<< endl;
    
    cout << "String with no whitespace: ";
    OutputWithoutWhitespace(phrase); 
    cout << endl;
    return 0;
}