#include <iostream>
using namespace std;

char print_reverse(char a[], int i)
{
    // Base case: If we reach the end of the string (indicated by the null terminator '\0'),
    // we stop the recursion and return the null terminator.
    // this acts as the 'exit point'
    if (a[i] == '\0')
    {
        return '\0'; // End of string
    }

    else
    {
        // Recursively calls print_reverse, moving forward in the string (i + 1).
        // This continues until we hit the base case.
        // You can imagine it like stacking up "calls" as we walk forward through the string,
        // and when we reach the end, we "unwind" by returning back through those calls.
        char ch = print_reverse(a, i + 1); // Recursion goes deeper until it hits the null terminator

        // When the recursive calls start unwinding, we print each character as we go back.
        cout << a[i]; // After reaching the end, characters are printed as the recursion unwinds
        return ch;
    }
}

int main()
{
    cout << "Enter a string:\n";

    char array[100] = {'\0'};
    cin.getline(array, 100);

    int i = 0;
    print_reverse(array, i);
}
