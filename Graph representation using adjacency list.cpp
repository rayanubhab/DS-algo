
//Whole code runs on online compiler but gives error in dev c++
//An array of list is used , the size of array is equal to the number of vertices

#include<iostream>
#include<list>

using namespace std;

class Graph{
	
	int V;
	//Pointer to an array of list since V is not known to us at compile time it will be known to us at run time
	//l is basically a pointer to an arraywhose every element is a list
	
	list<int> *l;
public:
	Graph(int V){
		//For setting V
		this->V = V;
		
		l = new list<int>[V]; 
	}
	
	//Function to add an edge between two vertices x and y
	void addEdge(int x, int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	void printAdjList(){
		
		//Iterate over all the vertices
		
		for(int i=0;i<V;i++){
			cout<< " Vertex "<<i<<"-> ";
			
			//Iterate over the ith list for every vertex
			//auto keyword auto specifies the data type
			
			for(auto nbr:l[i]){
				
				cout<< nbr <<" , ";
			}
			//Move to the next line after every vertex
			cout<<endl;
		}
	}
};

int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,2);
	g.addEdge(2,3);
	g.printAdjList();
	return 0;
}
