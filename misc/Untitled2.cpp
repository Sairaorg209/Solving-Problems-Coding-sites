#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    string word1,word2,suffix;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the first word: ";
    cin >> word2;
    int len1 = word1.size()-1;
    int len2 = word2.size()-1;
    int k=0;
    while(len1 >= 0 && len2 >= 0 && word1[len1] == word2[len2]) {
        len1--;
        len2--;
        k++;
    }
    suffix=word1.substr(word1.size()-k,k);
    cout << suffix;
    getch();
    return 0;
}
