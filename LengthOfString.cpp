
// Hafiz Abdullah
// Recursive function to find the length of a character array (string)

#include <iostream>
using namespace std;

int find_length(char a[], int s) {
    // Base case: if the current character is the null terminator ('\0'),
    // it means we've reached the end of the string, so return 0
    if(a[s] == '\0') {
        return 0;
    }
    // Recursive case: for each character that is not the null terminator,
    // return 1 (for the current character) plus the result of calling
    // find_length on the next character (s + 1)
    else {
        return 1 + find_length(a, s + 1);
    }
}

int main(){
    cout << "Enter a string:\n";
    char array[100] = {'\0'};

    cin.getline(array, 100);
    int l = find_length(array, 0);

    cout << "Length: " << l << endl;
}