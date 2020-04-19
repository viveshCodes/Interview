int max(int num1 , int num2){
     return(num1 > num2 ? num1 : num2);
 }
 int min(int num1 , int num2){
     return (num1 < num2 ) ? num1 : num2;
 }
int maxArr(int* arr, int n1) {
 
    // max and min variables as described 
    // in algorithm. 
    int max1 = INT_MIN, min1 = INT_MAX; 
    int max2 = INT_MIN, min2 = INT_MAX; 
    int i;
    for (i = 0; i < n1; i++) { 
  
        // Updating max and min variables 
        // as described in algorithm. 
        max1 = max(max1, arr[i] + i); 
        min1 = min(min1, arr[i] + i); 
        max2 = max(max2, arr[i] - i); 
        min2 = min(min2, arr[i] - i); 
    } 
  
    // Calculating maximum absolute difference. 
    return max(max1 - min1, max2 - min2); 
}