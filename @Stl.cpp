#include <bits/stdc++.h>
using namespace std;
/*          Pairs            */
void explainPair()
{
    /*====================================================
                        DECLARATION
    ====================================================*/

    // Method 1: Direct Initialization
    pair<int, int> p1 = {2, 3};
    cout << "p1: " << p1.first << " " << p1.second << endl;

    // Method 2: make_pair()
    pair<int, int> p2 = make_pair(5, 10);
    cout << "p2: " << p2.first << " " << p2.second << endl;

    // Method 3: Different Data Types
    pair<int, string> p3 = {1, "Apple"};
    cout << "p3: " << p3.first << " " << p3.second << endl;


    /*====================================================
                        COPYING
    ====================================================*/

    // Copy by value (creates new pair)
    pair<int, string> p4 = p3;
    p4.second = "Mango";   // Does NOT affect p3

    cout << "p3: " << p3.second << endl;  // Apple
    cout << "p4: " << p4.second << endl;  // Mango

    // Copy by reference (both refer to same memory)
    pair<int, string>& p5 = p3;
    p5.second = "Banana";  // Changes p3 also

    cout << "p3 after reference change: " << p3.second << endl;


    /*====================================================
                    NESTED PAIR
    ====================================================*/

    pair<int, pair<int, int>> nested = {1, {3, 4}};

    cout << "Nested Pair: "
         << nested.first << " "
         << nested.second.first << " "
         << nested.second.second << endl;


    /*====================================================
                    ARRAY OF PAIRS
    ====================================================*/

    pair<int, int> arr[] = {{1, 2}, {9, 8}};

    cout << "Second pair second element: "
         << arr[1].second << endl;


    /*====================================================
                PAIR INSIDE VECTOR (Important for CP)
    ====================================================*/

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    cout << "Vector of pairs: ";
    for (auto &it : vec)
        cout << "(" << it.first << "," << it.second << ") ";
    cout << endl;
}
/*           Vectors         */
void vectors()
{
    //TODO:Decleration
    //     vector<int> v;
    //TODO:insert at last     
    //     v.push_back(1);//  v={}-------->v={1}
    //     v.emplace_back(2);// v={}-------->v={1,2} Gernally faster then pushback

    //     vector<pair<int,int>>vec;
    //     vec.push_back({1,2});
    //     vec.emplace_back(1,2);

    //     vector<int> va(5,100);// ------------> v= {100,100,100,100,100}
    //     vector<int> V(5);// ------------> v= {0,0,0,0,0}

    //     vector<int> v1(5,20);
    //TODO:Copy
    //     vector<int> v2(v1); // ------->copy of vector v1
    //     vector<int> &v2=v1; //------>Copy by refrance(generally used in function)

    //     // access element of vector
    //     cout<<v[0]<<" "<<v.at(0)<<endl;
    //     cout<<vec[0].second<<" "<<V[0]<<endl;
    //     cout<<va[0]<<" "<<v2[4]<<endl;
    //     cout<<v.back()<<" ";

    //     iterator
    //     vector<int> v={1,2,3,4,5,6};


    //TODO:Iterator decleration
    //     vector<int>::iterator it = v.begin();
    //    |       |------>just points it+1 memory
    //    |---> points next iterator
    //    it++ and it+=1 are same in case of vector but nit same in case of other container
    //     vector<pair<int,int>::itreator it;
    //     (*it).first  <=> it->first



    //     it++;
    //     cout<<*it<<" ";
    //     it=it+2;
    //     cout<<*it;

    //     vector<int>::iterator it = v.end();//------>v={1,2,3,4,5,6,_}locate uner scores location
    //     vector<int>::reverse_iterator it2 = v.rend();//not used much
    //     vector<int>::reverse_iterator it3 = v.rbegin();//not used much
    //     cout<<*(--it)<<endl;
    //     cout<<*(it2-2)<<endl;
    //     cout<<*(++it3)<<endl;

    //     //print
    //     for(vector<int>::iterator it = v.begin();it!=v.end();it++){
    //         cout<<*it<<" ";
    //     }
    //     cout<<endl;
    //     for(auto it = v.begin();it!=v.end();it++){   // Here auto will autometically assine according to deta
    //       cout<<*it<<" ";
    //     }
    //     cout<<endl;

    // TODO: For each loop syntex
    // value pass by copy
    //     for(auto it:v){
    //         cout<<it<<" ";
    // } 
    // value pass by refrance            
    //     for(auto &it:v){
    //         cout<<it<<" ";
    // }                    
     // Here auto declare data type used in vector




    //     cout<<endl;


    //TODO:     erase
    //     vector<int>v={10,20,30,40};
    //     // v.erase(v.begin()+1);//Erase second element
    //     //Erase in a range
    // v.erase(v.begin()+1,v.begin()+3);//------>Something like [start,end)
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // insert function (Take a lot of time)
    // vector<int> v(2,10);//{10,10}
    // v.insert(v.begin(),5);//{5,10,10}
    // v.insert(v.begin()+1,1,10);//{5,10,10,10}
    // // insert a vector
    // vector<int> copy(2,50);
    // v.insert(v.begin(),copy.begin(),copy.end());//{50,50,5,10,10,10}
    // cout<<v.size()<<endl;//6
    // v.pop_back();//{50,50,5,10,10}
    // v.swap(copy);//swap two vectors
    // v.clear();//v={}
    // cout<<v.empty();//Check wether the vector is empty or not
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
}
/*            list           */
void explainList()
{
    /*====================================================
                1. DECLARATION
    ====================================================*/

    list<int> l;                    // Empty list
    list<int> l2(5, 100);           // {100,100,100,100,100}
    list<int> l3 = {1, 2, 3, 4};    // Initializer list


    /*====================================================
                2. INSERTION
    ====================================================*/

    l.push_back(2);      // {2}
    l.emplace_back(3);   // {2,3}

    l.push_front(1);     // {1,2,3}
    l.emplace_front(0);  // {0,1,2,3}

    // Insert at specific position
    auto it = l.begin();
    advance(it, 2);      // Move iterator forward by 2
    l.insert(it, 100);   // {0,1,100,2,3}


    /*====================================================
                3. DELETION
    ====================================================*/

    l.pop_back();        // remove last element
    l.pop_front();       // remove first element

    // Erase using iterator
    it = l.begin();
    advance(it, 1);
    l.erase(it);         // erase second element

    // Clear entire list
    // l.clear();


    /*====================================================
                4. TRAVERSAL
    ====================================================*/

    cout << "List elements: ";
    for (auto x : l)
        cout << x << " ";
    cout << endl;

    // Using iterator
    for (auto it = l.begin(); it != l.end(); it++)
        cout << *it << " ";
    cout << endl;


    /*====================================================
                5. SIZE & UTILITIES
    ====================================================*/

    cout << "Size: " << l.size() << endl;
    cout << "Front: " << l.front() << endl;
    cout << "Back: " << l.back() << endl;
    cout << "Is empty? " << l.empty() << endl;


    /*====================================================
                6. SPECIAL LIST OPERATIONS
                (NOT AVAILABLE IN VECTOR)
    ====================================================*/

    list<int> l4 = {10, 20, 30};

    l.splice(l.begin(), l4);  
    // Moves all elements of l4 into l at beginning
    // O(1) operation

    l.remove(20);        
    // Removes all occurrences of 20

    l.sort();            
    // Sort list (O(n log n))

    l.reverse();         
    // Reverse list


    /*====================================================
                7. IMPORTANT CONCEPTS
    ====================================================*/

    // ❌ Random access NOT allowed
    // l[2] → ERROR
    // l.at(2) → ERROR

    // Only sequential access via iterator
}
/*          deque            */
void explainDeque()
{
    /*====================================================
                    1. DECLARATION
    ====================================================*/

    deque<int> dq;                  // Empty deque
    deque<int> dq2(5, 100);         // {100,100,100,100,100}
    deque<int> dq3 = {1,2,3,4};     // Initializer list


    /*====================================================
                    2. INSERTION
    ====================================================*/

    dq.push_back(2);        // Worst TC: O(1)
    dq.emplace_back(3);     // Worst TC: O(1)

    dq.push_front(1);       // Worst TC: O(1)
    dq.emplace_front(0);    // Worst TC: O(1)

    // Insert at specific position
    dq.insert(dq.begin() + 2, 100);  
    // Worst TC: O(n)


    /*====================================================
                    3. DELETION
    ====================================================*/

    dq.pop_back();          // Worst TC: O(1)
    dq.pop_front();         // Worst TC: O(1)

    dq.erase(dq.begin() + 1);   
    // Worst TC: O(n)

    // dq.clear();          // Worst TC: O(n)


    /*====================================================
                    4. ACCESS
    ====================================================*/

    cout << "Front: " << dq.front() << endl;   // O(1)
    cout << "Back: " << dq.back() << endl;     // O(1)

    cout << "Index access: " << dq[1] << endl; // O(1)
    cout << "At function: " << dq.at(1) << endl; // O(1)


    /*====================================================
                    5. TRAVERSAL
    ====================================================*/

    cout << "Deque elements: ";
    for (auto x : dq)
        cout << x << " ";
    cout << endl;
    // Traversal Worst TC: O(n)


    /*====================================================
                    6. SIZE & UTILITIES
    ====================================================*/

    cout << "Size: " << dq.size() << endl;     // O(1)
    cout << "Empty: " << dq.empty() << endl;   // O(1)

    deque<int> temp = {10,20};
    dq.swap(temp);                             
    // Worst TC: O(1)
}
/*           Stack           */
void explainStack()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    stack<int> s; 
    // Default underlying container: deque<int>


    /*====================================================
                    INSERTION
    ====================================================*/

    s.push(1);      
    // Average TC: O(1)
    // Worst TC:   O(1)

    s.push(2);      
    // Average TC: O(1)
    // Worst TC:   O(1)

    s.emplace(3);   
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    ACCESS
    ====================================================*/

    cout << "Top: " << s.top() << endl;  
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    DELETION
    ====================================================*/

    s.pop();        
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    SIZE & UTILITIES
    ====================================================*/

    cout << "Size: " << s.size() << endl;    
    // Average TC: O(1)
    // Worst TC:   O(1)

    cout << "Empty: " << s.empty() << endl;  
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    SWAP
    ====================================================*/

    stack<int> s1, s2;
    s1.swap(s2);    
    // Average TC: O(1)
    // Worst TC:   O(1)
}
/*           Queue           */
void explainQueue()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    queue<int> q;
    // Default underlying container: deque<int>


    /*====================================================
                    INSERTION
    ====================================================*/

    q.push(1);
    // Average TC: O(1)
    // Worst TC:   O(1)

    q.push(2);
    // Average TC: O(1)
    // Worst TC:   O(1)

    q.emplace(4);
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    ACCESS
    ====================================================*/

    cout << "Front: " << q.front() << endl;
    // Average TC: O(1)
    // Worst TC:   O(1)

    cout << "Back: " << q.back() << endl;
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    MODIFY BACK ELEMENT
    ====================================================*/

    q.back() += 5;
    // Access + modify
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    DELETION
    ====================================================*/

    q.pop();
    // Removes front element
    // Average TC: O(1)
    // Worst TC:   O(1)


    /*====================================================
                    SIZE & UTILITIES
    ====================================================*/

    cout << "Size: " << q.size() << endl;
    // Average TC: O(1)
    // Worst TC:   O(1)

    cout << "Empty: " << q.empty() << endl;
    // Average TC: O(1)
    // Worst TC:   O(1)

    queue<int> q1, q2;
    q1.swap(q2);
    // Average TC: O(1)
    // Worst TC:   O(1)
}
/*      priority_queue       */
void explainPQ()
{
    /*====================================================
                    MAX HEAP (Default)
    ====================================================*/

    priority_queue<int> pq;

    pq.push(5);      
    // Heap: {5}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    pq.push(2);      
    // Heap: {5,2}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    pq.push(8);      
    // Heap becomes: {8,2,5}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    pq.emplace(10);  
    // Heap becomes: {10,8,5,2}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    cout << "Top (Max Heap): " << pq.top() << endl;
    // Output: 10
    // Avg TC: O(1)
    // Worst TC: O(1)

    pq.pop();        
    // Removes 10
    // Heap becomes: {8,2,5}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    cout << "Top after pop: " << pq.top() << endl;
    // Output: 8
    // Avg TC: O(1)
    // Worst TC: O(1)


    /*====================================================
                    MIN HEAP
    ====================================================*/

    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);      
    // Heap: {5}

    minpq.push(2);      
    // Heap: {2,5}

    minpq.push(8);      
    // Heap: {2,5,8}

    minpq.emplace(10);  
    // Heap: {2,5,8,10}

    cout << "Top (Min Heap): " << minpq.top() << endl;
    // Output: 2
}
/*            set      (Implemented using Red-Black Tree)      */
void explainSet()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    set<int> se;
    // Elements are:
    // 1) Unique
    // 2) Stored in sorted order


    /*====================================================
                    INSERTION
    ====================================================*/

    se.insert(1);      // {1}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    se.emplace(2);     // {1,2}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    se.insert(3);      // {1,2,3}
    se.insert(3);      // Duplicate ignored → {1,2,3}
    se.insert(4);      // {1,2,3,4}


    /*====================================================
                    TRAVERSAL
    ====================================================*/

    cout << "Set elements: ";
    for (auto it : se)
        cout << it << " ";
    cout << endl;
    // Output: 1 2 3 4
    // TC: O(n)


    /*====================================================
                    FIND
    ====================================================*/

    auto it1 = se.find(3);
    // Points to 3
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    auto it2 = se.find(6);
    // Returns se.end()
    // Means element not found


    /*====================================================
                    ERASE
    ====================================================*/

    se.erase(4);   // {1,2,3}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    // Erase using iterator range [start, end)
    auto start = se.find(1);
    auto end = se.find(3);
    se.erase(start, end);
    // Removes 1 and 2
    // Set becomes: {3}
    // Avg TC: O(k log n) (k elements erased)
    // Worst TC: O(n)


    /*====================================================
                    COUNT
    ====================================================*/

    int cnt = se.count(1);
    // Returns 1 if present
    // Returns 0 if not present
    // Avg TC: O(log n)
    // Worst TC: O(log n)


    /*====================================================
                    LOWER_BOUND & UPPER_BOUND
    ====================================================*/

    // Suppose se = {3}

    auto lb = se.lower_bound(2);
    // Returns first element >= 2
    // Here → 3
    // Avg TC: O(log n)

    auto ub = se.upper_bound(3);
    // Returns first element > 3
    // Here → se.end()
    // Avg TC: O(log n)


    /*====================================================
                    UTILITIES
    ====================================================*/

    cout << "Size: " << se.size() << endl;
    // O(1)

    cout << "Empty: " << se.empty() << endl;
    // O(1)

    set<int> se2;
    se.swap(se2);
    // O(1)
}
/*          Multiset      (Implemented using Red-Black Tree)   */
void explainMultiset()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    multiset<int> ms;
    // Sorted order
    // Duplicates allowed


    /*====================================================
                    INSERTION
    ====================================================*/

    ms.insert(1);   // {1}
    ms.insert(1);   // {1,1}
    ms.insert(1);   // {1,1,1}

    // Avg TC: O(log n)
    // Worst TC: O(log n)

    cout << "Elements: ";
    for (auto x : ms)
        cout << x << " ";
    cout << endl;
    // Output: 1 1 1


    /*====================================================
                    COUNT
    ====================================================*/

    int cnt = ms.count(1);
    cout << "Count of 1: " << cnt << endl;
    // Output: 3
    // Avg TC: O(log n + k)  (k = occurrences)
    // Worst TC: O(n)


    /*====================================================
                    ERASE (ALL OCCURRENCES)
    ====================================================*/

    ms.erase(1);
    // Removes ALL 1's
    // ms becomes: {}
    // Avg TC: O(log n + k)
    // Worst TC: O(n)


    /*====================================================
                    ERASE (ONLY ONE OCCURRENCE)
    ====================================================*/

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);  // {1,1,1}

    ms.erase(ms.find(1));
    // Removes only ONE 1
    // ms becomes: {1,1}
    // Avg TC: O(log n)
    // Worst TC: O(log n)


    /*====================================================
                    ERASE USING RANGE
    ====================================================*/

    auto start = ms.lower_bound(1);
    auto end   = ms.upper_bound(1);

    ms.erase(start, end);
    // Removes all 1's
    // Avg TC: O(k log n)
    // Worst TC: O(n)


    /*====================================================
                    OTHER FUNCTIONS (Same as set)
    ====================================================*/

    // ms.find(x)         → O(log n)
    // ms.lower_bound(x)  → O(log n)
    // ms.upper_bound(x)  → O(log n)
    // ms.size()          → O(1)
    // ms.empty()         → O(1)
}
/*       Unordered set   (Implemented using Hash Table)   */
void explainUnorderedSet()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    unordered_set<int> us;
    // Unique elements
    // No particular order


    /*====================================================
                    INSERTION
    ====================================================*/

    us.insert(10);
    us.insert(20);
    us.insert(10);   // Duplicate ignored

    // Avg TC: O(1)
    // Worst TC: O(n)  (when many hash collisions happen)


    /*====================================================
                    TRAVERSAL
    ====================================================*/

    cout << "Elements: ";
    for (auto x : us)
        cout << x << " ";
    cout << endl;
    // Output order is NOT guaranteed
    // Could be: 20 10
    // Could be: 10 20

    // TC: O(n)


    /*====================================================
                    FIND
    ====================================================*/

    if (us.find(10) != us.end())
        cout << "10 Found\n";

    // Avg TC: O(1)
    // Worst TC: O(n)


    /*====================================================
                    ERASE
    ====================================================*/

    us.erase(10);  // Removes 10 if exists

    // Avg TC: O(1)
    // Worst TC: O(n)


    /*====================================================
                    COUNT
    ====================================================*/

    cout << "Count of 20: " << us.count(20) << endl;
    // Returns 1 or 0
    // Avg TC: O(1)
    // Worst TC: O(n)


    /*====================================================
                    UTILITIES
    ====================================================*/

    cout << "Size: " << us.size() << endl;   // O(1)
    cout << "Empty: " << us.empty() << endl; // O(1)

    unordered_set<int> us2;
    us.swap(us2); // O(1)


    /*====================================================
                    IMPORTANT NOTE
    ====================================================*/

    // ❌ lower_bound() NOT available
    // ❌ upper_bound() NOT available
    // ❌ No sorted order
}
/*            Map            */
void explainMap()
{
    /*====================================================
                    DECLARATION
    ====================================================*/

    map<int, int> mpp;
    // map<key, value>
    // Keys are unique
    // Sorted by key


    /*====================================================
                    INSERTION
    ====================================================*/

    mpp[1] = 2;             // {1 -> 2}
    // Avg TC: O(log n)
    // Worst TC: O(log n)

    mpp.insert({2, 3});     // {1->2, 2->3}
    // Avg TC: O(log n)

    mpp.emplace(3, 1);      // {1->2, 2->3, 3->1}
    // Avg TC: O(log n)


    /*====================================================
                    TRAVERSAL
    ====================================================*/

    cout << "Map elements:\n";
    for (auto it : mpp)
        cout << it.first << " -> " << it.second << endl;

    /*
        Output:
        1 -> 2
        2 -> 3
        3 -> 1
    */
    // TC: O(n)


    /*====================================================
                    ACCESS USING []
    ====================================================*/

    cout << mpp[2] << endl;
    // Output: 3
    // TC: O(log n)

    cout << mpp[5] << endl;
    /*
        If key 5 does not exist:
        It creates {5 -> 0} automatically
        Output: 0
    */
    // TC: O(log n)


    /*====================================================
                    FIND
    ====================================================*/

    auto it = mpp.find(3);
    if (it != mpp.end())
        cout << "Found: " << it->second << endl;
    /*
        Returns iterator pointing to key 3
        TC: O(log n)
    */

    auto it2 = mpp.find(10);
    if (it2 == mpp.end())
        cout << "Not Found\n";


    /*====================================================
                    ERASE
    ====================================================*/

    mpp.erase(2);  // erase by key
    // TC: O(log n)

    auto it3 = mpp.find(1);
    mpp.erase(it3);  // erase by iterator
    // TC: O(log n)

    // mpp.clear();  // TC: O(n)


    /*====================================================
                    LOWER_BOUND & UPPER_BOUND
    ====================================================*/

    // Suppose mpp = {3->1, 5->7, 8->4}

    auto lb = mpp.lower_bound(5);
    // First key >= 5
    // Points to 5
    // TC: O(log n)

    auto ub = mpp.upper_bound(5);
    // First key > 5
    // Points to 8
    // TC: O(log n)


    /*====================================================
                    UTILITIES
    ====================================================*/

    cout << "Size: " << mpp.size() << endl;   // O(1)
    cout << "Empty: " << mpp.empty() << endl; // O(1)

    map<int,int> m2;
    mpp.swap(m2);  // O(1)
}
/*          Multimap         */
void explainmultimap(){
    //everything same as map,only it can store multi keys
    //only mpp[key] cannot be used here
}
/*        unorderedmap       */
void explainunorderedmap(){
//    same as unoudered_set
//  generally time complexity O(1) in worst case time complexity goes O(n),
// int key complex deta structure can not be used only simple use like: string ,int ,float
}



int main()
{
    explainPair();
    vectors();   // currently empty (only comments)
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiset();
    explainUnorderedSet();
    explainMap();

    return 0;
}

// #include <iostream>

// constexpr int getSize() { return 5; }  // Must be constexpr

// int main() {
//     int arr[getSize()];  // ✅ Allowed in C++ (constexpr function)
//     std::cout << "Array of size " << getSize() << " created.\n";
//     return 0;
// }
// #include <stdio.h>

// int getSize() {
//     return 5;
// }

// int main() {
//     int arr[getSize()];  // ❌ Error: Array size must be a constant in C (before C99)
//     return 0;
// }
