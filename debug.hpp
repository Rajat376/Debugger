#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}

template<typename T>
void __print(const set<T> &x) {
    cerr << '[';
    auto it = x.begin();  // Get the iterator to the first element
    if (it != x.end()) {
        __print(*it);  // Print the first element
        ++it;  // Increment the iterator
    }
    for (; it != x.end(); ++it) {
        cerr << ',';
        __print(*it);
    }
    cerr << ']';
}
template<typename T>
void __print(queue<T> q) {
    cerr << '[';
    
    while(!q.empty()) {
        cerr << ',';
        __print(q.front());
        q.pop();
    }
    cerr << ']';
}
template<typename T>
void __print(priority_queue<T> q) {
    cerr << '[';
    
    while(!q.empty()) {
        if (q.size() != 1) {
            __print(q.top());
            cerr << ',';
        } else {
            __print(q.top());
        }
        q.pop();
    }
    
    cerr << ']';
}

template <typename T, template <typename> class Compare>
void __print(priority_queue<T, vector<T>, Compare<T>> q) {
    cerr << '[';
    
    while(!q.empty()) {
        if (q.size() != 1) {
            __print(q.top());
            cerr << ',';
        } else {
            __print(q.top());
        }
        q.pop();
    }
    
    cerr << ']';
}
template<typename T,size_t N>
void __print(const array<T, N>& x) {
     cerr << '[';
    auto it = x.begin();  // Get the iterator to the first element
    if (it != x.end()) {
        __print(*it);  // Print the first element
        ++it;  // Increment the iterator
    }
    for (; it != x.end(); ++it) {
        cerr << ',';
        __print(*it);
    }
    cerr << ']';
}
template<typename T>
void __print(const vector<T> &x) {
    cerr << '[';
    auto it = x.begin();  // Get the iterator to the first element
    if (it != x.end()) {
        __print(*it);  // Print the first element
        ++it;  // Increment the iterator
    }
    for (; it != x.end(); ++it) {
        cerr << ',';
        __print(*it);
    }
    cerr << ']';
}
template<typename T, typename V, typename X>
void __print(const map<T, V,greater<X>> &x) {
    cerr << "(";
    for (auto it : x)
    {
        cerr << "{ "; __print(it.first); cerr << ','; __print(it.second); cerr << " }";
    }
    cerr << ")";
}
template<typename T, typename V>
void __print(const map<T, V> &x) {
    cerr << "(";
    for (auto it : x)
    {
        cerr << "{ "; __print(it.first); cerr << ','; __print(it.second); cerr << " }";
    }
    cerr << ")";
}


template<typename T>
void __print(stack<T> x)
{

    cerr << '[';
    while (!x.empty())
    {
        __print(x.top());
        x.pop();
        if (!x.empty())
            cerr << ',';
        }
    cerr << ']';
}






void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
