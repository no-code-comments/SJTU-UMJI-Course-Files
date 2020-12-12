# Basic Sort Algorithm

| **Algorithm**  | **Average**   | **Best**         | **Worst**        | **Space**   | Memory    | **Stability** |
| -------------- | ------------- | ---------------- | ---------------- | ----------- | --------- | ------------- |
| Bubble Sort    | $O(n^2)$      | $O(n)$           | $O(n^2)$         | $O(1)$      | In-place  | Stable        |
| Selection Sort | $O(n^2)$      | $O(n^2)$         | $O(n^2)$         | $O(1)$      | In-place  | Unstable      |
| Insertion Sort | $O(n^2)$      | $O(n)$           | $O(n^2)$         | $O(1)$      | In-place  | Stable        |
| Hill Sort      | $O(n \log n)$ | $O(n \log ^2 n)$ | $O(n \log ^2 n)$ | $O(1)$      | In-place  | Unstable      |
| Merge Sort     | $O(n \log n)$ | $O(n \log n)$    | $O(n \log n)$    | $O(n)$      | Out-place | Stable        |
| Quick Sort     | $O(n \log n)$ | $O(n \log n)$    | $O(n^2)$         | $O(\log n)$ | In-place  | Unstable      |
| Heap Sort      | $O(n \log n)$ | $O(n \log n)$    | $O(n \log n)$    | $O(1)$      | In-place  | Unstable      |
| Counting Sort  | $O(n + k)$    | $O(n + k)$       | $O(n + k)$       | $O(k)$      | Out-place | Stable        |
| Bucker Sort    | $O(n + k)$    | $O(n + k)$       | $O(n^2)$         | $O(k)$      | Out-place | Stable        |
| Radix Sort     | $O(kn)$       | $O(kn)$          | $O(kn)$          | $O(n + k)$  | Out-place | Stable        |

# Fibonacci Heap

extractMin: $O(\log n)$ 

other algorithm: $O(1)$

## extractMin

remove the min node and put its children into the root list.

Start checking the children number of each node, if there exists two node having same number of children, then merge (and recurse)

## decreaseKey

if not violating the min heap, then do nothing

if violating the min heap, then cut the node to the root list

if one node lose child at a second time, cut it to the root list (and recurse)

# Binary Search Tree

| Data Structure     | Insert      | Search      | Remove      |
| ------------------ | ----------- | ----------- | ----------- |
| Linked List        | $O(n)$      | $O(n)$      | $O(n)$      |
| Sorted Array       | $O(n)$      | $O(\log n)$ | $O(n)$      |
| Hash Table         | $O(1)$      | $O(1)$      | $O(1)$      |
| Binary Search Tree | $O(\log n)$ | $O(\log n)$ | $O(\log n)$ |

- sorted output — $O(n)$
- get min/max — $O(\log n)$
- get predecessor/successor — $O(\log n)$
- rank search — $O(\log n)$
- range search — $O(n)$



# Topological Sorting Algorithm

Assume adjacency list implementation — $O(|V| + |E|)$

# Prim’s Algorithm & Dijkstra’s Algorithm

linear scan — $O(|V|^2)$

binary heap with updating — $O((|V| + |E|)\log |V|)$

Best: Fibonacci heap — $O(|V|\log |V| + |E|)$



