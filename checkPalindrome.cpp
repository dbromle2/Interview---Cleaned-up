//DSB 19 May 2022
//Thales interview test code
//cleaned up post-interview

#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

//Function to take a string input and check whether it is a palindrome (eg. "tacocat")
void checkPalindrome(string textIn){
    //declarations
    int len = textIn.length();
    string reverse;
    for (int i = 0; i < len; i++){
        reverse += textIn[len - (i+1)];
    }

    if (reverse == textIn) cout<<"\"" + textIn + "\" is a palindrome!\n";
    else cout<<"\"" + textIn + "\" is not a palindrome!\n";
}

int main() {
    //take string
    //test if palindrome

    //Gather inputs, run test on string
    string text;
    while (1){
        cout<<"input your word: ";
        cin>>text;
        //check for exit conditions
        if (text == "0" || text == "bye" || text == "exit") return 0;
        checkPalindrome(text);
        cout<<"\n";
    }
}