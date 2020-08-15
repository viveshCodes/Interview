int firstElement(int arr[], int n, int k) 
{ 
    // unordered_map to count 
    // occurrences of each element 
    unordered_map<int, int> count_map; 
    for (int i=0; i<n; i++) 
        count_map[arr[i]]++; 
      
    for (int i=0; i<n; i++)   
  
        // if count of element == k ,then 
        // it is the required first element  
        if (count_map[arr[i]] == k) 
            return arr[i]; 
              
    // no element occurs k times 
    return -1; 
} 