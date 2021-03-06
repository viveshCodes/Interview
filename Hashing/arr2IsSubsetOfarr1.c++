bool isSubset(int arr1[], int arr2[],  
                        int m, int n) 
{ 
    int i = 0; 
    int j = 0; 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            if(arr2[i] == arr1[j]) 
                break; 
        } 
          
        /* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
        if (j == m) 
            return 0; 
    } 
      
    /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
    return 1; 
} 