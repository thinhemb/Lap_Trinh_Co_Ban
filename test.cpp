#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/math/constants/constants.hpp>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/trie_policy.hpp>
// #include <boost/cstdint.hpp>

// Defines
	
	// Typedefs
	
//      #define ll cpp_int
	#define ll long long
	#define ull unsigned long long
	#define pb push_back
	#define eb emplace_back
	#define cl(C) C.clear()
	#define cint cpp_int
	#define all(C) C.begin(), C.end()
	#define Begin() int N; cin>>N; cin.ignore(); while(N--)
	
	//Commands
	
		// Loops
		
		#define FOR(i,a,b) for (int i=a; i<=b; i++)
		#define FOR2(i,a,b) for (ll i=a; i<=b; ++i)
		#define FORD(i,a,b) for (int i=a; i>=b; i--)
		#define FORA(x,C) for (auto x:C)
		#define WHILE(x,y) while(cin>>x>>y)
		#define WHILEF(x,y,f) while(f>>x>>y)
		#define WHILE2(x) while(cin>>x)
		#define WHILEGL(a) while(getline(cin,a))
		#define WHILEGLF(a,f) while(getline(f,a))
		
		// Get values
		
		#define maxOf(C) max_element(C.begin(), C.end()) - C.begin()
		#define minOf(C) min_element(C.begin(), C.end()) - C.begin()
		#define ite(y,x,it) y<x>::iterator it
		
		// Clear containers
		
		#define reset(C) memset(C,0,sizeof(C))
		#define clearQueue(C, x) C = queue<x> ()
		#define Fill(C,a) fill(C.begin(), C.end(), a)
		
		// Customize containers
		
		#define SORT(C) sort(C.begin(), C.end())
		#define SORTD(C,x) sort(C.begin(), C.end(), greater<x>())
		#define SORTC(C,check) sort(C.begin(), C.end(), check)
		#define tlw(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = tolower(C[i])
		#define tup(C) for(int i=0; i<(sizeof(C)/sizeof(C[0])); i++) C[i] = toupper(C[i])
		#define Merge(C,F,K) merge(C.begin(), C.end(), F.begin(), F.end(), K.begin());
		#define Unique(C) C.erase(unique(C.begin(), C.end()), C.end())
		#define CutInHalf(C,F,x,y) y<x> F(C.begin() + C.size()/2 + 1, C.end()); C.resize(C.size()/2)
		#define revrs(C) reverse(C.begin(), C.end())
		#define addString(token,a,b){if (a.length() < b.length()) swap(a,b);string token = "";reverse(a.begin(), a.end());reverse(b.begin(), b.end());int carry = 0;FOR(i,0,b.length()-1){carry = carry + (a[i] - '0') + (b[i] - '0');token.push_back(carry % 10 + '0');carry /= 10;}FOR(i,b.length(),a.length()-1){carry = carry + (a[i] - '0');token.pb(carry % 10 + '0');carry /= 10;}if (carry) token.pb(carry + '0');reverse(token.begin(), token.end());}
		#define multiplyString(token,a,b){reverse(A.begin(),A.end());reverse(B.begin(),B.end());string C;C.resize(A.length()+B.length(),'0');FOR(i,0,A.length()-1){int c = 0;FOR(j,0,B.length()-1){c += ((A[i]-'0') * (B[j]-'0') + C[i+j] -'0');C[i+j] = (char)(c%10 + '0');c/=10;}if (c > 0) C[i + B.length()] += c;}reverse(C.begin(),C.end());return C;}
		#define subtractString(token, a, b){string token = "";reverse(a.begin(), a.end());reverse(b.begin(), b.end());int carry = 0;int sum = 0;FOR(i,0,b.length()-1){sum = (a[i] - '0') - (b[i] - '0') - carry;if (sum < 0){carry = 1;sum += 10;}else carry = 0;token.pb(sum + '0');}FOR(i,b.length(),a.length()-1){sum = (a[i] - '0') - carry;if (sum < 0){carry = 1;sum += 10;}else carry = 0;token.pb(sum + '0');}reverse(token.begin(), token.end());while(token[0] == '0') token.erase(0,1);}

		
		// Scan and print containers
		
		#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
		#define get2(C,a,b) for(int i=0; i<a; i++) for (int j=0; j<b; j++) cin>>C[i][j]
		#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getVector2(C) for(int i=0; i<C.size(); i++) for (int j=0; j<C[i].size(); j++) cin>>C[i][j]
		#define getDeque(C) for(int i=0; i<C.size(); i++) cin>>C[i]
		#define getSet(C, a, token) for(int i=0; i<a-1; i++) { cin>>token; C.insert(token); } cin>>token; C.insert(token)
		#define print(C,a) for(int i=0; i<a; i++) cout<<C[i]<<' '
		#define printVector(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		#define printSet(C,x) for (set<x>::iterator it = C.begin(); it!= C.end(); ++it) cout<<*it<<' '
		#define printDeque(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '
		
		// Converts between containers
		
		#define toSet(C,x) set<x> (C.begin(), C.end())
		#define toVector(C,x) vector<x> (C.begin(), C.end())
		#define toQueue(C,x) queue<x> (C.begin(), C.end())
		#define toDeque(C,x) deque<x> (C.begin(), C.end())
		#define toList(C,x) list<x> (C.begin(), C.end())
		#define toMultiset(C,x) multiset<x> (C.begin(), C.end())
		
		// Iterators
		
		#define pointer(A,x) A<x>::iterator
		
	// Containers
	
	#define um(x,y) unordered_map<x,y> 
	#define m(x,y) map<x,y> 
	#define p(x,y) pair<x,y> 
	#define us(x) unordered_set<x> 
	#define vec(x) vector<x> 
	#define vec2(C,x,y,token) vector<vector<token> > C(x, vector<token> (y, 0))
	#define pq(x) priority_queue<x>
	#define reverse_pq(x) priority_queue<x, vector<x>, greater<x> >
	
	// System
	
	#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	#define pause() system("pause");

// Namespaces

using namespace std;
// using namespace __gnu_pbds;
// using namespace __gnu_cxx;
// using namespace __gnu_debug;
// using namespace __gnu_internal; //	GNU implemenation details, not for public use or export. Used only when anonymous namespaces cannot be substituted
// using namespace __gnu_parallel; //	GNU parallel code for public use
// using namespace __gnu_pbds; //	GNU extensions for policy-based data structures for public use
// using namespace __gnu_profile; //	GNU profile code for public use
// using namespace __gnu_sequential;
// using namespace boost::multiprecision;
// using boost::multiprecision::cpp_dec_float_50;

//===================== Your code starts HERE =====================

//struct ele
//{
//	
//};

ll notLeaf[1001], left1[1001], right1[1001], index1[1001];

void Setup(ll y, ll a)
{
	index1[y] = a;
	if (left1[y] != 0) Setup(left1[y], a + 1);
	if (right1[y] != 0) Setup(right1[y], a + 1);
}

void addRight(ll x, ll y)
{
	right1[x] = y;
	if (index1[x] == 0) index1[x] = 1;
	index1[y] = index1[x] + 1;
	notLeaf[x] = 1;
	Setup(y,index1[y]);
}

void addLeft(ll x, ll y)
{
	left1[x] = y;
	if (index1[x] == 0) index1[x] = 1;
	index1[y] = index1[x] + 1;
	notLeaf[x] = 1;
	Setup(y,index1[y]);
}

int main()
{
	#define ll long long
	map<ll, ll> mymap;
    #define Begin() int N; cin>>N; cin.ignore(); while(N--)
	Begin()
	{

		ll a;
		cin >> a;
		mymap.clear();
        #define reset(C) memset(C,0,sizeof(C))
		reset(notLeaf);
		reset(left1);
		reset(right1);
		reset(index1);

        #define FOR(i,a,b) for (int i=a; i<=b; i++)
		FOR(i, 0, a - 1)
		{
			ll x, y;
			char token;
			cin >> x >> y >> token;
			mymap[x]++;
			if (token == 'R') addRight(x,y);
			if (token == 'L') addLeft(x,y);
		}
        #define m(x,y) map<x,y> 
		m(ll,ll)::iterator it;
		ll token = 0;
		for (it = mymap.begin(); it != mymap.end(); ++it)
		{
			if (it->second != 2 && it->second != 0)
			{
				token = 1;
				break;
			}
		}
		ll counting = 0;
		ll token2 = 0;
		FOR(i,0,1000)
		{
			if (notLeaf[i]) continue;
			if (!index1[i]) continue;
			if (token2 != index1[i])
			{
				token2 = index1[i];
				counting++;
			}
		}
		token == 0 && counting == 1 ? cout << "Yes" : cout << "No";
		cout << endl;
	}
}