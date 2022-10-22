class Solution
{
    public:
        bool isValid(string s)
        {
            stack<char> temp;
            for (int i = 0; i < s.length(); i++)
            {
                char ch = s[i];
                if (ch == '(' || ch == '{' || ch == '[')
                {
                    temp.push(ch);
                }
                else
                {
                    if (!temp.empty())
                    {
                        char top = temp.top();
                        if ((ch == ')' && top == '(') ||
                            (ch == '}' && top == '{') ||
                            (ch == ']' && top == '['))
                        {
                            temp.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if (temp.empty()) return true;
            else return false;
        }
};