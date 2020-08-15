bool areEqual(int arr1[], int arr2[], int n, int m) 
{ 
    // If lengths of array are not equal means 
    // array are not equal 
    if (n != m) 
        return false; 
  
    // Sort both arrays 
    sort(arr1, arr1 + n); 
    sort(arr2, arr2 + m); 
  
    // Linearly compare elements 
    for (int i = 0; i < n; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
  
    // If all elements were same. 
    return true; 
} 