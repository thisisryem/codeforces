    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        int p_solved = 0;
     
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
     
            if ((a + b + c) >= 2)
            {
                p_solved++;
            }
        }
     
        cout << p_solved << endl;
        return 0;
    }
