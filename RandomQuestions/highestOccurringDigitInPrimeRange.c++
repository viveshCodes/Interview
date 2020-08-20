// Sieve of Eratosthenes 
void sieve(bool prime[], int n) 
{ 
    for (int p = 2; p * p  <= n; p++) 
    { 
        if (prime[p] == false) 
            for (int i = p*2; i <= n; i+=p) 
                prime[i] = true; 
    } 
} 
  
// Returns maximum occurring digits in primes 
// from l to r. 
int maxDigitInPrimes(int L, int R) 
{ 
    bool prime[R+1]; 
    memset(prime, 0, sizeof(prime)); 
  
    // Finding the prime number up to R. 
    sieve(prime, R); 
  
    // Initialse frequency of all digit to 0. 
    int freq[10] = { 0 }; 
    int val; 
  
    // For all number between L to R, check if prime 
    // or not. If prime, incrementing the frequency 
    // of digits present in the prime number. 
    for (int i = L; i <= R; i++) 
    { 
        if (!prime[i]) 
        { 
            int p = i; // If i is prime 
            while (p) 
            { 
                freq[p%10]++; 
                p /= 10; 
            } 
        } 
    } 
  
    // Finding digit with highest frequency. 
    int max = freq[0], ans = 0; 
    for (int j = 1; j < 10; j++) 
    { 
        if (max <= freq[j]) 
        { 
            max = freq[j]; 
            ans = j; 
        } 
    } 
  
    return ans; 
} 