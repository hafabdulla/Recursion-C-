
// Hafiz Abdullah
// Function to print asterisks based on the current row index

#include <iostream>
using namespace std;


void print(int i){
    // Base case: if i is 0, return
    if(i == 0){
        return;
    }

    // Print an asterisk
    cout << "* ";

    // Recursive call to print the next asterisk
    print(i - 1); 
}

// Function to print a pattern of rows of asterisks
void pattern(int n, int i){
    // Base case: if n is 0, return (stop recursion)
    if(n == 0)
        return;

    // Call print function to print 'i' asterisks
    print(i);
    // Move to the next line after printing the row
    cout << endl;

    // Recursive call to print the next row with one more asterisk
    pattern(n - 1, i + 1);
}

int main(){
    // Set the number of rows for the pattern
    int n = 5;
    pattern(n, 1);
}
