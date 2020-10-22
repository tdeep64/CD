#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{

    cout<<"NAME : Tarandeep Singh"<<endl;
   cout<<"Roll Number : 1816110219 "<<endl;

    string s;
    getline(cin, s);
    int n = s.size();
    unordered_set<int> st;
    
    st.insert(43);
    
    st.insert(45);
    
    st.insert(42);
    
    st.insert(47);
    
    st.insert(61); 

    
    int opr = 0, cons = 0, var = 0, i = 0;

    while (i < n)
    {
        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            cons++;
            while (i < n && int(s[i]) >= 48 && int(s[i]) <= 57)
                i++;
        }

        else if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
        {
            var++;
            while (i < n && ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57)))
            {
                i++;
            }
        }

        else if (st.find(int(s[i])) != st.end())
        {
            opr++;
            i++;
        }
        else if (int(s[i]) == 32)
        {

            i++;
        }
    }
    cout << "There are " << endl
         << opr << " operators, " << endl
         << cons << " Constants" << endl
         << var << " Variables" << endl;
}
