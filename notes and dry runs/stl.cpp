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


for(it = v.begin(); it != v.end(); ++it){
	cout << (*it) << endl; // to print our vector
}

// in vectors of pairs
same 

cout<< (*it).first << " " << (*it).second;
OR
cout<< (it->first) << " " << (it->second);



