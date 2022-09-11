#include <bits/stdc++.h>
using namespace std;

struct node
{
    char c;
    int a;
};

int check(node* ,const int,string,string,string);
bool fun(const int, node*, int, string, string, string);
bool solve(string, string, string);

vector<int> vec(10);

int check(node* arr, const int count, string s1,string s2, string s3){

    int v1 = 0, v2 = 0, v3 = 0, m = 1, j, i;

    for (i = s1.length() - 1; i >= 0; i--){

        char ch = s1[i];
        for (j = 0; j < count; j++)
            if (arr[j].c == ch)
                break;
  
        v1 += m * arr[j].a;
        m *= 10;
    }

    m = 1;
    for (i = s2.length() - 1; i >= 0; i--)
    {
        char ch = s2[i];
        for (j = 0; j < count; j++)
            if (arr[j].c == ch)
                break;
  
        v2 += m * arr[j].a;
        m *= 10;
    }

    m = 1;
    for (i = s3.length() - 1; i >= 0; i--)
    {
        char ch = s3[i];
        for (j = 0; j < count; j++)
            if (arr[j].c == ch)
                break;
  
        v3 += m * arr[j].a;
        m *= 10;
    }

    if (v3 == (v1 + v2))
        return 1;

    return 0;
}

  
bool permutation(const int count, node* arr, int n, string s1, string s2, string s3)
{
    if (n == count - 1){

        for (int i = 0; i < 10; i++)
        {
            if (vec[i] == 0){

                arr[n].a = i;
                if (check(arr, count, s1, s2, s3) == 1){

                    for (int j = 0; j < count; j++)
                        cout << " " << arr[j].c << " = "<< arr[j].a<<endl;
                    return true;
                }
            }
        }
        return false;
    }
  
    for (int i = 0; i < 10; i++)
    {
        if (vec[i] == 0)
        {
            arr[n].a = i;
            vec[i] = 1;
            if (permutation(count, arr, n + 1, s1, s2, s3))
                return true;

            vec[i] = 0;
        }

    }
    return false;
}
  
bool solve(string s1, string s2, string s3)
{
    int count = 0;
    int len1 = s1.length();
    int len2 = s2.length();
    int len3 = s3.length();

    vector<int> freq(26);
  
    for (int i = 0; i < len1; i++)
        ++freq[s1[i] - 'A'];
  
    for (int i = 0; i < len2; i++)
        ++freq[s2[i] - 'A'];
  
    for (int i = 0; i < len3; i++)
        ++freq[s3[i] - 'A'];

    for (int i = 0; i < 26; i++)
        if (freq[i] > 0)
            count++;

    if (count > 10)
        return 0;
  
    node arr[count];
  
    for (int i = 0, j = 0; i < 26; i++){

        if (freq[i] > 0){
            arr[j].c = char(i + 'A');
            j++;
        }
    }
    return permutation(count, arr, 0, s1, s2, s3);
}

int main()
{
    string s1 = "SEND";
    string s2 = "MORE";
    string s3 = "MONEY";
  
    if (solve(s1, s2, s3) == false)
        cout << "No solution";
    return 0;
}