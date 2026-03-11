#include <iostream>  // For input/output operations
using std::cin;
using std::cout;
using std::endl;
using std::string;

// Maximum size of the array
const int MAX_SIZE = 100;

/**
 * @brief Reads a positive integer from the user
 * 
 * Keeps asking until the user enters a number greater than zero.
 * 
 * @param message The prompt message to display
 * @return int The positive number entered by the user
 */
int ReadPositiveNumber(const string& message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);  // Repeat until a positive number is entered

    return number;
}

/**
 * @brief Reads array elements from the user
 * 
 * First asks for the number of elements, then reads each element.
 * 
 * @param arr Array to store the elements
 * @param arrLength Reference variable to store the number of elements
 */
void ReadArray(int arr[], int& arrLength)
{
    arrLength = ReadPositiveNumber("\nEnter number of elements: ");

    if (arrLength > MAX_SIZE)
        arrLength = MAX_SIZE;  // Limit array size to MAX_SIZE

    cout << "\nEnter array elements:\n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }

    cout << endl;
}

/**
 * @brief Prints the elements of the array
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
 * @brief Counts how many times a specific number appears in the array
 * 
 * @param number The number to check
 * @param arr The array to search in
 * @param arrLength Number of elements in the array
 * @return int The count of occurrences
 */
int TimesRepeated(int number, const int arr[], int arrLength)
{
    int count = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == number)
            count++;
    }

    return count;
}

int main()
{
    int arr[MAX_SIZE];      // Array to store user input
    int arrLength;          // Number of elements entered by the user
    int numberToCheck;      // Number to count in the array

    // Read array elements
    ReadArray(arr, arrLength);

    // Read the number to check frequency
    numberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    // Print the original array
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // Print how many times the number appears in the array
    int frequency = TimesRepeated(numberToCheck, arr, arrLength);
    cout << "\nNumber " << numberToCheck
         << " is repeated "
         << frequency
         << " time(s)." << endl;

    return 0;
}
