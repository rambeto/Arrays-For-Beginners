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

  ### 7. Basic Array Copy
- **File:** `Array-CopyBasic.cpp`
- **Goal:** Copy all elements from a source array into a destination array.
- **Logic:** Iterates through the source array and assigns each value to the corresponding index in the destination array.
- **Advanced Features:** - **Memory Protection:** Uses `const int arrSource[]` to prevent accidental modification of the original data.
    - **Scalability:** Designed to handle up to `MAX_SIZE` elements efficiently.
- **Technical Skills:** Array Assignment, Memory Safety, and Loop-based Data Transfer.

  
---
1. **Clone the repo:**
   ```bash
   git clone [https://github.com/YourUsername/Cpp-Array-Mastery.git](https://github.com/YourUsername/Cpp-Array-Mastery.git)
