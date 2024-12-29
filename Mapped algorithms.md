# I. New skill development center
Our city Goutham is surrounded by a few small villages, who are skilled in traditional agriculture,
forest product collection and craftsmanship. Hence, building new skill development centres would further 
help the citizens to improve their skills, and the children can learn these skills if they are required to.

## Algorithms/DS that can be used:
### 1. Array:
An array is a collection of elements, typically of the same type, stored in contiguous memory locations.
A list is a more flexible data structure than an array, 
often allowing for dynamic resizing. Lists can store elements of different types

Where: To store the list of courses, trainers and participants for each skill development center.

Situation: To quickly access the course details or participant data for administrative purposes.

Example: An array of participant names indexed by their training ID.

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Array.cpp

### 2.Bubble sort:
Where: Sort the list of participants based on their performance in a course.

Situation: Ranking participants after a skill assessment for certifications.

Example: Sort participants' scores to identify the top performers.

Efficiency:O(n²)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Bubble%20sort.cpp

### 3.BFS:
An Algorithm to traverse through graph data struture. Known as cautious traversal
Where: Use BFS to find the shortest path from a participant's village to the nearest training center.

Situation: A participant from a village needs to know the best route to attend the training.

Example: For a participant in Village A, find the nearest skill center in Goutham city.

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/BFS.cpp

Efficiency: O(n^2)
### 4.Heap:
A heap is a tree-based data structure with the heap property,
where each parent node is greater (max-heap) or smaller (min-heap) than its children.

Where: Implement a priority queue to distribute itmes like books, training kits, or equipment.

Situation: Centers with new candidates are prioritized to receive resources.

Example: A max-heap storing participant counts for each center helps quickly find the 
center with the highest demand.

Efficiency: O(nlogn). 

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Heap.cpp

### 5.Boyer-Moore Algorithm:
Where: Searching participant records in large datasets.

Situation: Quickly find a candidate's name from a large list using pattern matching.

Example: If the training center has 1000 candidates, Boyer-Moore 
can quickly locate the record of someone named "boyer".

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Boyer_Moore.cpp


# II. Utilizing the Woman Workforce
Almost 90% of the women in the nearby villages are unemployed/homemaker. 
Hence, an industry which is suited for women workforce would be a good business case idea. 
ex:A Textile industry.

## Algorithms/DS that can be used:
### 1.List:
Where: Maintain a dynamic list of women joining the workforce (prioritize as required).

Situation: Adding or removing names as women join or leave employment programs.

Example: A list of women working in the textile industry, updated as they join or leave.

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Linked_list.c

### 2. Trie:
A Trie is a specialized tree-like data structure used for dealing with applications
involving search operations like autocomplete, dictionary lookups.

Where: Search for an employee's details.

Situation: Employees are be added or removed frequently.

example: Searching an employee's address.

Efficiency: O(l) where l is length of string.

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Trie.cpp

### 3. Hashing:
Hashing algorithms are methods used to map data 
(such as a string, number, or any type of object) to a fixed-size value called a hash value.

Where: Store and retrieve data like employee ID mapped to job roles.

Situation: Quickly find a worker’s role during salary issue or resource allocation.

Example: A hash map with keys as employee IDs and values as their job roles.

Efficiency:(avg case)

Insertion:O(1)

search:O(1)

Delete:O(1)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Hashing.cpp

### 4. Insertion sort:
Where: Sort the list of women based on productivity, attendance, years of experience, etc.

Situation: Ranking workers for promotions or selecting the best performers.

Example: Sort an array of productivity scores to identify top workers.

Efficiency: O(n^2)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Insertion_sort.cpp

### 5.Prim's Algorithm:
Prim's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a connected, undirected graph with weighted edges
Where: Finding quickest path from village to Industries.

Situation: Minimize transportation or setup costs by creating a network of industries and warehouses.

Example: Use Prim's to connect Industries to different villages.

Efficiency: O(|E|log|V|)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Prims.cpp

# Small Scale Industry
The locals of this region are expertise in bamboo crafts, wood carving and traditional embroidery. 
Building small scale industries mass producing their products carries high potential for a business.
## Algorithms/DS that can be used:

### 1. Binary Tree:
Where: Represent designers and their products in a hiererchical structure.

Situation: A tree structure can help organize designers based on their skill set or product categories.

Example: A binary tree where each node represents a category 
(ex: bamboo crafts) and subcategory (ex: bamboo baskets).

Efficiency: O(n log n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/BST.cpp


### 2.Merge sort:
Where: Sort products by demand, price, or production date for efficient inventory management.

Situation: Before listing products on an e-commerce platform, organize them for better visibility.

Example: A merge sort algorithm sorts products from highest to lowest demand.
Efficiency: O(n log n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Merge%20sort.cpp

### 3. DFS:
An algorithm for traversing a graph data structure.

Where: Find all the employees in hierarchial order.

Situation: finding the employees aorking under a team leader.

Example: Rewarding bonus to all employees working under a ceratin team leader.

Efficiency: O(v^2) [v = no. of vertices]

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/DFS.cpp

### 4.Kruskal's Algorithm:
Kruskal's algorithm is a well-known greedy algorithm used to find the 
Minimum Spanning Tree (MST) of a connected, undirected graph.

Where: Minimize the cost of connecting production centers to warehouses.

Situation: Create an efficient supply chain network by connecting production centers with 
minimum transport cost.

Example: Use Kruskal’s algorithm to connect a bamboo production unit with a warehouse efficiently.

Efficiancy: With union find algorithm, the efficiency depends on sorting algorithm. 
Hence efficiency is O(|E|log|E|)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/kruskal.cpp

# Agricultural produce transport
The farm products need to be transported to nearby APMCs, through trucks. 
Currently, trucks are scarce, and the price increases dramatically during high demand. 
Introducing a transportation company would be highly successful. 
Now, as the trucks are readily available, the prices can be maintained to a certain extent, 
while providing employment.

## Algorithms/DS that can be used:
### 1. Dijkstra's Algorithm:
Dijkstra's Algorithm is a well-known greedy algorithm used for finding the shortest path from a source vertex to all other vertices in a weighted graph (where the weights are non-negative).

Where: Plan routes for trucks to transport goods to APMCs efficiently.

Situation: Minimize transportation time and fuel costs by finding the shortest path.

Example: Compute the shortest path between a farm in Village A and APMC in Goutham city.

Efficiency: O(|E|log|V|)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Dijkstra's.cpp

### 2.Queue:
A Queue is a type of data structure that stores elements with associated priorities. 
In a priority queue, each element has a priority value, and the element with the highest 
priority is dequeued first

Where: Manage loading and unloading of trucks at warehouses or APMCs.

Situation: Prevent overcrowding during peak seasons by processing requests in order.

Example: Use a queue to simulate trucks waiting in line for unloading.

Efficiency:

Insertion: O(1)

Deletion: O(1)

Search: O(n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Queue.cpp

### 3. Selection sort:

Where: Sort transportation requests based on factors like distance or urgency.

Situation: Prioritize farm produce that needs immediate transportation (ex: milk).

Example: Sort transportation requests by distance from farm to APMC.

Efficiency: O(n^2)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Selection_sort.cpp

### 4. Rabin Karp Algorithm:
String search algorithms are used to find a substring or pattern inside a string or text.

Where: Search for specific patterns in transporttion records, like truck IDs or dates.

Situation: Find entries related to a specific truck driver or truck in large datasets.

Example: Search for occurrences of “KA25LO2910” in the record.

Efficiency:

Worst case: O(nm)

Average:O(n+m)

Where n is length of text and m is length of pattern

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Rabin_carp.cpp


### 5. Stack:
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. 

Where: Loading goods into trucks.

Situation: A truck needs to be loaded with several different goods having multiple destinations.

Example: Load the goods according to their destinations (earlier the destination, later the loading).

Efficiency:

push:O(1)

pop:O(1)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Stack.cpp

# Manufacturing locomotives
The barren land available in the region is around 13%-15%. 
A railway workshop exists in a nearby village known as “Dahod”. 
Upgrading this facility to manufacture locomotives or coaches creates high employment. 
Indian railways are searching for new plant sites, making this the perfect opportunity.

## Algorithms/DS that can be used:
### 1.Union-Find Algorithm:
The Union-Find structure is particularly useful in applications where you need to efficiently manage
and query dynamic connectivity, such as in graph algorithms 

Where: Grouping manufacturing units or manage railway tracks.

Situation: determine if two manufacturing facilities belong to the same network.

Example: Use Union-Find to merge two facilities when they are operationally connected.

Efficiency: O(n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/kruskal.cpp

(The above mentioned code utilizes union find algorithm)

### 2.Fenwick Tree:
Fenwick tree works on the concept of isolating the last bit and is efficient in processing of range queries.

Where: Track stats like total locomotives produced monthly,total material obtanied.

Situation: Quickly calculate the total number of items produced/obtained up to a certain date.

Example: Use a Fenwick Tree to store daily production counts and query cumulative 
production for the last month.

Efficiency: O(log n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/Fenwick_tree.cpp


### 3.Warshall's Algorithm:
Based on the principle of Kleene's Theorom.
Where: Plan railway connectivity between facilities or stations.

Situation: Determine the shortest route between any two manufacturing sites for material transport.

Example: Use Warshall’s algorithm to optimize the movement of raw materials from storage to assembly.

Efficiancy: O(n^3)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Warshal.cpp

### 4.Floyd's Algorithm:
The Floyd-Warshall algorithm is an algorithm used to find the shortest paths between all pairs of nodes in a weighted graph.

Where: Optimizing layouts and routes within the manufacturing plant.

Situation: Identify the shortest routes between different workstations.

Example: Use Floyd’s algorithm to minimize transportation time for parts within the facility.

Efficiency: O(n^3)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Algorithms/Floyd.cpp


### 5.Binary Search:
Binary Search is an efficient algorithm for finding an item from a sorted list or array.

Where: The data is stored in binary tree

situation: The data of manufactured coaches or to be manufactured coaches.

Example: Find the employees' details associated with coach "AK-320".

Efficiency: Best case: O(1)

Worst case & Avg case: O(log n)

Sample code: https://github.com/SamarthMallapur/DAA-Repo/blob/main/Codes/Data%20structures/BST.cpp


# Codes implemented with files:
https://github.com/SamarthMallapur/DAA-Repo/tree/main/codes%20with%20files
