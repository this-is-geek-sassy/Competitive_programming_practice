// https://www.codechef.com/START52D/problems/MINSM

#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(long long int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (long long int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long int arr[n], sum = n;

        for (auto i = 0; i < n; i++)
            cin >> arr[i];
        
        unsigned int no_of_distict_primes = 0;
        long long int prime_number=0;

        for (auto i = 0; i < n; i++) {

            if (isPrime(arr[i]) &&   arr[i] != prime_number) {
                prime_number = arr[i];
                no_of_distict_primes++;
            }
            
            if (no_of_distict_primes >= 2)
                break;
        }

        if (no_of_distict_primes == 1)
            sum = n*prime_number;

        cout << sum << endl;
    }

}