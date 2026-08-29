// COMSC-210 | Lab 1 | Ahmad Dharhan

#include <iostream>
#include <string>
using namespace std;

//Vowel tracker increments when a vowel is detected
void vowel_tracker(string input);

int main() {

    string input;

    while (input != "CLOSE"){
        cout << "\nEnter ONLY ONE lowercase word and the number of "; 
        cout<< "vowels will be outputted.\n" << endl;
        cout << "\n";

        cin >> input;

        if (input == "CLOSE"){
            cout << "Thank You for participating!!!\n" << endl;
            break;
        }
        else{
            vowel_tracker(input);
        }

    }

    return 0;
}

//vowel_tracker(string input) searches for vowels
//arguments: <string input>
//returns: error message if no vowels and number of vowels if applicable
void vowel_tracker(string input){
    int vowel = 0;
    for (int i = 0; i < input.length(); i++){
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'){
            vowel += 1;
        }
    }

    if (vowel == 0){
        cout << "Your input was either invalid or contained 0 vowels! Try again!\n" << endl;
    }
    else{
        cout << "Numbers of vowels: " << vowel << "\n";
    }

}