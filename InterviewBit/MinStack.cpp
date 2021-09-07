stack<int> s;
stack<int> m;

MinStack::MinStack() {
    stack<int>().swap(s);
    stack<int>().swap(m);
}

void MinStack::push(int x) {
    if(s.empty()) m.push(x);
    else if(x<=m.top()) m.push(x);
    s.push(x);
}

void MinStack::pop() {
    if(!s.empty() && !m.empty() && s.top() == m.top())
        m.pop();
    if(!s.empty())
        s.pop();
}

int MinStack::top() {
    if(!s.empty()) return s.top();
    return -1;
}

int MinStack::getMin() {
    if(!m.empty()) return m.top();
    return -1;
}

