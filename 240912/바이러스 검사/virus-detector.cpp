#include <iostream>
#include <vector>
using namespace std;

vector<int> customer;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int cus;

        cin >> cus;

        customer.push_back(cus);
    }

    int cap_num, mem_number;

    cin >> cap_num >> mem_number;

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        customer[i] -= cap_num;
        ans++;
        if (customer[i] <= 0) continue;
        
        if (customer[i] % mem_number == 0) ans += customer[i] / mem_number;
        else ans += customer[i] / mem_number + 1;
    }
    
    cout << ans;

    return 0;
}