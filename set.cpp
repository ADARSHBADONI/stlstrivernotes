 void explainset(){//everything occurs in logrethmic time complexity i.e logn
  	set<int>set;//stores sorted* and unique* elements
  	st.insert(1);//{1}
  	st.emplace(2);//{1,2}
  	st.insert(2);//{1,2}
  	st.insert(4);//{1,2,4}
  	st.insert(3);//{1,2,3,4}

  	//functionality of insert in vectors
  	//can be used also,that only increases
  	//efficiency

  	//begin(),end(),rbegin(),rend(),size(),
  	//empty() are same as these above

  	//{1,2,3,4,5}
  	auto it=st.find(3);

    //{1,2,3,4,5}
  	auto it=st.find(6);//if the element is not present in the set it will return st.end() i.e points after the last element address

  	//{1,4,5}
  	st.erase(5);//erase 5 //takes lograthmic time

  	int cnt=st.count(1);//not present give 0

  	auto cnt=st.find(3);
  	st.erase(it);//it takes constant time
  	//[1,2,3,4,5]
  	auto it1=st.find(2);
  	auto it2=st.find(4);
  	st.erase(it1,it2);//after erase{1,4,5}[first,last]

  	//lower_bound() and upper_bound() function works in the same way
    //as in vector it does

    //this is the syntax
    auto it=st.lower_bound(2);
    auto it=st.upper_bound(3);

}

void explainmultiset(){
	//everything is same as set
	//only stores duplicate elements also

	multiset<int>ms;
	ms.insert(1);//{1}
	ms.insert(1);//{1,1}
	ms.insert(1);//{1,1,1}

	ms.erase(1);

	int cnt=st.count(1);

	ms.erase(ms.find(1));//only a single 1 erased

	ms.erase(ms.find(1),ms.find(1)+2);//(start,end)

	//rest all functions same as set
}

void explainUnorderedset(){//rendomize order with unique elements .mostly time complexity O(1) in worst case O(n)
	unordered_set<int>st;
	//lower_bound and upper_bound function
	//doesnot works,rest all functions are same
	//as above, it does not stores in any
	//perticular order it has a better complexity
	//than set in most cases,except some when collision happens
}
