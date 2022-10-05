#include <iostream>
#include <vector>
#include <complex>
#include <cmath>
using namespace std;


const double PI = acos(-1);
typedef complex<double> cpx;

void FFT(vector<cpx> &v, bool inv) {
    int S = v.size();
	
    for(int i=1, j=0; i<S; i++) {
        int bit = S/2;

        while(j >= bit) {
            j -= bit;
            bit /= 2;
        }
        j += bit;

        if(i < j) swap(v[i], v[j]);
    }

    for(int k=1; k<S; k*=2) {
        double angle = (inv ? PI/k : -PI/k);
        cpx w(cos(angle), sin(angle));

        for(int i=0; i<S; i+=k*2) {
            cpx z(1, 0);

            for(int j=0; j<k; j++) {
                cpx even = v[i+j];
                cpx odd = v[i+j+k] * z;

                v[i+j] = even + odd;
                v[i+j+k] = even - odd;

                z *= w;
            }
        }
    }

    if(inv)
        for(int i=0; i<S; i++) v[i] /= S;
}

vector<cpx> mul(vector<cpx> &v, vector<cpx> &u) {
    int S = 2;
    while(S < v.size() + u.size()) S *= 2;

    v.resize(S); FFT(v, false);
    u.resize(S); FFT(u, false);

	vector<cpx> w(S);
    for(int i=0; i<S; i++) w[i] = v[i]*u[i];
    FFT(w, true);

    return w;
}


int main(void) {
	int N, M;
	cin >> N;
	vector<cpx> v(200001), u(200001);
	vector<int> check(200001);
	for(int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;
		
		v[tmp] = {1,0};
		u[tmp] = {1,0};
		check[tmp] = 1;
	}
	
	vector<cpx> a = mul(v, u);
	
	cin >> M;
	int ans = 0;
	while(M--) {
		int tmp;
		cin >> tmp;
		
		if(check[tmp]>0 || round(a[tmp].real())>0) ans++;
	}
	cout << ans;
	
	return 0;
}