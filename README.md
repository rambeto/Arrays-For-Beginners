# C++ Mastery: 19 Essential Array Algorithms 🚀

This repository is a comprehensive collection of C++ programs focusing on **Array Data Structures**, **Algorithm Logic**, and **Problem-Solving**. It covers a wide range of operations from basic manipulation to advanced logic.

## 📁 Project Structure

The project is organized into modular `.cpp` files, each addressing a specific programming challenge with clean, documented code.

### 📋 List of Challenges & Solutions

| # | Professional File Name | Description | Key Concept |
|:---|:---|:---|:---|
| 01 | `Array-ElementFrequency.cpp` | Count how many times each element appears. | Frequency Counting |
| 02 | `Array-RandomFill.cpp` | Automatically fill an array with random numbers. | Randomization |
| 03 | `Array-MaxNumber.cpp` | Find the maximum value within an array. | Search Algorithms |
| 04 | `Array-MinNumber.cpp` | Find the minimum value within an array. | Search Algorithms |
| 05 | `Array-SumElements.cpp` | Calculate the total sum of all elements. | Accumulation |
| 06 | `Array-AverageCalculation.cpp` | Calculate the mathematical average. | Statistics |
| 07 | `Array-CopyBasic.cpp` | Copying elements from one array to another. | Data Transfer |
| 08 | `Array-FilterPrimes.cpp` | Extract only prime numbers into a new array. | Number Theory |
| 09 | `Arrays-ElementWiseSum.cpp` | Sum of two arrays element by element. | Vector Addition |
| 10 | `Array-RandomShuffle.cpp` | Randomize the order of elements (Shuffle). | Random Algorithms |
| 11 | `Array-ReverseCopy.cpp` | Copy elements in a reversed sequence. | Reverse Indexing |
| 12 | `Array-KeyGenerator.cpp` | Generating an array of random security keys. | String Manipulation |
| 13 | `Array-FindIndex.cpp` | Find the position (index) of a specific element. | Linear Search |
| 14 | `Array-SearchElement.cpp` | Check if a specific value exists. | Boolean Logic |
| 15 | `Array-DynamicAppend.cpp` | Add elements to a static array semi-dynamically. | Dynamic Growth |
| 16 | `Array-CopyByAddition.cpp` | Copy arrays using a custom AddElement function. | Reusability |
| 17 | `Array-FilterOddNumbers.cpp` | Copying only odd numbers using logic filtering. | Logic Filtering |
| 18 | `Array-CopyPrimesAdvanced.cpp` | Advanced filtering for prime numbers. | Optimization |
| 19 | `Array-DistinctElements.cpp` | Copy only unique (distinct) elements. | De-duplication |

---

## 🔍 Featured Solutions (Detailed Breakdown)

### 1. Array Element Frequency
- **File:** `Array-ElementFrequency.cpp`
- **Goal:** Find how many times a specific number exists in an array.
- **Logic:** Uses a frequency counter and a loop to traverse the array.
- **Key Functions:** `ReadArray()`, `PrintArray()`, `TimesRepeated()`.

### 2. Random Array Generator
- **File:** `Array-RandomFill.cpp`
- **Goal:** Fill an array with random values within a specific range.
- **Advanced Features:** Includes size validation and professional Doxygen documentation.
- **Technical Skills:** `srand()`, `time()`, `static_cast`, and Constant Management.

### 3. Array Maximum Value Finder
- **File:** `Array-MaxNumber.cpp`
- **Goal:** Identify the largest value within a randomly generated array.
- **Logic:** Initializes a `max` variable with the first element and iterates through the array to compare and update.
- **Advanced Features:** Includes Doxygen style documentation and uses `const` parameters for memory safety.
- **Technical Skills:** Comparison Logic, Array Traversal, and Optimization.
## 🛠️ How to Compile and Run

### 4. Array Minimum Value Finder
- **File:** `Array-MinNumber.cpp`
- **Goal:** Identify the smallest value in a randomly filled array.
- **Logic:** Compares each element with a stored `min` variable, updating it whenever a smaller value is found.
- **Advanced Features:** Uses `const` pointers to ensure data safety and Doxygen style documentation.
- **Technical Skills:** Conditional Logic, Iteration, and Basic Optimization.

### 5. Array Elements Summation
- **File:** `Array-SumElements.cpp`
- **Goal:** Calculate the total sum of all randomly generated integers in an array.
- **Logic:** Initializes a `sum` accumulator to zero and iterates through the array, adding each element's value to the total.
- **Advanced Features:** - Constant parameters (`const int arr[]`) for memory safety.
    - Input validation to ensure the length doesn't exceed `MAX_SIZE`.
- **Technical Skills:** Arithmetic Operations, Accumulation Logic, and Loop Traversal.

### 6. Array Elements Average
- **File:** `Array-AverageCalculation.cpp`
- **Goal:** Calculate the mathematical average of all randomly generated integers in an array.
- **Logic:** Reuses the `SumArray()` function to get the total and then divides it by the array length.
- **Advanced Features:** - **Type Casting:** Uses `static_cast<float>` to ensure precise floating-point division.
    - **Modular Design:** Demonstrates function dependency (one function calling another).
- **Technical Skills:** Precision Handling, Mathematical Logic, and Function Reusability.
  
### 7. Basic Array Copy
- **File:** `Array-CopyBasic.cpp`
- **Goal:** Copy all elements from a source array into a destination array.
- **Logic:** Iterates through the source array and assigns each value to the corresponding index in the destination array.
- **Advanced Features:** - **Memory Protection:** Uses `const int arrSource[]` to prevent accidental modification of the original data.
    - **Scalability:** Designed to handle up to `MAX_SIZE` elements efficiently.
- **Technical Skills:** Array Assignment, Memory Safety, and Loop-based Data Transfer.

### 8. Prime Numbers Filtering
- **File:** `Array-FilterPrimes.cpp`
- **Goal:** Identify and copy only prime numbers from a source array into a destination array.
- **Logic:** - Uses a `CheckPrime()` function with an optimized loop (`i * i <= n`).
    - Iterates through the first array and conditionally adds elements to the second array based on primality.
- **Advanced Features:** - **Optimization:** Improved prime checking performance.
    - **Dynamic Counting:** `arr2Length` is updated only when a prime is found.
- **Technical Skills:** Number Theory, Conditional Data Transfer, and Algorithmic Efficiency.

### 9. Two-Array Element-wise Summation
- **File:** `Arrays-ElementWiseSum.cpp`
- **Goal:** Generate two random arrays and compute their sum into a third array.
- **Logic:** - Creates two arrays of the same length and fills them with random values.
    - Iterates through both arrays simultaneously, adding elements at the same index (`arrSum[i] = arr1[i] + arr2[i]`).
- **Advanced Features:** - **Parallel Processing:** Demonstrates how to handle multiple arrays in a single logic flow.
    - **Custom Input:** Uses `ReadPositiveNumber()` for dynamic array sizing.
- **Technical Skills:** Array Arithmetic, Multi-array Indexing, and Logic Scaling.

### 10. Random Array Shuffle
- **File:** `Array-RandomShuffle.cpp`
- **Goal:** Fill an array with sequential numbers (1 to N) and then randomly rearrange their order.
- **Logic:** - Uses a `Swap()` function to exchange values between two random indices.
    - Iterates through the array and performs multiple swaps to ensure a thorough shuffle.
- **Advanced Features:** - **Logical Separation:** Independent `Swap()`, `RandomNumber()`, and `ShuffleArray()` functions.
    - **Dynamic Interaction:** User defines the range, and the program handles the sequence generation and randomization.
- **Technical Skills:** Fisher-Yates-like Logic, Reference Passing (`int&`), and Random Indexing.

### 11. Array Reverse Copy (Pointer Based)
- **File:** `Array-ReverseCopy.cpp`
- **Goal:** Copy elements from a source array into a destination array in reverse order.
- **Logic:** - Uses **Pointer Arithmetic** (`int* p`) to traverse and fill the array.
    - Employs the formula `*(dest + i) = *(src + arrLength - 1 - i)` to achieve the reverse mapping.
- **Advanced Features:** - **Memory Navigation:** Demonstrates direct memory access using pointers instead of traditional indexing.
    - **Efficiency:** Optimized traversal for both filling and copying operations.
- **Technical Skills:** Pointer Arithmetic, Array Reversal, and Memory Management.

### 12. Random Key Generator & Array Storage
- **File:** `Array-KeyGenerator.cpp`
- **Goal:** Create a professional-grade license key generator (Format: XXXX-XXXX-XXXX-XXXX) and store multiple keys in a string array.
- **Logic:** - Uses an **Enumeration** (`enCharType`) to categorize character types (Letters, Digits, Specials).
    - Implements a modular approach: `GetRandomCharacter` -> `GenerateWord` -> `GenerateKey`.
    - Fills a string array with the generated keys for batch processing.
- **Advanced Features:** - **ASCII Mapping:** Direct translation of random integers to ASCII characters.
    - **String Manipulation:** Complex string concatenation and formatting.
    - **Scalability:** Easily adjustable key lengths and formats.
- **Technical Skills:** Enums, Switch-Case, String Arrays, and Seed-based Randomization.

  ### 13. Linear Search: Find Element Index
- **File:** `Array-FindIndex.cpp`
- **Goal:** Search for a specific number within a randomly generated array and return its exact location.
- **Logic:** - Implements the **Linear Search Algorithm** by iterating through the array and comparing each element with the target value.
    - Returns the index `i` if found, or `-1` to indicate the element does not exist.
- **Advanced Features:** - **Zero-based vs One-based Indexing:** Displays both the technical index (Position) and the human-readable order.
    - **Early Exit:** The function returns immediately upon finding the number, optimizing performance.
- **Technical Skills:** Search Algorithms, Conditional Branching, and Index Management.

### 14. Array Membership Search
- **File:** `Array-SearchElement.cpp`
- **Goal:** Check if a specific value exists in an array and return a boolean result (`true`/`false`).
- **Logic:** - Reuses the `FindNumberPositionInArray()` function to avoid code duplication.
    - Implements a wrapper function `IsNumberInArray()` that returns `true` if the index is not `-1`.
- **Advanced Features:** - **Modular Architecture:** Demonstrates how complex functions can be built upon simpler helper functions.
    - **Clean Interface:** Provides a simple "Yes/No" output for the end user.
- **Technical Skills:** Boolean Logic, Function Re-use (DRY Principle), and Logic Wrapping.

### 15. Semi-Dynamic Array Element Addition
- **File:** `Array-DynamicAppend.cpp`
- **Goal:** Allow the user to populate an array by adding elements one by one until they decide to stop.
- **Logic:** - Implements the `AddArrayElement()` function, which inserts a value at the current `arrLength` and then increments the length.
    - Uses a `do-while` loop to maintain an interactive session with the user.
- **Advanced Features:** - **Reference Management:** Uses `int& arrLength` to keep track of the array's size across different functions.
    - **Interactive Flow:** High-level user interaction with boolean-driven loop control.
- **Technical Skills:** Dynamic-like Data Growth, Reference Parameters, and Interactive Loop Design.

### 16. Professional Array Copying (Using AddElement Logic)
- **File:** `Array-CopyByAddition.cpp`
- **Goal:** Copy all elements from a source array to a destination array using a modular "AddElement" approach.
- **Logic:** - Instead of traditional index-to-index copying (`arr2[i] = arr1[i]`), it calls the `AddArrayElement()` function.
    - This abstracts the index management of the destination array, making the code cleaner and less prone to off-by-one errors.
- **Advanced Features:** - **Code Reusability:** Leverages helper functions to perform complex tasks.
    - **Modular Design:** Isolates the logic of "adding" from the logic of "looping".
- **Technical Skills:** Function Abstraction, DRY Principle, and Multi-array Synchronization.

  

### 17. Odd Numbers Filtering (Dynamic Copy)
- **File:** `Array-FilterOddNumbers.cpp`
- **Goal:** Extract only the odd numbers from a source array into a new destination array.
- **Logic:** - Traverses the source array and applies the modulo operator (`% 2 != 0`).
    - Uses the `AddArrayElement()` helper to build the second array without needing a separate counter in the main loop.
- **Advanced Features:** - **Conditional Copying:** Demonstrates logical filtering of data sets.
    - **Dynamic Indexing:** Efficiently handles destination arrays of unknown final lengths.
- **Technical Skills:** Modulo Operations, Logic Filtering, and Modular Array Construction.

### 18. Advanced Prime Number Filtering
- **File:** `Array-CopyPrimesAdvanced.cpp`
- **Goal:** Extract all prime numbers from a randomized source array and store them in a separate array.
- **Logic:** - Integrates a dedicated `CheckPrime()` function using an efficient `Number/2` limit.
    - Utilizes an **Enum** (`enPrimeNotPrime`) for clearer code readability and semantic meaning.
    - Employs the `AddArrayElement()` strategy to build the second array conditionally.
- **Advanced Features:** - **Semantic Coding:** Using Enums instead of magic numbers (0, 1) for logic states.
    - **Modular Reusability:** Combines mathematical algorithms with array manipulation helpers.
- **Technical Skills:** Enumerations, Primality Testing, and Conditional Array Re-construction.

### 19. Data De-duplication (Distinct Elements)
- **File:** `Array-DistinctElements.cpp`
- **Goal:** Copy only unique (distinct) numbers from a source array that contains multiple duplicates.
- **Logic:** - Iterates through the source array and checks if the current element already exists in the destination array using `IsNumberInArray()`.
    - If the element is not found (meaning it's new), it is added using `AddArrayElement()`.
- **Advanced Features:** - **Logical Integration:** High-level reuse of search and append functions.
    - **Data Integrity:** Ensures no redundant data occupies memory in the new array.
- **Technical Skills:** Algorithmic Thinking, Data Cleansing, and Multi-function Coordination.
  
---
1. **Clone the repo:**
   ```bash
   git clone [https://github.com/YourUsername/Cpp-Array-Mastery.git](https://github.com/YourUsername/Cpp-Array-Mastery.git)
