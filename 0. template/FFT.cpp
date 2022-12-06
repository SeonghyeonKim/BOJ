
//-----------------------------------------------------------

// define PI, cpx
const double PI = acos(-1);
typedef complex<double> cpx;

// fast fourier transform
// inv==0 : DFT, inv==1 : IDFT
// n-1 dimension polinomial 'v' convert to n complex
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
                cpx odd = v[i+j+k];

                v[i+j] = even + z*odd;
                v[i+j+k] = even - z*odd;

                z *= w;
            }
        }
    }

    if(inv)
        for(int i=0; i<S; i++) v[i] /= S;
}

// return polinomial v*u
// O(n log n)
vector<int> mul(vector<int> &v, vector<int> &u) {
    vector<cpx> vc(v.begin(), v.end());
    vector<cpx> uc(u.begin(), u.end());

    int S = 2;
    while(S < v.size() + u.size()) S *= 2;

    vc.resize(S); FFT(vc, false);
    uc.resize(S); FFT(uc, false);

    for(int i=0; i<S; i++) vc[i] *= uc[i];
    FFT(vc, true);

    vector<int> w(S);
    for(int i=0; i<S; i++) w[i] = round(vc[i].real());

    return w;
}

