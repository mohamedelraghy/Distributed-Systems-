#include <omp.h>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){

    vll vec1, vec2;
    ll Sum = 0;

    for(int i = 0; i < 1000; i++) vec1.push_back(i + 1);
    vec2 = vec1;

    #pragma omp parallel for shared(vec1, vec2, Sum)
                   
        for(int i = 0; i < 1000; i++){
            cout << "\nSubmsion of two valuse = " << vec1[i] + vec2[i] << "\nand it's RUN at THREAD NO. = " << omp_get_thread_num() << endl;
            Sum += (vec1[i] + vec2[i]);
        }    
    
    cout << "Sum = " << Sum << endl;
            
}
