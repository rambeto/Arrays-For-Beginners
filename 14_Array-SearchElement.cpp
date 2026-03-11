#include <iostream>   // Include the iostream library for input/output operations.
using namespace std;  // Use the standard namespace to simplify code.

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
// Function: IsNumberInArray
// Purpose: Checks whether a number exists in the array.
// Parameters:
//   - Number    : Value to search for.
//   - arr       : Array to search in.
//   - arrLength : Number of elements in the array.
// Returns:
//   - true  if the number exists.
//   - false if the number does not exist.
// ========================================
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

// ========================================
// Main Function
// Purpose: Demonstrates generating an array of random numbers,
//          searching for a specific number, and checking if it exists.
// ========================================
int main()
{
    srand((unsigned)time(NULL));  // Seed the random number generator.

    int arr[100];
    int arrLength;

    // Fill array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements:\n";
    PrintArray(arr, arrLength);

    // Read number from user
    int Number = ReadNumber();
    cout << "\nNumber you are looking for is: " << Number << endl;

    // Check if number exists
    if (!IsNumberInArray(Number, arr, arrLength))
        cout << "No, The number is not found :-(\n";
    else
        cout << "Yes, it is found :-)\n";

    return 0;
}
