<--SET--> // whenever unique elements needed to be stored think of set --> all operations are O(logN) and logN is damn small.
(ordered set)


// suppose we want to find no. of umique elements from given n elements.
set<int> st;
int n;
cin >> n;
for (int i = 0 ; i<n ; i++)
{
    int x;
    cin >> x;
    st.insert(x); // takes O(logN) time, where N is current set size including current element inserted.
}

// to access each elememts st[0], st[1] is not valid
// use iterators *st.begin() --> gives first element, *(st.begin()+1) --> gives second element and so on.........

if we insert elements [1,2,3,3,1,2,4,5,5] --> set will have [1,2,3,4,5] // sorted and unique

<--erase-->

suppose set = {1,2,3,4,5,6}

st.erase(st.begin()+1); // st--> {1,3,4,5,6}
O(logN) operation, N is the current size of set before erasing the element.

suppose set = {1,2,3,4,5,6}

st.erase(st.begin(), st.begin()+2) --> // [) --> st = {3,4,5,6}
O(logN) operation, N is the current size of set before erasing the elements. as effort is to find the starting Iterator only, after then all consecutive elements are found and deleted in O(1).

suppose set = {1,2,3,4,5,6}

st.erase(5); // st-->{1,2,3,4,6} 
O(logN) time

<-- SET follows same methods of declaring and copying as VECTORS -->

suppose set = {1,2,3,4,5,6}

auto it = st.find(3) ; --> find(x) returns the iterator pointing to x if it exists in set. // O(logN)
auto it = st.find(0) ; --> find(x) returns the iterator pointing to st.end() if x does not exist in set. // O(logN)

st.emplace(x)===st.insert(x) // emplace is slightly faster.
st.size() --> gives current size


//printing set

for (auto it = st.begin(); it != st.end(); it++)
{
    cout << *it << " ";
}

//or

for (auto ele : st)
{
    cout << ele << " " ;
}

st.erase(st.begin(), st.end()); //  erase all the elemets of the set;
// O(logN)


<--Unordered SET--> // when need to store unique elements and storing in ascending order is not required
// all operations discussed in set are valid here


unordered_set<int> st;
st.insert(1);
st.insert(5);
st.insert(3); // the elements can be stored in any order. not a fixed order .(random order)

AVERAGE TIME COMPLEXITY OF ALL THE OPERATIONS ARE O(1) .
//if using unordered_set and getting TLE --> switch to SET ;
BUT THE WORST TIME COMPLEXITY IS O(set size) --> linear . (very rare to happen)

<--Multiset--> // stores all the elements given in sorted order
// all operations is O(logN) time


multiset<int> ms;
ms.insert(1);
ms.insert(3);
ms.insert(3);
ms.insert(1);
ms.insert(2);
ms.insert(2); // ms --> {1,1,2,2,3,3}

ms.erase(2) // erases all instances of 2 --> {1,1,3,3}
ms.clear() // deletes all elements
auto it = ms.find(3) // gives iterator pointing to the first occurance of 3 in multiset
ms.erase(ms.begin(), ms.end()) // deletes all elements
ms.count(2) // gives the no. of occurances of 2 in multiset

//printing multiset

for (auto it = ms.begin(); it != ms.end(); it++)
{
    cout << *it << " ";
}

//or

for (auto ele : ms)
{
    cout << ele << " " ;
}

ms.erase(ms.find(2)) //erases first occurance of 2 if exists
ms.erase(ms.find(2), ms.find(2)+2) // erases first 2 occurances of 2 if exist

<--PAIR-->

pair<int , int > p; / pair<int , int > p = {1,2}
p.first = 1;
p.second = 2;
p == (1,2);



<--MAP--> // O(logN) operations
// Key - Value
// stores uniques KEYS -- > IN SORTED ORDER OF KEYS
// when map is declared and not initialised, mpp[anything] is NULL i.e 0 in terms of int

map<string, int> mpp;
mpp["raj"] = 27;
mpp["hima"] = 31;
mpp["sandeep"] = 67;
mpp["tank"] = 89; === mpp.emplace("tank", 89) // emplace is slightly faster

// will be stored as ={{"hima", 31},{"raj", 27},{"sandeep", 67},{"tank", 89}}

mpp.erase("raj");
mpp.erase(mpp.begin());
mpp.erase(mpp.begin(), mpp.begin()+2) // erases 1st 2 keys
mpp.clear();//erases all elemets
auto it = mpp.find("raj"); // points where raj lies
auto it = mpp.find("simran") // points to mpp.end() as simran key does not exist

mpp["raj"] = 27;
mpp["raj"] = 31;

mpp["raj"] == 31 // overwritten as keys are unique

mpp.empty() // returns bool value, true if empty else false 

mpp.count("raj") === 1 // as stores unique keys

// printing map

for (auto it : mpp) // it will have pair
{
    cout << it.first << " " << it.second  << endl; // here .first , .second used as "it" is a pair
}

for (auto it = mpp.begin() ; it != mpp.end() ; it++)
{
    cout << it->first << " " << it->second << endl; // here .first , .second can not be used as "it" is an iterator pointing to a pair
}

for (auto it = mpp.begin() ; it != mpp.end() ; it++)
{
    cout << *it.first << " " << *it.second << endl; // here .first , .second can be used as "*it" is a pair 
}

<--unordered_map-->

unordered_map<string, int > umpp;
// randomly stores
// almost all operations in O(1), worst case O(n), rest all operations same as map

<--PAIR CLASS-->

pair <int , int > pr = {1,2}
pr.first = 1
pr.second = 2
pair <pair<int , int >, int> pr = {{1,2},2}
pr.first.second = 2
pair <pair<int , int >, pair<int , int >> pr = {{1,2},{3,4}}
pr.first.second = 2
pr.second.first = 3

vector<pair<int , int >> vec;
set<pair<int , int >> st;
map<pair<int, int >, int > mpp

unordered_map<pair<int , int >, int > umpp; *** NOT VALID ***
// unordered map can have only primitive data types as key, value can be anything .

<--MULTI MAP-->

multimap<int, int > mpp;
// O(logN) operations, can store same key with different values, and in sorted order

mpp["raj"]=  2;
mpp["raj"]=  5; // --> {{"raj", 2},{"raj", 5}}

NO ITERATOR CONCEPT IN STACK AND QUEUE, as they are ARRAY-based

<--Stack--> // LIFO Data Structure

// pop, push, emplace, top, size, empty

stack <int> st;

st.push(2); 
st.push(4); 
st.push(3); 
st.push(1);  // all operations O(1).
 
 
cout << st.top() // prints 1 
st.pop(); // deletes the last entered element 
cout << st.top(); // prints 3 
st.pop(); 
cout << st.top(); 

bool flag = st.empty(); // returns true if stack is empty, or false

// to delete the entire stack 
while(!st.empty())  // O(n) operation 
{
	st.pop(); 
} 

cout << st.size() << endl; // number of elements in the stack 
 
stack<int> st; 
cout << st.top() << endl; // throw error {mostly runtime error}
therefore, condition check
if(!st.empty()) 
{
	cout << st.top() << endl;
}

<--Queue--> FIFO Data Structure

queue<int> q;
q.push(1); 
q.push(5);
q.push(3); 
q.push(6); // all operations O(1).

cout << q.front();; // prints 1 
q.pop(); 
cout << q.front(); // prints 5

// linear time // O(n) operation 
while(!q.empty()) {
	q.pop(); 
}

// input
queue<int> q;
for(int i = 0;i<10;i++) q.push(i);

PRIORITY QUEUE MOST IMPORTANT
<--PRIORITY QUEUE--> // stores all the elements in sorted order
// O(logN) operations


push(), size(), pop(), top(), empty()

priority_queue<int> pq;
pq.push(1); 
pq.push(5); 
pq.push(2); 
pq.push(6); // stores as {6,5,2,1} IN DESCENDING ORDER 
 
cout << pq.top(); // print 6 
pq.pop(); 
cout << pq.top(); // print 5 

priority_queue<pair<int,int>> pq;
pq.push(1, 5); 
pq.push(1, 6); 
pq.push(1, 7); // stores as {{1,7}, {1,6}, {1,5}}

// to make min priority queue from priority queue

priority_queue<int> pq;
pq.push(-1); // pq.push(-1 * el); 
pq.push(-5); 
pq.push(-2); 
pq.push(-6); // stores as {-1, -2, -5, -6}
 
cout << -1 * pq.top() << endl; // prints 1

<--minimum priority queue-->
priority_queue<int, vector<int>, greater<int>> pq; 
pq.push(1); 
pq.push(5); 
pq.push(2); 
pq.push(6);  // {1,2,5,6}
 
cout << pq.top() << endl; // prints 1 

// min priority queue of pair
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> pq;

<--DEQUE-->
//similar to vector with extra push and pop operations
dequeue<int> dq; // doubly-ended-queue
// push_front() 
// push_back() 
// pop_front() 
// pop_back()
// begin, end, rbegin, rend 
// size 
// clear
// empty 
// at 

<--LIST-->

	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); -> // O(1) operation 

    // given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 
 
	// output 
	// 3
 
 
	int n;
	cin >> n; 
	map<int,int> mpp;                     // give priority to unordered set --> if TLE --> roll-back to SET
	int maxi = 0;                         // if using SET --> if TLE --> roll-back to unordered set
	for(int i = 0;i<n;i++) {              // when map is declared and not initialised, mpp[anything] is NULL i.e 0 in terms of int
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << maxi << endl; 
    // time compexity --> O(N(for loop)*logN(due to mpp[x]++))  // mpp[x] --> O(logN) operation


    // given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 
 
	// output 
	// 2 3 3 5 6 6 
 
	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}
 
	for(auto it : ms) {
		cout << it << endl; 
	}

// time complexity --> O(N(for loop)*logN(due to ms.inser(x)))
