// 5 5 4 6 4
//4 4 5 5 6

// We can do also do this using max heap and but this will not guarantee that the element with smaller 
//value will come first so we will need to write our own comparator function like this whose logic will be same



bool comparator(pair<int,int> p1,pair<int,int> p2){
	
	if(p1.second<p2.second){
	return false;}
	
	else if(p1.second>p2.second){
		return true;
	}
	
	else{
		
		if(p1.first>p2.first) return false;
		else return true;
	}
}

void frequencysort(int a[],int n){
	
	unordered_map<int,int> m;
	
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	
	vector<pair<int,int>> freq;
	
	for(auto x : m){
		freq.push_back({x.first,x.second});
	}
	sort(freq.begin(),freq.end(),comparator);
	
	
	for(int i=0;i<freq.size();i++){
		for(int j=1;j<freq[i].second;j++){
			cout<<freq[i].first<<" ";
		}
	}
}
