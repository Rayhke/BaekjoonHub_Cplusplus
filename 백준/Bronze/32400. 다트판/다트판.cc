#include <iostream>
using namespace std;

int main() {
    int index; long double Alice = 0, Bob = 0, In[20];
    for (int n = 0; n < 20; n++) {
        cin >> In[n]; Bob += In[n];
        if (In[n] == 20) { index = n; }
    }
    Alice += In[index] + In[index - 1 != -1 ? index - 1 : 19] + In[index + 1 != 20 ? index + 1 : 0];
    Alice /= 3; Bob /= 20;
    cout << (Alice != Bob ? (Alice > Bob ? "Alice" : "Bob") : "Tie");
    return 0;
}