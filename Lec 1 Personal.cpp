
<--Array-Container-->

int arr[100];

array<int, 5>arr = {?, ?, ?, ?, ?}

array<int, 5>arr =  {1,2} // --> {1,2,0,0,0}

int arr[100] = {0} // --> {0,0,0,0,0..............0,0,0,0}

array <int, 5> arr;
arr.fill(10); // --> {10, 10, 10, 10, 10}


array<int , 5> arr = {1,2,3,4,5}
arr.at(0) = 1
arr.at(4)=  5

<--Iterators-->

begin() --> pointer to the first element of the container

end() --> pointer to the address just after the last element of the container

rbegin() /*reverse begin*/ --> pointer to the last element of the container

r.end() /*reverse end*/ --> pointer to the address just before the first element

array<int , 5> arr = {1,2,3,4,5}

// interating through the array/any container

// printing is correct order

for (auto it = arr.begin() ; it!= arr.end(); it++)
{
    cout << *it << " ";
}

// printing in reverse order

for (auto it= arr.end()-1 ; it>= arr.begin(); it--)
{
    cout << *it << " ";
}

// printing in reverse order

for (auto it= arr.rbegin(); arr!= rend() ; it++) // it++ and not it-- as we are using reverse iterator
{
    cout << *it << " ";
}


array<int,5> arr; // global declaration --> automatically asign 0 to all elements
array<int,5> arr; // declaration in int main() --> automatically asign garbage values to all elements



<--for each loop-->

array<int, 5> arr = {1,2,3,4,5}

for (auto it : arr) // it is not iterator, its element of the array
{
	cout << it << " "; // prints --> 1 2 3 4 5
}

string str = "taukir"

for (auto c : str) // it is not iterator, its characters of the string
{
	cout << c << " "; // prints --> t a u k i r
}

<--more functions-->

arr.size() // size of array
arr.front() // 1st element // arr.at(0)
arr.back() // last element // arr.at(arr.size()-1)

Array MAX_SIZE

inside int main --> int/double/char arr[1000000]; max --> 10^6
inside int main --> bool arr[10000000]; max --> 10^7
global declaration --> int/double/char arr[10000000]; max --> 10^7
global declaration --> bool arr[100000000]; max --> 10^8


<--VECTOR-->

its size follows the same trends as array when dynmically increased.

vector<int> v;

v.size(); // current size
v.push_back();
v.pop_back();
v.erase(); --> // erases all elemets and make the vector empty --> {}

vector<int> v1(4,0) // --> {0,0,0,0}  // size can be furthur increased by push_back
vector<int> v2(5,10) // --> {10,10,10,10,10}  // size can be furthur increased by push_back

<--making a copy-->
// copy entire vector
//copy entire v2 into v4 --> make a copy
vector<int> v3(v2.begin(), v2.end()) // --> v3 = {10,10,10,10,10} 
(v2.begin(), v2.end()) = // [);

vector<int> v4(v2) -->// v4 = {10,10,10,10,10}

vector<int> v1 = {1,2,3,4,5};
vector<int> v2(v1.begin(), v1.begin()+2); // v2 = {1,2}

v.push_back(x) === v.emplace_back(x) // emplace_back in slightly faster than push_back
	
v.count(v.begin(), v.end(), x); // returns the frequency of x in whole vector --> O(n) complexity	

<--swap-->

swap(v1, v2);

<-- 2d vector -->

vector<vector<int>> vec;

vector<int> v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);

vector<int> v2;
v1.push_back(0);
v1.push_back(2);
v1.push_back(4);
v1.push_back(5);

vector<int> v3;
v1.push_back(-1);
v1.push_back(5);

vec.push_back(v1);
vec.push_back(v2);
vec.push_back(v3);  // vec = {{1,2,3},{0,2,4,5},{-1,5}} --> vec[2][0] = -1, vec[1][1] = 2

// to print

for (auto vecto : vec) //vecto iterates all vectors in vec
{
    for (auto ele : vecto) // ele iterates all elements of vecto
    {
        cout << ele << " ";
    }
    cout << endl;
}

//traditional way to print

for (int i = 0 ; i<vec.size(), i++)
{
    for (int j = 0 ; j< vec[i].size() ; j++)
    {
        cout << vec[i][j] << " ";
    }
    cout << endl;
}

// **first method is used as it has lesser no. of lines

//define 10 x 20 2D vector
vector<vector<int>> vec(10, vector<int> (20, 0)); //still dyanamic
vec.push_back(vector<int> (20,0))

// array of vectors

vector<int> arr[4] ; // arr =[{},{},{},{}]
arr[0].push_back(x) ; // arr=[{x},{},{},{}]

<--3D vector-->

10 x 20 x 30
vector<vector<vector<int>>> vec(10, vector<vector<int>> (20, vector<int> (30, 0)))
