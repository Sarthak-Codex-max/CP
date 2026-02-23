/*=====================  ALGORITHMS  =====================*/

#include <bits/stdc++.h>
using namespace std;

/*---------------------------------------------------------
    Custom Comparator
---------------------------------------------------------*/
// Sort by second element (ascending)
// If second is same → sort by first (descending)

bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // If second element is same
    return p1.first > p2.first;
}

/*---------------------------------------------------------
    STL Algorithms Demonstration
---------------------------------------------------------*/
void explainExtra()
{
    /*===================== SORT =====================*/

    // Array Sorting
    int a[5] = {5,3,4,2,1};

    sort(a + 2, a + 4);
    // Only sorts index 2 and 3
    // Array becomes: {5,3,2,4,1}

    sort(a, a + 5, greater<int>());
    // Descending order
    // {5,4,3,2,1}
    // TC: O(n log n)


    // Vector Sorting
    vector<int> v = {1,4,5,2,3};
    sort(v.begin(), v.end());
    // {1,2,3,4,5}
    // TC: O(n log n)


    /*================= SORT PAIR WITH COMPARATOR =================*/

    pair<int,int> p[] = {{1,2},{2,1},{4,1}};

    sort(p, p + 3, comp);
    // After sorting:
    // {{4,1}, {2,1}, {1,2}}
    // TC: O(n log n)


    /*================= BUILT-IN BIT FUNCTIONS =================*/

    int num = 7;
    int cnt = __builtin_popcount(num);
    // Number of set bits in 7 (111) → 3
    cout << "Set bits in 7: " << cnt << endl;

    long long m = 1626893693663;
    int ct = __builtin_popcountll(m);
    // For long long
    cout << "Set bits in long long: " << ct << endl;

    // TC: O(1)


    /*================= STRING SORT =================*/

    string s = "231";
    sort(s.begin(), s.end());
    // "123"

    cout << "Sorted string: " << s << endl;

    /*================= NEXT PERMUTATION =================*/

    cout << "Permutations:\n";
    while (next_permutation(s.begin(), s.end()))
    {
        cout << s << endl;
    }

    /*
        Output:
        132
        213
        231
        312
        321
    */

    // TC per permutation: O(n)


    /*================= MAX ELEMENT =================*/

    int maxi = *max_element(a, a + 5);
    cout << "Max element: " << maxi << endl;
    // TC: O(n)
}

/*---------------------------------------------------------
    MAIN
---------------------------------------------------------*/
int main()
{
    explainExtra();
    return 0;
}

//Gcd of two No.
//gcd(a,b)=gcd(a-b,b) where a>b <Euclideam Algorithm>
//gcd(a,b)=gcd(a%b,b)