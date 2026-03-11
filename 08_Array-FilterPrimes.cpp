#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Enumeration: enPrimNotPrime
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

// Function: CheckPrime
enPrimNotPrime CheckPrime(int Number)
{
    if (Number < 2) return enPrimNotPrime::NotPrime;
    for (int i = 2; i * i <= Number; i++)
    {
        if (Number % i == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

// Function: RandomNumber
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Function: FillArray
void FillArray(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements: ";
    cin >> arrLength;
    if (arrLength > 100) arrLength = 100; // Limit array size

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Function: CopyOnlyPrimeNumbers
void CopyOnlyPrimeNumbers(const int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length)
{
    arr2Length = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == Prime)
        {
            arrDestination[arr2Length] = arrSource[i];
            arr2Length++;
        }
    }
}

// Function: PrintArray
void PrintArray(const int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    int arr[100];
    int arrLength;
    FillArray(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;
    CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nPrime numbers in Array2:\n";
    PrintArray(arr2, arr2Length);

    return 0;
}
