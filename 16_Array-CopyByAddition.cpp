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
// Purpose: Fills an array with random numbers between 1 and 100.
// Parameters:
//   - arr       : Destination array.
//   - arrLength : Reference variable that stores the number of elements.
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
// Purpose: Prints all elements of an array.
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
// Function: AddArrayElement
// Purpose: Adds a new element to the end of the array.
// Parameters:
//   - Number    : Value to add.
//   - arr       : Target array.
//   - arrLength : Reference to the current array length.
// Behavior:
//   - Inserts the element at the last position.
//   - Updates the array length.
// ========================================
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arr[arrLength] = Number;
    arrLength++;
}

// ========================================
// Function: CopyArrayUsingAddArrayElement
// Purpose: Copies all elements from a source array to a destination array
//          using AddArrayElement.
// Parameters:
//   - arrSource            : Source array.
//   - arrDestination       : Destination array.
//   - arrLength            : Number of elements in the source array.
//   - arrDestinationLength : Reference variable storing destination length.
// ========================================
void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

// ========================================
// Main Function
// Purpose: Demonstrates copying elements from one array to another
//          using a helper function that dynamically adds elements.
// ========================================
int main()
{
    srand((unsigned)time(NULL));  // Seed the random number generator.

    int arr[100];
    int arrLength = 0;

    // Fill the first array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    // Copy array1 into array2
    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}
