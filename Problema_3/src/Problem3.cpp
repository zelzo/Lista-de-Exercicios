

queue<int> funcA(queue<int> q1, queue<int> q2) {
    int n = q1.size();
    queue<int> q3, q4;
    
    for (int i = 0; i < n/2; i++) {
        q3.push(q1.front());
        q1.pop();
        q3.push(q2.front());
        q2.pop();
    }
    
    for (int i = 0; i < n/2; i++) {
        q4.push(q1.front());
        q1.pop();
        q4.push(q2.front());
        q2.pop();
    }
    
    return q3, q4;
}

queue<int> funcB(queue<int> q) {
    int n = q.size();
    queue<int> q2;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += q.front();
        q.pop();
    }
    
    for (int i = 0; i < n; i++) {
        q2.push(sum);
        sum -= q.front();
        q.pop();
    }
    
    return q2;
}




set< queue<int> > funcC(set< queue<int> > s) {
    int n = s.size();
    set< queue<int> > s2;
    
    for (int i = 0; i < n; i++) {
        queue<int> q = s.front();
        s.pop();
        int sum = 0;
        
        for (int j = 0; j < q.size(); j++) {
            sum += q.front();
            q.pop();
        }
        
        for (int j = 0; j < q.size(); j++) {
            q.push(sum);
            sum -= q.front();
            q.pop();
        }
        
        s2.insert(q);
    }
    
    return s2;
}


set< queue<int> > funcD(set< queue<int> > s) {
    int n = s.size();
    set< queue<int> > s2;
    
    for (int i = 0; i < n; i++) {
        queue<int> q = s.front();
        s.pop();
        int sum = 0;
        
        for (int j = 0; j < q.size(); j++) {
            sum += q.front();
            q.pop();
        }
        
        for (int j = 0; j < q.size(); j++) {
            q.push(sum);
            sum -= q.front();
            q.pop();
        }
        
        s2.insert(q);
    }
    
    return s2;
}

