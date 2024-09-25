
// Recursive function to print numbers from 1 to n
// Hafiz Abdullah


#include <iostream> 
using namespace std;
void printnum(int n) 
{
    // Base case: If n is greater than or equal to 1, the recursion continues
    if (n >= 1)
    {
        printnum(n - 1); // Recursively call printnum with n-1 (this ensures we print numbers in increasing order)
        cout << n << " "; // After recursion reaches the base case (n == 0), start printing numbers on the way back,
    }

}

int main()
{
    int num; 
    cin >> num;

    printnum(num);
}
