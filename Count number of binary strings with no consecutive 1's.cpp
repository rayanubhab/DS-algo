	ll countStrings(int n) {
	    ll mod = 1e9+7;
	    ll t[n];
	    t[0] = 2;
	    t[1] = 3;
	    
	    for(ll i=2;i<n;i++){
	        t[i] = ((t[i-1]%mod)+(t[i-2]%mod))%mod;
	    }
	    return t[n-1]%mod;
	}
