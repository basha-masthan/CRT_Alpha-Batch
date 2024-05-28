====GRAPHS====
--------------
.In data structures a graph is a collection of vertices(also called nodes)and edges(also called arcs)that connect pairs of vertices
---->Key Components:
.Vertices(Nodes):The fundamental units of a graph that can represent entities such as points,objects or locations
.Edges(Arcs):The connections between pairs of vertices that can represent relationships,pathways or interactions between the entities
---->Graphesn are:
>Used in the design of computer networks
>To implement routing system in airlines
>To find the shortest path in computer networks
>The web pages are connected like graph in websites
====GRAPH TECHNOLOGIES:
* DIRECTED GRAPH (DIAGRAPH)
            => A graph in which edges have a direction,indicated by an arrow,showing the relationship from one vertex 
*UNDIRECTED GRAPH: A graph in which edges have no direction meaning the relationship is bidirectional (e.g, a two-way street)
*WEIGHTED GRAPH:Edges have associated weights or costs,representing values such as distance,time or capacity
*UNWEIGHTED GRAPH:Edges donot have weights and represent simple connections between vertices
*SIMPLE GRAPH:A graph without loops (edges connecting a vertex to itself)and multiple edges between the same pair of vertices
*MULTI GRAPH:A graph that may have multiple edges(parallel edges)between the same pair of vertices
*CONNECTED GRAPH:An undirected graph in which there in which there is a path between every pair of vertices
*DISCONNECTED GRAPH:An undirected graph with atleast one pair of vertices that are not connected by path
*CYCLIC GRAPH:A graph containing atleast one cycle(a path that starts and ends at the same vertex)
*ACYCLIC GRAPH:A graph without cycles.a tree is an example of an acyclic graph
*BIPARTITE GRAPH:A birpartite graph is a specific type of graph in which every edge in the graph connects a vertex in one set to a vertex in the other set
*COMPLETE BIPARTITE GRAPH:A complete bipartite graph is a special type of bipartite graph where every vertex in one set is connected to every vertex in the other set
*PLANAR GRAPH:A planar graph is a graph that can be drawn on a plane without edges crossing eachother
..................................
====GRAPH REPRESENTATIONS====
---->Adjacency matrix representation
---->Adjacency list representation
---->Incidence matrix representation

1)Adjacency Matrix Representation:

---->DIRECTED GRAPH
     	|   A   B   C   D   E
-----------------------------------
	|  
   A    |   0   1   0   1   0
   B    |   0   0   0   0   1
   C    |   1   0   0   1   0
   D    |   0   1   0   0   0
   E	|   0   0   0   1   0


---->UNDIRECTED GRAPH

     	|   A   B   C   D   E
-----------------------------------
	|  
   A    |   0   1   1   1   0
   B    |   1   0   0   1   1   
   C    |   1   0   0   1   0
   D    |   1   1   1   0   1
   E	|   0   1   0   1   0

3)INDEX MATRIX REPRESENTATION:
c  0 0 0 0  0 1 0 [e6]
d  0 0 1 0 0 0 0 [e3]
e 0 0 0 0 0 0 0  

.............................
====SPANNING TREE====
--------------------------
.A spanning tree is a subset of graph G which has all the vertices covered with minimum possible number of edges and it does not have cycles
---->FINDING SHORTEST PATH
-------------------------------
A-----C\
|     |  \
|     |    E
|-----D/  /


EDGE:(A,B),(A,C),(A,D),(B,D),(C,D),(C,E)
WEIGHTS:4,4,3,5,2,3
 sorted edges according to weights are:
EDGES:(C,D),(C,E),(A,D),(A,B),(A,C),(D,E),(B,D)
WEIGHTS:2,3,3,4,4,4,5
A      C
| \    |  \
|  \  |     \
B      D     E

......................
====DFS[DEPTH FIRST SEARCH]====
-----------------------------
ALGORITHM:
1.Create a stack for the vertices.
2.Pick a starting vertex,visit it,and push it onto the stack.
3.Find an unvisited neighbor of the top vertex,visit it and push it onto the stack.
4.Keep doing this until no new neighbours are found.
5.If no new neighbours,pop the vertex from the stack.
6.Repeat steps 3-5 until the stack is empty.
7.The visited vertices from the spanning tree, remove any unused
..............................................
====BFS[BREADTH FIRST SEARCH]====
----------------------------------------
ALGORITHM:
1.Create a queue for the vertices.
2.Pick a starting vertex,visit it,and insert it into the queue.
3.Visit all unvisited neighbors of the front vertex and insert them into the queue
4.If there are no new neighbours,remove  the vertex from the queue.
5.Repeat steps 3 and 4 until the queue is empty.
6.Once the queue is empty,the visited vertices from the spanning tree, remove unused edges.99