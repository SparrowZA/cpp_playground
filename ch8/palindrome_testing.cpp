/*
 * Exercise 8-8 Palindrome Testing Program
 */
#include <iostream>
#include <string>
// #include <cctype>

std::string EX_STRINGS[] =  {
    "Able was I ere I saw Elba.",
    "I Love Me, Vol. I.",
    "Madam, I'm Adam.",
    "A man, a plan, a canal, Panama.",
    "Rats live on no evil star.",
    "radar",
    "deed",
    "mom",
    "racecar",
    "Death"
};

// std::string EX_STRINGS[] =  {
//     "I Love Me, Vol. I."
// };

std::string PUNCTION[] = {
    ".",
    ",",
    "'",
    "!"
};

void swap (char& v1, char& v2);
// Interchanges the values of v1 and v2

std::string reverse(const std::string& s);

std::string removePunct(const std::string& s, const std::string& punct);

std::string makeLower(const std::string& s);

bool isPalindrome(const std::string& s);

int main(){
    using namespace std;
    string value1;
    bool isPal = false;
    // Check each sentence
    for(int i=0; i < size(EX_STRINGS); i++){
        value1 = EX_STRINGS[i];
        // Make each letter lower case
        value1 = makeLower(value1);
        // Remove punction
         for(int j=0; j < size(PUNCTION); j++){
            value1 = removePunct(value1, PUNCTION[j]);
        }
        // Reverse the string
        // value1 = reverse(value1);
        // Check if palindrome
        isPal = isPalindrome(value1);

        if(isPal){
            cout << "\"" << EX_STRINGS[i] << "\"" << " is a palindrome.";
        }
        else{
            cout << "\"" << EX_STRINGS[i] << "\"" << " is not palindrome.";
        }
        std::cout << endl;
    }
    return 0;
}

std::string reverse(const std::string& s){
    // You cannot 
    std::string newStr = "";
    int len = s.length();
    for(int i=len-1; i >= 0; i--){
        newStr += s[i];
    }
    return newStr;
}

std::string makeLower(const std::string& s){
    std::string newStr = "";
    for(int i=0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 96){
            // newStr.push_back(s[i] + 32);
            newStr += s[i] + 32;
        }
        else{
            // newStr.push_back(s[i]);
            newStr += s[i];
        }
    }
    return newStr;
}

std::string removePunct(const std::string& s, const std::string& punct){
    int i = s.find(punct);
    std::string newStr = s;
    while(i != std::string::npos){
        newStr.erase(i);
        i = newStr.find(punct);
    }
    return newStr;
}

bool isPalindrome(const std::string& s){
    bool result = false;
    std::string reverseStr = reverse(s);
    if(s == reverseStr){
        result = true;
    }
    return result;
}