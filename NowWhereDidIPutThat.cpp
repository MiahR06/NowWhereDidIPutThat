#include <iostream>
#include <string>
using namespace std;

// I couldn't figure out how to get this to work with the header file

int find(string str, char c);
int find(string str, string substr);

int main(){

    string text = "The quick brown fox";

    cout << find(text, 'e') << endl;
    cout << find(text, "e") << endl;
    cout << find(text, ' ') << endl;
    cout << find(text, "quick") << endl;
    cout << find(text, "quiet") << endl;

}

int find(string str, char c){
    for (int i=0; i<str.length(); i++){
        if (str[i] == c){
            return i;
        }
    }
    return -1;
}

// This function doesn't work, I don't know what to do here
int find(string str, string substr){

    int index = 0;

    for (int i=0; i<str.length(); i++){
        if (str[i] == substr[index]){
            i++;
            index++;
            if (str[i+1] != substr[index+1]){
                return -1;
            }
        }
    }
    return -1;
}