string isBalanced(string s) {
    stack<char>a;
    int i,j,n=s.length();
    for(i=0;i<n;i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            a.push(s[i]);
        else{
            if(a.empty())
                return "NO";
            else {
                char b=a.top();
                a.pop();
                if(s[i]==')'&&b=='(' ||s[i]==']'&&b=='[' ||s[i]=='}'&&b=='{')
                    continue;
                else
                    return "NO";
            }
        }
    }
    if(!a.empty())
        return "NO";
    else
        return "YES";


}
