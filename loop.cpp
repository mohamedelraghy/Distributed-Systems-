#include <omp.h>
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main(){


    #pragma omp parallel
    {
        vi vec1, vec2;
        ll Sum = 0;
        #pragma omp for{

            for(int i = 0; i < 1000; i++) vec1.push_back(i + 1);
            vec2 = vec1;

            for(int i = 0; i < 1000; i++){
                cout << "Submssion of two valuse = " << vec1[i] + vec2[i] << " and it's RUN at THREAD NO. = " << omp_get_thread_num() << endl;
                Sum += (vec1[i] + vec2[i]);
            } 
        }   
    }
            
}
