#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set< queue<int> > s;
    queue<int> q;
    int n, x;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }
    
    s.insert(q);
    
    s = func(s);
    
    while (!s.empty()) {
        queue<int> q = s.front();
        s.erase(s.begin());
        
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        
        cout << endl;
    }
    
    return 0;
}