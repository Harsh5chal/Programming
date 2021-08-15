vector<string> Solution::prettyJSON(string A) {
    vector<string> ans;
    string temp = "";
    int cnt = 0;
for(int i = 0; i < (int)A.size(); i++) {
    if(A[i] == ' ') continue;
    else if(A[i] == '{') {
        ans.push_back(temp);
        ans[(int)ans.size() - 1].push_back('{');
        cnt++;
        temp += '\t';
    }
    else if(A[i] == '[') {
        ans.push_back(temp);
        ans[(int)ans.size() - 1].push_back('[');
        cnt++;
        temp += '\t';
    }
    else if(A[i] == '}') {
        temp = "";
        cnt--;
        for(int j = 0; j < cnt; j++) temp += '\t';
        ans.push_back(temp);
        ans[(int)ans.size() - 1].push_back('}');
    }
    else if(A[i] == ']') {
        temp = "";
        cnt--;
        for(int j = 0; j < cnt; j++) temp += '\t';
        ans.push_back(temp);
        ans[(int)ans.size() - 1].push_back(']');
    }
    else if(A[i] == ',') {
        ans[(int)ans.size() - 1].push_back(A[i]);
    }
    else {
        ans.push_back(temp);
        while(A[i] != '{' && A[i] != '}' && A[i] != '[' && A[i] != ']' && A[i] != ',') {
            ans[(int)ans.size() - 1].push_back(A[i]);
            i++;
        }
        i--;
    }
}
return ans;
}
