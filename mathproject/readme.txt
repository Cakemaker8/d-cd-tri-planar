This project can take in a graph from a text file, analyze it, and say what it found for domination and connection domination.  The graphs used are stored in the graphs file and were generated with plantri, and the results from those graphs are stored in the results file.  The code for this project is called mathproject.cpp.


Overview of the code:
int main: This asks the user for what they want (either domination or connected domination, for vertices 6-18), calls the approriate function, and prints out the time it took to complete it.

void triangulations#: # ranges from 6-18.  This creates the buckets from the text file (based on the number of vertices the user asked for), calls the domination or connected domination function (based on what the user asked for), and can print the result of the graph and the overall result for the text file.  It does this one graph at a time.

void forTheGUI: This helps create the GUI.

vector<string> maker: This makes a power set for the vertices, based on the number of vertices (it will only make what is needed, from 6 vertices to 18).

string listMaker: First, it creates a power set based on what the buckets contain.  Then, it searches through the bucket containing the vertices from the function maker and finds elements that are a specific size (1 for d/cd 1, 2 for d/cd 2, etc).  It then stores this element in a new list called newVertex, then stores the equivalent element from the power set of the buckets into a new list called newGraph.  Once all elements of that specific size are found, it begins the run the domination or connected domination function on the simplified list.  It returns the both the domination/connected domination number and the vertex/vertices used.  It can check up to d/cd 5 completely, but only certain cases of 6.

string lengthOfLetter: Finds the size of the element in a list.

sortingString: Sorts a string.

removeDuplicates: Removes duplciate letters from a string.

compare1: Checks to see if the bucket used will work, based on size.

forConnected: Makes the buckets from list (this is useful in certain functions where the buckets are put together in a list, and need to be separated).

forCompare: Checks to see if a certain letter is in a string.

forConnected5: Used to create a list of edges.

forTraingles: Used to find traingles from edges.

connectedChecker2: Checks for connected domination 2 by seeing if one of the letters are found in the other's bucket.

connectedChecker3: Checks for connected domination 3 by seeing if one bucket contains the letters of the other two vertices (it repeats this for all cases).

connectedChecker4: Checks for connected domination 4 by seeing if one bucket contains the letters of the other three vertices (does this for all cases) or if they are in a line (one bucket contains the letter of another, which contains the letter of another, which contains the letter of another; does this for all cases).

connectedChecker5: Checks for connected domination 5 by finding the edges, finding the isolated vertices, checking the number of edges, and if this is equal to 4, checking for traingles.  If there are isolated vertices, it is not connected.  If the number of edges are less than or equal to 3, it is not connected.  If the number of edges are greater than or equal to 5, it is connected.  If the number of edges is equal to 4, and there are traingles, then it is not connected.  If there are not any traingles, it is connected.

connectedChecker6: Checks for some cases of connected domination 6 by finding the edges, finding the isolated vertices, checking the number of edges, and checking the size of the edges.  If there are isolated vertices, it is not connected.  If the number of edges is greater than or equal to 8, then it is connected.  If the number of edges is less than or equal to 4, it is not connected.  If the number of edges is equal to 5, 6, or 7, the program cannot do anything about this, since this funciton is not finished.


Sources:
https://www.geeksforgeeks.org/cpp-program-to-read-content-from-one-file-and-write-it-into-another-file/
https://www.w3schools.com/cpp/cpp_files.asp
https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/
https://www.geeksforgeeks.org/array-of-linked-list-in-c-cpp/
https://www.tutorialspoint.com/Read-whole-ASCII-file-into-Cplusplus-std-string
https://www.geeksforgeeks.org/sort-string-characters/
https://www.w3schools.com/cpp/cpp_strings_concat.asp
https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/
https://www.scaler.com/topics/remove-duplicates-from-string/
https://www.geeksforgeeks.org/how-to-find-the-minimum-and-maximum-element-of-a-vector-using-stl-in-c/
https://www.geeksforgeeks.org/power-set/
https://www.geeksforgeeks.org/different-ways-to-initialize-a-list-in-cpp-stl/
https://www.programiz.com/cpp-programming/list
https://www.geeksforgeeks.org/remove-duplicates-from-vector-in-cpp/