#include <bits/stdc++.h> 
using namespace std; 
  
void printItinerary(map<string, string> dataSet) 
{ 
    // To store reverse of given map 
    map<string, string> reversemap; 
    map<string, string>::iterator it; 
  
    // To fill reverse map, iterate through the given map 
    for (it = dataSet.begin(); it!=dataSet.end(); it++) 
        reversemap[it->second] = it->first; 
  
    // Find the starting point of itinerary 
    string start; 
  
    for (it = dataSet.begin(); it!=dataSet.end(); it++) 
    { 
        if (reversemap.find(it->first) == reversemap.end()) 
        { 
            start = it->first; 
            break; 
        } 
    } 
  
    // If we could not find a starting point, then something wrong with input 
     if (start.empty()) 
     { 
        cout << "Invalid Input" << endl; 
        return; 
     } 
  
    // Once we have starting point, we simple need to go next, 
    //next of next using given hash map 
    it = dataSet.find(start); 
    while (it != dataSet.end()) 
    { 
        cout << it->first << "->" << it->second << endl; 
        it = dataSet.find(it->second); 
    } 
  
} 
  
int main() 
{ 
    map<string, string> dataSet; 
    dataSet["Chennai"] = "Banglore"; 
    dataSet["Bombay"] = "Delhi"; 
    dataSet["Goa"] = "Chennai"; 
    dataSet["Delhi"] = "Goa"; 
  
    printItinerary(dataSet); 
  
    return 0; 
} 