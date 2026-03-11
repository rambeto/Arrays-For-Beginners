#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

// Maximum size of the array
const int MAX_SIZE = 100;

/**
 * @brief Generates a random integer within a range
 */
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

/**
 * @brief Fills an array with random integers
 */
void FillArrayWithRandomNumbers(int arr[], int& arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    if (arrLength > MAX_SIZE) arrLength = MAX_SIZE;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

/**
 * @brief Prints array elements
 */
void PrintArray(const int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << endl;
}

/**
 * @brief Adds an element to the destination array and increments its length
 */
void AddArrayElement(int Number, int arr[], int& arrLength)
{
    arr[arrLength] = Number;
    arrLength++;
}

/**
 * @brief Filters odd numbers from source array to destination array
 */
void CopyOddNumbers(const int arrSource[], int arrDestination[], int arrLength, int& arrDestLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        // Logic: If the number is odd, add it to the destination array
        if (arrSource[i] % 2 != 0)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestLength);
        }
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int arr1[MAX_SIZE], arr1Length = 0;
    int arr2[MAX_SIZE], arr2Length = 0;

    // 1. Fill the first array
    FillArrayWithRandomNumbers(arr1, arr1Length);

    // 2. Filter and copy odd numbers to the second array
    CopyOddNumbers(arr1, arr2, arr1Length, arr2Length);

    // 3. Print results
    cout << "\nOriginal Array (Array 1):" << endl;
    PrintArray(arr1, arr1Length);

    cout << "\nFiltered Array (Odd Numbers Only - Array 2):" << endl;
    PrintArray(arr2, arr2Length);

    return 0;
}
