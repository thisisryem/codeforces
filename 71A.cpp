    #include <iostream>
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
        string text[n];
        for (int i = 0; i < n; i++)
        {
            cin >> text[i];
        }
     
        for (int i = 0; i < n; i++)
        {
            if (text[i].length() > 10)
            {
                cout << text[i][0] << text[i].length() - 2 << text[i].back() << endl;
            }
            else
            {
                cout << text[i] << endl;
            }
        }
        return 0;
    }
