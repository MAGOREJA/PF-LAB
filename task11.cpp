#include <iostream>

using namespace std;
string calculatePoolState(int V, int P1, int P2, float H);
int main()
{
    int Vol = 0;
    int Flow1 = 0;
    int Flow2 = 0;
    float Hours = 0;
    cout << "Enter volume of the pool in liters: ";
    cin >> Vol;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> Flow1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> Flow2;
    cout << "Enter hours that the worker is absent: ";
    cin >> Hours;

    calculatePoolState(Vol, Flow1, Flow2, Hours);

    return 0;
}

string calculatePoolState(int V, int P1, int P2, float H)
{
    float pool = 0;
    float pipe1 = 0;
    float pipe2 = 0;
    float percent1 = 0;
    float percent2 = 0;
    float overflow = 0;
    string result = "";

    pool = (P1 + P2) * H;
    percent1 = (P1 * H) / pool * 100;
    percent2 = (P2 * H) / pool * 100;

    if (pool <= V)
    {
        cout << "The pool is " << (int)(pool / 10) << "% full. Pipe 1: " << (int)percent1 << "%. Pipe 2: " << (int)percent2 << "%.";
    }
    else
    {
        overflow = pool - V;
        cout << "For " << H << " hours, the pool overflows with " << overflow << " liters.";
    }

    return result;
}



