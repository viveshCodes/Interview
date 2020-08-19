void kLargest(int arr[], int n, int k) 
{ 
    // Sort the given array arr in reverse 
    // order. 
    sort(arr, arr + n, greater<int>()); 
  
    // Print the first kth largest elements 
    for (int i = 0; i < k; i++) 
        cout << arr[i] << " "; 
} 
  