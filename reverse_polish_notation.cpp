int evalRPN(vector<string>& tokens)
{
    stack<string> s;
    for (int i = 0; i < tokens.size(); ++i)
    {
        string cur = tokens[i];
        if (cur == "+" || cur == "*" || cur == "-" || cur == "/")
        {
            int op1 = stoi(s.top());
            s.pop();
            int op2 = stoi(s.top());
            s.pop();
            if (cur == "+")
                s.push(to_string(op1 + op2));
            if (cur == "*")
                s.push(to_string(op1 * op2));
            if (cur == "-")
                s.push(to_string(op2 - op1));
            if (cur == "/")
                s.push(to_string(op2 / op1));
        }
        else
            s.push(tokens[i]);
    }
            
    return stoi(s.top());
}