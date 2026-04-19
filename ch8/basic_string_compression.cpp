/*
 * Goal: Optimize string storage using basic logic.
 *
 * Implement a function std::string compress(std::string input) that performs
 * basic run-length encoding. For example:
 *
 * Input: aaabbccccd
 *
 * Output: a3b2c4d1
 *
 * Constraint: If the "compressed" string is not actually shorter than the
 * original, return the original string.
 * 
*/
#include <iostream>
#include <string>
#include <chrono>


const std::string TEST_STR = "aaaabbbccd";
const std::string EXP_ANSWER = "a4b3c2d1";

const std::string TEST_STR2 = R"(AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDD
AAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCDDDAAABBBCCCD
DDXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXY
ZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYX
YZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZY
XYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZ
YXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZYXYZZ
YXYZZYXYZZYXYZZYXYZZYXYZZYXYZZY)";

struct{
    char letter;
    int count;
} letters;

void secondChance(const std::string s, int values[][2], int size);

int countOccurance(const std::string& str, const char c);

std::string getDistinct(const std::string& s);

int findDist(const int values[][2], const int value_size, int searchChar);


int main(){
    std::cout << "Application starting.\n";
    std::string newStr;
    std::string finalCompression;
    int count = 0;

    // Start clock timer
    auto start = std::chrono::steady_clock::now();
    newStr = getDistinct(TEST_STR2);
    for(int i=0; i < newStr.length(); i++){
        finalCompression.push_back(newStr[i]);
        count = countOccurance(TEST_STR2, newStr[i]);
        finalCompression.push_back(count + '0');
    }
    // End clock timer
    auto end = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    // Start clock timer
    start = std::chrono::steady_clock::now();
    int values[26][2];
    secondChance(TEST_STR2, values, 26);

    // End timer
     end = std::chrono::steady_clock::now();
    auto elapsed2 = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "The compressed string is " << finalCompression << std::endl;
    // std::cout << "The compressed string is " << finalStr << std::endl;
    std::cout << "First method took " << elapsed.count() << std::endl;
    std::cout << "Second method took " << elapsed2.count() << std::endl;
    std::cout << std::endl;
    return 0;
}

void secondChance(const std::string s, int values[][2], int size){
    // A 2D array, by convension the 2nd dimension 
    // is char, count.
    // int values[26][2];
    int currentRow = 0;
    for(int i=0; i < s.length(); i++){
        if(i == 0 || findDist(values, size, s[i]) == -1){
            values[currentRow][0] = s[i];
            values[currentRow][1] = 1;
            currentRow++;
        }
        else{
            int index = findDist(values, size, s[i]);
            int count = values[index][1] + 1;
            values[index][1] = count;
        }
    }
}

int findDist(const int values[][2], const int value_size, int searchChar){
    for(int i=0; i<value_size; i++){
        if(values[i][0] == searchChar){
            return i;
        }
    }
    return -1;
}

int countOccurance(const std::string& str, const char c){
    int count = 0;
    for(int i=0; i < str.length(); i++){
        if(str[i] == c){
            count += 1;
        }
    }
    return count;
}

std::string getDistinct(const std::string& s){
    std::string distinctValues = "";
    for(int i=0; i < s.length(); i++){
        // if it's the first iteration add it and continue
        if(i == 0)
            distinctValues.push_back(s[i]);
        else if(distinctValues.find(s[i]) == std::string::npos){
            distinctValues.push_back(s[i]);
        }
    }
    return distinctValues;
}
