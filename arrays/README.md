# 📚 Arrays - DSA Questions Collection

> A beautifully organized collection of array-based DSA problems with multiple approaches.

---

## 📋 Question Index

| # | Problem | Approach | Time | Space | File |
|---|---------|----------|------|-------|------|
| 01 | Largest Element in Array | Linear Scan | O(N) | O(1) | `01_largest_element.cpp` |
| 02 | Second Largest Element | Brute Force (Two Pass) | O(N) | O(1) | `02_second_largest_element.cpp` |
| 03 | Second Largest & Smallest | Optimal (Single Pass) | O(N) | O(1) | `03_second_largest_smallest_optimal.cpp` |
| 04 | Remove Duplicates | Brute Force (Set) | O(NlogN) | O(N) | `04_remove_duplicates_brute.cpp` |
| 05 | Remove Duplicates | Optimal (Two Pointer) | O(N) | O(1) | `05_remove_duplicates_optimal.cpp` |
| 06 | Left Rotate by One | Iterative | O(N) | O(1) | `06_left_rotate_by_one.cpp` |
| 07 | Rotate by D Places | Brute Force | O(N*D) | O(1) | `07_rotate_by_d_brute.cpp` |
| 08 | Rotate by D Places | Better (Temp Array) | O(N) | O(D) | `08_rotate_by_d_better.cpp` |
| 09 | Rotate by D Places | Optimal (Reversal) | O(N) | O(1) | `09_rotate_by_d_optimal.cpp` |
| 10 | Move Zeroes to End | Two Pointer | O(N) | O(1) | `10_move_zeroes_to_end.cpp` |
| 11 | Union of Sorted Arrays | Brute Force (Set) | O(NlogN) | O(N) | `11_union_sorted_arrays_brute.cpp` |
| 12 | Union of Sorted Arrays | Optimal (Two Pointer) | O(N1+N2) | O(N1+N2) | `12_union_sorted_arrays_optimal.cpp` |
| 13 | Intersection of Sorted Arrays | Optimal (Two Pointer) | O(N1+N2) | O(1) | `13_intersection_sorted_arrays_optimal.cpp` |
| 14 | Intersection of Sorted Arrays | Brute Force (Visited) | O(N1*N2) | O(N2) | `14_intersection_sorted_arrays_brute.cpp` |
| 15 | Missing Number | Optimal (XOR) | O(N) | O(1) | `15_missing_number_xor.cpp` |
| 16 | Max Consecutive Ones | Linear Scan | O(N) | O(1) | `16_max_consecutive_ones.cpp` |
| 17 | Single Number (XOR) | Optimal (XOR) | O(N) | O(1) | `17_single_number_xor.cpp` |
| 18 | Longest Subarray Sum K | Brute Force | O(N²) | O(1) | `18_longest_subarray_sum_k_brute.cpp` |
| 19 | Longest Subarray Sum K | Better (Hashing) | - | - | `19_longest_subarray_sum_k_better.cpp` |
| 20 | Longest Subarray Sum K | Optimal (Sliding Window) | O(2N) | O(1) | `20_longest_subarray_sum_k_optimal.cpp` |
| 21 | Two Sum | Better (Hashing) | O(NlogN) | O(N) | `21_two_sum_hashing.cpp` |
| 22 | Two Sum (Sorted) | Optimal (Two Pointer) | O(N) | O(1) | `22_two_sum_two_pointer.cpp` |
| 23 | Sort 0s 1s 2s | Dutch National Flag | O(N) | O(1) | `23_sort_012_dutch_flag.cpp` |
| 24 | Majority Element (>N/2) | Better (Hashing) | O(NlogN) | O(N) | `24_majority_element_n2_hashing.cpp` |
| 25 | Majority Element (>N/2) | Optimal (Moore's Voting) | O(N) | O(1) | `25_majority_element_n2_moores.cpp` |
| 26 | Max Subarray Sum | Kadane's Algorithm | O(N) | O(1) | `26_kadanes_algorithm.cpp` |
| 27 | Buy & Sell Stock | Dynamic Programming | O(N) | O(1) | `27_best_time_buy_sell_stock.cpp` |
| 28 | Rearrange by Sign (Equal) | Optimal | O(2N) | O(N) | `28_rearrange_by_sign_equal.cpp` |
| 29 | Rearrange by Sign (Unequal) | Optimal | O(2N) | O(N) | `29_rearrange_by_sign_unequal.cpp` |
| 30 | Next Permutation | Optimal | O(3N) | O(1) | `30_next_permutation.cpp` |
| 31 | Leaders in Array | Right to Left Scan | O(N) | O(N) | `31_leaders_in_array.cpp` |
| 32 | Longest Consecutive Sequence | Better (Sorting) | O(NlogN) | O(1) | `32_longest_consecutive_sequence_sorting.cpp` |
| 33 | Longest Consecutive Sequence | Optimal (Unordered Set) | O(3N) | O(N) | `33_longest_consecutive_sequence_optimal.cpp` |
| 34 | Set Matrix Zeroes | Optimal (In-place) | O(N²) | O(1) | `34_set_matrix_zeroes.cpp` |
| 35 | Rotate Matrix 90° | Transpose + Reverse | O(N²) | O(1) | `35_rotate_matrix_90.cpp` |
| 36 | Spiral Traversal | Boundary Shrinking | O(R*C) | O(R*C) | `36_spiral_traversal_matrix.cpp` |
| 37 | Count Subarrays Sum K | Prefix Sum + HashMap | O(N) | O(N) | `37_count_subarrays_with_sum_k.cpp` |
| 38 | Pascal Triangle Element | nCr Formula | O(C) | O(1) | `38_pascal_triangle_element.cpp` |
| 39 | Pascal Triangle Row | Formula Based | O(C) | O(1) | `39_pascal_triangle_print_row.cpp` |
| 40 | Pascal Triangle Full | Row Generation | O(R²) | O(R²) | `40_pascal_triangle_generate.cpp` |
| 41 | Majority Element (>N/3) | Extended Moore's Voting | O(2N) | O(1) | `41_majority_element_n3.cpp` |
| 42 | Three Sum | Brute Force | O(N³) | O(triplets) | `42_three_sum_brute.cpp` |
| 43 | Three Sum | Better (HashSet) | O(N²logN) | O(N) | `43_three_sum_better.cpp` |
| 44 | Three Sum | Optimal (Two Pointer) | O(N²) | O(triplets) | `44_three_sum_optimal.cpp` |
| 45 | Four Sum | Optimal (Two Pointer) | O(N³) | O(quads) | `45_four_sum.cpp` |
| 46 | Count Subarrays XOR K | Prefix XOR + HashMap | O(N) | O(N) | `46_count_subarrays_xor_k.cpp` |

---

### 🏷️ Topics Covered
- 🔍 Searching & Finding Elements
- 🔄 Array Rotation & Manipulation
- 🤝 Two Pointer Technique
- 📊 Sliding Window
- 🗺️ Hashing & HashMaps
- ⊕ Bit Manipulation (XOR)
- 📐 Matrix Operations
- 🔺 Pascal Triangle
- 🏆 Greedy / Dynamic Programming

---

*Organized from arrays.cpp practice file*
