class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string msg;
        for (string &s : strs)
        {            int x = s.size();
            msg += to_string(x);
            msg += "#";
            for (char c : s)
            {
                msg += c;
            }
        }
        return msg;
    }

    vector<string> decode(string s)
    {

        vector<string> v;

        if (s.size() == 0)
        {

            return v;
        }
        int length = 0, i = 0;
        string l, subs;
        bool valid = true;
        while (i < s.size())
        {
            if (valid && s[i] != '#')
            {
                l += s[i];
                ++i;
            } // read length
            else if(valid && s[i]=='#')
            {
                length = stoi(l);
                i++;
                if (length == 0)
                {
                    v.push_back("");
                    l.clear();
                    continue;
                }
                valid = false;
            }
            else if (!valid && length > 0)
            {
                subs += s[i];
                --length;
                if (length == 0)
                {
                    v.push_back(subs);
                    subs.clear();
                    l.clear();
                    valid = true;
                }
                ++i;
            }
        }
        return v;
    }
};