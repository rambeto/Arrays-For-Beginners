#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify function calls.

// ==========================
// Function: RandomNumber
// Purpose: Generates a random integer within the inclusive range [From, To].
// Parameters:
//   - From: The lower bound of the range.
//   - To:   The upper bound of the range.
// Returns: A random integer between From and To.
// ==========================
int RandomNumber(int From, int To)
{
    // Generate a random number using modulus and shift by 'From' to get the correct range.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// ==========================
// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and validates input.
//          The function keeps asking until the user enters a number > 0.
// Parameters:
//   - Message: A string containing the prompt to display.
// Returns: A positive integer entered by the user.
// ==========================
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);  // Repeat until a positive number is entered

    return Number;
}

// ==========================
// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with random integers between 1 and 100.
// Parameters:
//   - arr: An integer array with maximum capacity of 100.
//   - arrLength: The number of elements to fill.
// ==========================
void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// ==========================
// Function: SumOf2Arrays
// Purpose: Computes the element-wise sum of two arrays and stores the result in a third array.
// Parameters:
//   - arr1: First source array.
//   - arr2: Second source array.
//   - arrSum: Destination array to store the sums.
//   - arrLength: Number of elements in the arrays.
// ==========================
void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrSum[i] = arr1[i] + arr2[i];
}

// ==========================
// Function: PrintArray
// Purpose: Prints the elements of an integer array separated by spaces.
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
// Purpose: Demonstrates reading a positive number, filling arrays with random numbers,
//          computing the element-wise sum, and printing the results.
// ==========================
int main()
{
    srand((unsigned)time(NULL));  // Seed the random number generator

    int arr[100], arr2[100], arrSum[100];  // Declare three arrays
    int arrLength = ReadPositiveNumber("How many elements?\n");  // Number of elements to use

    // Fill the first two arrays with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    // Compute the sum of the two arrays
    SumOf2Arrays(arr, arr2, arrSum, arrLength);

    // Print the arrays
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}

