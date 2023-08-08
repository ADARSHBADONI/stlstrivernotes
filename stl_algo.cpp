 bool comp(pair<int,int>p1,pair<int,int>p2){
 	if(p1.second<p2.second)return true;//correct order
 	if(p1.second>p2.second)return false;//not a correct order they swap
 	//they are same
 	if(p1.first>p2.first)return true;
 	return false;//swap it
 	//in case of comparator dont think or arrays think of pairs
 }


//agorithms
 void explainalgo{

	//eg: sort{1,5,3,2}
	sort(a,a+n);//sort(first,last)
	sort(v.begin(),.end());

	//{1,3,5,2} let we have to sort {5 and 2}
	sort(a+2,a+4);
	//sort in decending order
	sort(a,a+n,greater<int>);

	pair<int,int>a[]={{1,2},{2,1},{4,1}};
	//sort it according to the increasing second element{{2,1}{4,1}{1,2}}
	//if second element is same,then sort
	//it according to first element but in decending 
	//ans {{4,1}{2,1}{1,2}}
    
    //comparator is used for my way*
	sort(a,a+n,comp);
	//{4,1},{2,1},{1,2}};

	int num=7;
	int cnt=__builtin_popcount();//no of set bits or no of ones as no is represented in 32 bits
	// in the form of 0s and 1s.prints 3 in case of 7

	long long num=16578687;
	int cnt=__builtin_popcountll();

	string s="123";
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));//prints all the permutation of the string

	int maxi=*max_element(a,a+n);

}
