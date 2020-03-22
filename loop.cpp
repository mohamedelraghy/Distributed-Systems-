#include <omp.h>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){


    #pragma omp parallel
    {
        vi vec1, vec2;
        #pragma omp for
        for(int i = 0; i < 1000; i++) vec1.push_back(i + 1);
        vec2 = vec1;
        
        for(auto i : vec2) cout << i << endl;
    }
            
}
