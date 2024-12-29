#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

bool rabin_karp_search(const string&text,const string&pattern, int prime=101) {
    int n=text.length();
    int m=pattern.length();
    int h=1;
    int d=256;
    int p=0;
    int t=0;

    for(int i=0;i<m-1;i++)
        h=(h*d)%prime;

    for(int i=0;i<m;i++)
    {
        p=(d*p+pattern[i])%prime;
        t=(d*t+text[i])%prime;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool match=true;
            for(int j=0;j<m;j++)
            {
                if(text[i+j]!=pattern[j])
                {
                    match=false;
                    break;
                }
            }
            if(match)
                return true;
        }
        if(i<n-m)
        {
            t=(d*(t-text[i]*h)+text[i+m])%prime;
            if(t<0) 
                t+=prime;
        }
    }

    return false;
}

int main()
{
    string file_name="candidates.txt";
    ifstream infile(file_name);
    if(!infile.is_open())
    {
        cout<<"Error: Could not open file "<<file_name<<endl;
        return 0;
    }

    string search_name;
    cout<<"Enter the name to search for: ";
    getline(cin,search_name);

    string line;
    int line_number=1;
    bool found=false;

    while (getline(infile,line)) {
        if (rabin_karp_search(line,search_name))
        {
            cout<<"Found "<<search_name <<"    The details are: "<<line<<endl;
            found = true;
        }
        line_number++;
    }
    infile.close();
    if(!found)
    {
        cout<<"Name "<<search_name<<" not found in the file."<<endl;
    }

    return 0;
}
