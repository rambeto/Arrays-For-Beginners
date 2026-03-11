#include <iostream>   // For input/output operations
#include <cstdlib>    // For rand() and srand()
#include <ctime>      // For time()
using std::cin;
using std::cout;
using std::endl;

// Maximum size of the array
const int MAX_SIZE = 100;

/**
 * @brief Generates a random integer within the inclusive range [From, To]
 * 
 * @param From Lower bound of the range
 * @param To Upper bound of the range
 * @return int A random integer between From and To
 */
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

/**
 * @brief Fills an array with random integers between 1 and 100
 * 
 * Prompts the user to enter the number of elements to generate,
 * then fills the array with random integers.
 * 
 * @param arr Array to store random numbers
 * @param arrLength Reference variable to store the number of elements
 */
void FillArrayWithRandomNumbers(int arr[], int &arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    if (arrLength > MAX_SIZE)
    {
        cout << "Number of elements exceeds MAX_SIZE (" << MAX_SIZE << "). Limiting to MAX_SIZE.\n";
        arrLength = MAX_SIZE;
    }

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

/**
 * @brief Prints the elements of an array
 * 
 * @param arr Array to print
 * @param arrLength Number of elements in the array
 */
void PrintArray(const int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/**
 * @brief Copies elements from a source array to a destination array
 * 
 * @param arrSource Array to copy from
 * @param arrDestination Array to copy into
 * @param arrLength Number of elements to copy
 */
void CopyArray(const int arrSource[], int arrDestination[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
}

/**
 * @brief Main function: Program entry point
 */
int main()
{
    srand(static_cast<unsigned>(time(nullptr))); // Seed random number generator

    int arr[MAX_SIZE];   // First array
    int arrLength;       // Number of elements to fill

    // Fill the first array with random numbers
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[MAX_SIZE];  // Second array to copy elements into

    // Copy elements from the first array to the second array
    CopyArray(arr, arr2, arrLength);

    // Display the first array
    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength);

    // Display the copied second array
    cout << "\nArray 2 elements after copy: ";
    PrintArray(arr2, arrLength);

    return 0;  // Successful execution
}
