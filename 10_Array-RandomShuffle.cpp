#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// ==========================
// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number.
//          Repeats until a valid positive number (>0) is entered.
// Parameters:
//   - Message: The prompt message to display.
// Returns: A positive integer entered by the user.
// ==========================
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

// ==========================
// Function: Swap
// Purpose: Swaps the values of two integers.
// Parameters:
//   - A: Reference to the first integer.
//   - B: Reference to the second integer.
// ==========================
void Swap(int& A, int& B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

// ==========================
// Function: FillArrayWith1toN
// Purpose: Fills an array with sequential numbers from 1 to N.
// Parameters:
//   - arr: Array to fill (capacity 100).
//   - arrLength: Number of elements to fill.
// ==========================
void FillArrayWith1toN(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

// ==========================
// Function: RandomNumber
// Purpose: Generates a random integer in the inclusive range [From, To].
// Parameters:
//   - From: Lower bound of the range.
//   - To:   Upper bound of the range.
// Returns: A random integer between From and To.
// ==========================
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// ==========================
// Function: ShuffleArray
// Purpose: Randomly shuffles the elements of an array.
// Parameters:
//   - arr: Array to shuffle.
//   - arrLength: Number of elements in the array.
// ==========================
void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;
        Swap(arr[index1], arr[index2]);
    }
}

// ==========================
// Function: PrintArray
// Purpose: Prints all elements of an array separated by spaces.
// Parameters:
//   - arr: Array to print.
//   - arrLength: Number of elements in the array.
// ==========================
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// ==========================
// Main Function
// Purpose: Demonstrates filling an array with sequential numbers,
//          printing it, shuffling it randomly, and printing the shuffled array.
// ==========================
int main()
{
    srand((unsigned)time(NULL));  // Seed random number generator

    int arr[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements: ");

    // Fill array with numbers 1 to arrLength
    FillArrayWith1toN(arr, arrLength);

    cout << "\nArray before shuffle:\n";
    PrintArray(arr, arrLength);

    // Shuffle the array randomly
    ShuffleArray(arr, arrLength);

    cout << "\nArray after shuffle:\n";
    PrintArray(arr, arrLength);

    return 0;
}
