    #include <iostream>

    using std::cin;
    using std::cout;
    using std::endl;

    int main()
    {
        int numCount, sum=0;
        cin >> numCount;

        for (int i = 1; i <= numCount; i++) {
            int num;
            cin >> num;
            sum += num;
        }
        cout << sum << endl;

        return 0;
    }
