Pairs

pair<int, string> p;
p = {2, "abcd"};
cout<< p.first << p.second;
pair<int, string> &p1 = p;
int a[] = {1,2,3};
int b[] = {2,3,4};
pair<int, int> p_array[3];
p_array[0] = {1,2}
p_array[1] = {1,2}
p_array[2] = {1,2}
for(int i=0; i<3 ; i++){
	cout<< p_array[i].first << p_array[i].second
}

Vectors

void printVec(vector<int> &v) {
	cout<< v.size() << endl;
   for(int  i=0; i<v.size(); i++){
   cout<< v[i]<<endl;
   }
}

int main(){
vector<int> v;     // dynamic size
int n;
cin>>n;
for(int i=0; i<n; i++) {
	int x;
	cin>>x;
	v.push_back(x); //stores value in end 0(1)
}
printVec(v);
}
v.pop_back() //last value ko nikaldega
vector<int> &v2 = v; // 0(n) copying is an expensive operation

//NESTING IN VECTORS


void printVec(vector < pair<int, int> > &v) {
	cout<< v.size() << endl;
   for(int  i=0; i<v.size(); i++){
   cout<< v[i].first << v[i].second << endl;
   }
}

int main(){
vector < pair<int, int> > v =  {{1,2}, {2,3}, {3,4}} ;
printVec(v);
int n;
cin>>n;
for(int i=0; i<n; i++) {
	int x;
	cin>>x;
	v.push_back({x,y});
}


// ARRAY OF VECTORS

int main(){
int N;
cin>>N;
vector<int> v[N];
for(int i=0; i<N ;i++0){
	int n;
	cin>>n;
	for(int j=0; j<n ; ++j){
	int x;
	cin>>x;
	v[i].push_back(X);
	}
}
for(int i=0;i<N;i++){
	printVec(V[i]);
}
}


// ITERATORS

.begin() starting v[0]
.end() after end element in vector 

vector<int> ::iterator it = v.begin();
cout<< (*(it))<< endl; // to print v.begin()

vector<int> ::iterator it;
for(it = v.begin(); it != v.end(); ++it){
	cout << (*it) << endl; // to print our vector
}

// in vectors of pairs
same 

cout<< (*it).first << " " << (*it).second;
OR
cout<< (it->first) << " " << (it->second);


// SHORT ITERATORS

range based loop and auto compilers

for(int &value: v){ 
	cout << value << " ";
}

vector<pair<int, int> > v_p = {{1,2}, {2,3}};
for(pair<int,int) &value :v_p){
	cout<< value.first << " " << value.second;
}

auto // dynamically assumes type

 // no need vector<int> ::iterator it;
for(auto it = v.begin(); it != v.end(); ++it){
	cout << (*it) << endl; // to print our vector
}


vector<pair<int, int> > v_p = {{1,2}, {2,3}};
for(auto &value :v_p){
	cout<< value.first << " " << value.second;
}


// MAPS

key value pairs ko store karta
mapping access

maps always store in sorted order using Red Black Tress storage

map<int, string> m;
m[1]="abc";
m[2]="cde";
or
m.insert({4,"afh"});
map<int,string> :: iterator it;
for(it = m.begin(); it != m.end(); ++it){
	cout << (*it).first << " " << (*it).second
}

for(auto S&pr : m){
		cout << pr.first << " " << pr.second

}

cout<< m.size()<< endl;

m[6] == logn time consumed 

KEYS ARE UNIQUE WE CANNOT INSERT DUPLICATE KEYS IT WILL REPLACE THE VALUES

auto it =  m.find(3);  // returns iterator 3  logN
m.erase(3); // logn
m.erase(it) //it == 3 will erase
m.clear(); 



Q)

int main(){
	map<string, int> m; // string unique chaiye
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
	string s;
	cin>>s;
	m[s]++;
	}
	for(auto pr: m){
	cout<<pr.first << " " << pr.second;
	}
}

// Unordered Maps

difference 
1. inbuilt differences
2. time complexity
3. valid keys datatype
unordered_map  (random order) // they use hash tables 0(1) 
unordered map mai pairs etc. nahi daal sakte coz their hash function is not internally defined



// SETS

void print(set<string> &s){
	for(string value: s){
	cout<< s << endl;
	}
}


int main() {
	set<string> s; // logn, sorted order
	s.insert("abc");
    s.insert("bsc");
    auto it = s.find("abc"); 
    if(it != s.end()){
    cout << (*it);
    }
}

int main(){
set<string> s;
int n;
cin n;
for (int i=0; i<n; i++) 
string str;
cin str;
s.insert(str);
for (auto value : s){
cout << value << endl;
}
}

//Unordered sets

same difference as maps

q)

unordered_set<string> s;
int n;
cin>>n;
for (int i=0; i<n; ++i){
string str;
cin >> str;
s.insert(str);
}

int q;
cin>>q;
while(q--){
string str;
cin>>str;
If(s.find(str) == s.end()) { // s.end( here means no such element exists)
cout<< "no\n";
}
else{
cout<<"yes\n";
}


Q) 
int main()
 {
 int t;
 cin>>t;
 while(t--){
 int n, k;
 cin>>n>>k;
 multiset<long long> bags;
 for(int i=0; i<n; i++){
 int candy;
 cin>>candy;
 bags.insert(candy);
 }
 long long  total = 0;
 for(int i=0; i<k; ++i){
 auto last_it = (--bags.end());  // max element in string wiht duplicates
 int candy = *last_it
 total += candy;
 bags.erase(last_it);
 bags.insert(candy/2);
 }
 cout<< total << endl;
 }
 }