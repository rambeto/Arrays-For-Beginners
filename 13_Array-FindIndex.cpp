#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify code.

// ========================================
// Function: RandomNumber
// Purpose: Generates a random integer within the inclusive range [From, To].
// Parameters:
//   - From : Lower bound of the range.
//   - To   : Upper bound of the range.
// Returns:
//   - A random integer between From and To.
// ========================================
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// ========================================
// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with random integers between 1 and 100.
// Parameters:
//   - arr       : Destination array (capacity 100).
//   - arrLength : Reference variable storing number of elements.
// ========================================
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// ========================================
// Function: PrintArray
// Purpose: Prints all elements of an integer array.
// Parameters:
//   - arr       : Array to print.
//   - arrLength : Number of elements in the array.
// ========================================
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

// ========================================
// Function: FindNumberPositionInArray
// Purpose: Searches for a number in an array using Linear Search.
// Parameters:
//   - Number    : Value to search for.
//   - arr       : Array to search in.
//   - arrLength : Number of elements in the array.
// Returns:
//   - Index of the number if found.
//   - -1 if the number does not exist.
// ========================================
int FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }

    return -1;
}

// ========================================
// Function: ReadNumber
// Purpose: Prompts the user to enter a number to search for.
// Returns:
//   - The number entered by the user.
// ========================================
int ReadNumber()
{
    int Number;

    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;

    return Number;
}

// ========================================
// Main Function
// Purpose: Demonstrates filling an array with random numbers,
//          printing it, searching for a value, and displaying
//          the position if found.
// ========================================
int main()
{
    srand((unsigned)time(NULL)); // Seed random generator

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements:\n";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;

    int NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    if (NumberPosition == -1)
        cout << "The number is not found :-(\n";
    else
    {
        cout << "The number found at position: " << NumberPosition << endl;
        cout << "The number found its order  : " << NumberPosition + 1 << endl;
    }

    return 0;
}
