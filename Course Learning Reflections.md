Course Learning Reflections:

==> What are the kinds of problems we see in the nature? (iteration, recursion, backtracking)

    nature showcases many problems to which the ultimate solution includes iteration,recursion or back-tracking.

    here are more details about the solution approaches and their examples:

        ITERATION IN NATURE:
            Iteration is the process of solving a problem which includes solving the problem repeatedly in a form of cycles until the condition is satisfied or the problem is solved.

            here are few examples of iteration we can see in nature:

                -> Heartbeat
                -> Breathing
                -> Photosynthesis
                -> Day-night cycle
                -> Water cycle
                -> Seasonal changes
        
        RECURSION IN NATURE:
            Recursive method of solving problem involves the need of previous instance result to solve the current instance.
            that is, to solve an instance of the problem, the result of previously solved instances are required. the best example for this recursion method would be to compute the fibonacci series.

            here are few examples of recursion we can see in nature:
                -> Rivers branching into smaller streams towards the end
                -> Blood vessels branching into smaller artileries to distribute blood to every part in our body
                -> Bronchi in our lungs splitting into smaller bronchioles to enhance gas exchange
                -> Roots of a tree branching into smaller roots, increasing surface area for drawing in water and minerals
                -> Hydra reproduces through budding, which is recursive
            
        BACKTRACKING IN NATURE:
            Backtracking is a method of solving problem by checking into each paths and terminating the paths which do not yield the required result.

            here are few examples of backtracking we can see in nature:
                -> Ants mark the feasible path so that other ants can abandon the paths with weak markings
                -> Branches of a tree tend to change their path if they face any obstacle
                -> Rivers tend to abandon the path which has low slope gradient
        

==> What is space and time efficiency? Why are they important? Explain the different class of problems and orders of growth

    Time Efficiency is the time required to execute an algorithm which is represented by the number of basic operations performed(The lesser the better)
    Best case(Ω): The fastest time taken to complete.
    Worst case(𝜭): The slowest time taken to complete.
    Average case(O): the average time taken to complete.



    Space Efficiency is the extra memory required by an algorithm (The lesser the better)

    The efficiency of an algorithm plays a huge role during its application in real world.
    A good algorithm must be resource efficient, time efficient and scalable.

    Complexity Classes:

        Big-Oh(O) is a Notation used to describe the upper bound of an algorithm's efficiency:

        ->  O(1) - Constant Time
            It has fixed runtime regardless of input size
            Example: Arithmetic operations

        ->  O(log n) - Logarithmic Time
            the Runtime grows logarithmically
            Example: balanced tree operations

        ->  O(n) - Linear Time
            Runtime grows linearly with input size
            Example: Traversal of an array

        ->  O(n log n) - Linearithmic Time
            Runtime is higher than n but lower than n²
            Example: Heap sort

        ->  O(n²) - Quadratic Time
            Nested iterations 
            Example: Bubble sort

        ->  O(2ⁿ) - Exponential Time
            Runtime doubles every extra input 
            Examples: Recursive Fibonacci, Recursive Tower of Brahma

        ->  O(n!) - Factorial Time
            Runtime is factorial 
            Examples: Traveling salesman problem (brute force approach)

    Orders of Growth:
        O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)

==> Take away from different design principles from chapter 2:
    In chapter 2, we came across many design principles which helped us to better understand the thought process for building these algorithms.

    A few examples are:

        ->  Bit Manipulation:
            Fenwick tree is based on this principle.

        ->  Sliding Window:
            each substring is compared with key(required string) until a match is found.

        ->  Pattern Recognition:
            Algorithms used for searching strings recognise patterns in the string, thus skipping over multiple characters at once when a different pattern is observed.

        ->  Pruning:
            A branch or path not leading to desired result is cut off or abandoned(N queen problem).
        
        ->  Edge Relaxation:
            An edge in given graph is said to be relaxed if its computed to be a part of solution.

        ->  Brave and Cautious Traversal:
            DFS and BFS are common graph traversal methods which use these principles.
        
        ->  Level Order Traversal:
            Tree operations were performed in this method.

        ->  Balancing and Rotations:
            Skewness in red-black trees and AVL trees were eliminated using these principles.

        ->  Lazy Propagation:
            A variable is updated only when it needs to be accessed.


==> The Hierarchical data and how different tree data structures solve and optimize over the problem scenarios (tree, bst, avl, 2-3, red-black, heap, trie)

    ->  Binary Search Tree:
        used for insertion, deletion and fast lookup.
        Pros: Beginner friendly.
        cons: Can become unbalanced, leading to O(n) operations in the worst case.

    ->  AVL Tree:
        A variant of BST where the maximum difference between two leaf nodes is 1 level.
        Pros: Guarantees O(log n) time for search, insertion, and deletion.
        Cons: requires rebalancing operations.

    ->  2-3 Tree:
        A variant of BST where each parent node can have upto 3 children nodes.
        Pros: Provides consistent height, making operations predictable and efficient.
        Cons: Time efficiency of Insertion, Deletion is relatively more.

    ->  Red-Black Tree:
        A variant of BST which ensures the tree is balanced after every insertion, deletion and maintaining logarithmic height.
        Pros: Efficient insertion and deletion (O(log n)) with fewer rotations compared to AVL.
        Cons: Complex implementation.

    ->  Heap:
        Finds the smallest or largest element efficiently.
        Pros: Used in algorithms like Dijkstra's and O(log n) for insertions and deletions.
        Cons: Needs to be heapified after every insertion and deletion of nodes.

    ->  Trie:
        used to store dictionaries.
        Pros: Minimizes redundancy and search time.
        Cons: Highly space in-efficient.

==> The need of array query algorithms and their implications. Their applications and principles need to be discussed

    Array query algorithms play a vital role in industrial level applications of array data structures, where the data is huge and even linear traversal is in-efficient.
    
    BIT index tree is an array query algorithm where the required data is pre-computed and is stored in form of tree, improving the access time.
    
    FENWICK trees is an array query algorithm where the required data is pre-computed and stred in an array,where a single access is enough to compute the required result.
    
    
    Note: These algorithms prove helpful only in large scale applications, typically on arrays of size around 10^9.

==> Differentiate between tree and graphs and their traversals. The applications of each

    Trees: Trees are efficient data structures that follow an upside down tree pattern.
    The topmost node is known as root node,which acts as the main node of a tree.
    The root address is sufficient to traverse through the whole tree.
    Examples: AVL Tree, Binary Search Tree, 2-3 tree.

    Graphs: Graphs are data structures which have nodes connected to each other in unspecified format.
    They have cycles among the nodes.
    The nodes in the graphs can be accessed in multiple ways.
    The root does not exist.
    A node can be considered as source and all other nodes can be accessed using this node.
    Examples: Directed Graph, Weighted Graph.

    Basically, Acyclic graphs are trees.

    TREE TRAVERSAL:
        Pre-order traversal: The parent node comes first, then the left child node, and then the right child node.
        In-order traversal: The left child node comes first, then the parent node, and then the right child node.
        Post-order traversal: The left child node comes first, then the right child node, and then the parent node.

        NOTE:The in-order traversal of a Binary Tree returns the sorted array.

    GRAPH TRAVERSAL:
        Depth First Search (DFS): Traverse deeper into a branch until the branch ends or result is found(BRAVE TRAVERSAL).
        Breadth First Search (BFS): Traverse through all the possible child branches and then traverse through the first child until the branch ends or result is found (CAUTIOUS TRAVERSAL).

==>Deliberate on sorting and searching algorithms, the technique behind each and how they connect to the real world.

    sorting and searching algorithmsa are essential for day to day smooth operation of huge databases around the world.
    SORTING ALGORITHMS:
    
    Bubble sort: Every element is compared and sorted.
    Selection sort: number of swaps are lesser compared to bubble sort.
    Insertion sort: Derives its motivation from gamblers problem, which inserts elements based on values as per required shifts.
    Merge sort: Sorting algorithm that follows the divide and conquer rule.
    Quick sort: Sorting algorithm that starts with selection of pivot and partitioning the array in sub arrays and then rearranging those elements.

    SEARCHING ALGORITHMS:

    Linear search: Searches the given array in linear form, comparing each element until match is found.
    Binary search: Divides the array several times , compares the element and then merges back. has better time efficiency than linear search.

==>Discuss the importance of graph algorithms with respect to spanning trees and shortest paths.

    Graph algorithms has mainly two applications, spanning trees and shortest paths, which help in network connectivity and other parts of networking. Spanning tree algorithms like Kruskal’s, Prim’s help in optimizing a network with minimum edges and reducing the overall cost in scenarios where efficiency matters. Shortest path algorithm like Dijakstra’s, Warshall’s, Floyd’s are useful for finding an efficient route between 2 nodes. It is used in GPS system, routing etc.
    
==>Discuss the different studied algorithm design techniques.

    The design techniques we have studied are:
    1. Backtracking: Exploring all possible solutions and discarding the solution which does not satisfy result. It is used in N-queens problems and solving of a sudoku.
    2. Divide and conquer: A problem is divided into sub-problems and finally merged to get the end result. The technique is followed by merge sort and quick sort algorithms.
    3. Brute force string search: A trial and error approach is used to find final solution. Algorithms like Boyer-Moore, Knuth-Morris-Pratt etc. follow this technique.
    4. Greedy techniques: To find the shortest path between two nodes in a weighted graph, this technique can be used. Dijakstra’s algorithm, prim’s algorithm, etc. Follow this technique.
