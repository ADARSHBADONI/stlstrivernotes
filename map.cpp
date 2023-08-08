void explainMap(){//map is a container stores everything with respect to keys and values{key,value}
	//map stores unique key in sorted order similar to set data structure
	map<int,int>mpp;//*****sorted order of key****
	map<int,pair<int,int>>mpp;
	map<pair<int,int>,int>mpp;

	mpp[1]=2;//{1,2}
	mpp.emplace({3,1});//{1,2}{3,1}

	moo.insert({2,4});//{1,2}{2,4}{3,1}
	
	mpp[{2,3}]=10;//{{2,3},10}

	for(auto it: mpp){
		cout<<it.first<<" "<<it.second<<endl;
	}
  
  cout<<mpp[1];//prints 2
  cout<<mpp[5];//null or prints 0 as it does not exist in above

  auto it=mpp.find(3);
  cout<<*(it).second;//prints 1 as{3,1}

  auto it=mpp.find(5);//points mpp.end()

  //this is syntax
  auto it=mpp.lower_bound(2);

  auto it=mpp.upper_bound(3);
  //erase,swap,size,empty,are same as above

}

 void explainMiltimap(){
 	//everything same as map,only it can store multiple keys but in sorted order.you can store duplicate keys
 	//only mpp[key] cannot be used here
 }
 void explainUnorderedmap(){//complexity O(1) worst case is O(n)
 	//same as set and unordered_set difference.unique keys but not sorted
 }
