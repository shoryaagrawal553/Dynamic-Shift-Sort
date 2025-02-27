# 🔄 Dynamic Shift Sort

Welcome to **Dynamic Shift Sort**! This repository documents a unique sorting algorithm that shifts elements dynamically to achieve sorting in a distinctive manner. Unlike traditional sorting techniques, this method follows a different approach to element comparison and shifting.

---

## 📝 Description
Dynamic Shift Sort is a novel sorting algorithm that arranges elements by dynamically shifting larger values forward instead of following traditional sorting patterns. Unlike Bubble Sort or Selection Sort, it utilizes a unique approach to comparison and swapping, potentially offering different performance characteristics under various conditions.

---

## 📂 Overview
This repository includes:

- A detailed explanation of Dynamic Shift Sort.
- Complexity analysis.
- Comparisons with other sorting algorithms.
- Potential optimizations and improvements.
- Steps to implement and test the algorithm.

---

## 🔍 How It Works
1. The algorithm iterates through the array.
2. It compares each element with all subsequent elements.
3. If `arr[i] < arr[j]`, elements are swapped to shift larger values forward.
4. This process continues until the array is sorted in descending order.

---

## 📊 Complexity Analysis
- **Best Case (Already Sorted in Descending Order):** O(n²)
- **Worst Case (Ascending Order Input):** O(n²)
- **Average Case Complexity:** O(n²)

---

## 🔄 Comparison with Other Sorting Algorithms
### 🔹 Selection Sort
- **Similarities**: Both iterate through the array and perform swaps.
- **Differences**: Selection Sort finds the minimum/maximum in each iteration, whereas Dynamic Shift Sort shifts elements dynamically.

### 🔹 Bubble Sort
- **Similarities**: Both involve adjacent comparisons and swaps.
- **Differences**: Bubble Sort swaps adjacent elements iteratively, while Dynamic Shift Sort compares non-adjacent elements dynamically.

### 🔹 Insertion Sort
- **Similarities**: Both involve placing elements in their correct order through shifting.
- **Differences**: Insertion Sort shifts elements one by one, whereas Dynamic Shift Sort makes multiple comparisons within a single iteration.

---

## 🚀 Getting Started

1. **Clone this repository**:  
   ```bash
   git clone https://github.com/Dynamic-Shift-Sort.git
   ```
2. **Navigate to the directory**:  
   ```bash
   cd Dynamic-Shift-Sort
   ```
3. **Compile and test the algorithm**:  
   Use a C++ compiler like GCC to compile and execute the program.
   ```bash
   g++ dynamic_shift_sort.cpp -o dynamic_shift_sort
   ./dynamic_shift_sort
   ```

---

## 🌟 Features

- A unique sorting algorithm with a different approach.
- Explanation of working, complexity, and comparison with other sorts.
- Open for optimizations and improvements.

---

## 🤝 Contributions

Contributions are welcome! If you'd like to enhance the algorithm or provide further analysis, feel free to submit a pull request.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

## 📧 Contact

For questions or suggestions, reach out to:
- **GitHub**: shoryaagrawal553 (https://github.com/shoryaagrawal553)

---

Happy Coding! 🎉

