# Conclusion

Both algorithms correctly sort the supplied input into:

102, 125, 147, 218, 275, 324, 389, 456

For large collections of fixed-length keys, an individual key comparison is bounded in cost, so the number and balance of sorting operations matter most.

Merge Sort is the safer choice when a guaranteed O(n log n) running time and stability are required, provided O(n) auxiliary memory is acceptable.

Quick Sort is attractive when memory is limited because it rearranges the array in place and has O(n log n) average time, but its simple last-element-pivot version can degrade to O(n²) on unfavourable input.

Therefore, use Merge Sort when predictability or stability is the priority. Use Quick Sort for memory-efficient in-memory sorting only with a robust pivot strategy when average-case performance is acceptable.
