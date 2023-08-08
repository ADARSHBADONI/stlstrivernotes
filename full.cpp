#include<bits/std++.h>
using namespace std;

int main(){

}
//pair
void explainpair(){
	pair<int,int> p = {1,3}
	cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> p = {1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

    pair<int,int> arr[] ={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;//5
}
//vector
void explainvector(){
	vector<int>v;//array are constant size but vector are dynamic in size stores elemnts in same manner as array

	v.push_back(1);
	v.emplace_back(2);//type of push_back but faster than the push back;

	vector <pair<int,int>>vec;
	vec.push_back({1,2});
	vec.emplace_back(1,2);//emplace back automatically asumes it as a pair and takes it as input and inserts it .

	vector<int> v(5,100);//five instances with 100 as a value {100,100,100,100,100}

	vector<int>v(5);//five instances of 0 value or garbage values

	vector<int>v1(5,200);//{20,20,20,20,20}
	vector<int>v2(v1);//v2 similar container of 5 vales in simpler way acopy of the v1 vector

	//access the elements in the vector
	vector<int>::iterator it =v.begin();//it is just a name eg {20 10 15 6 7} begin points to 20

	//iterator points to the memory address as these values are stored in some memory address
	//.begin() it points not to the element but to the memory

	it++;//element 10 memory

	cout<<*(it)<<" ";//it gives the memory but *(it) gives the element of that memory
    //*(it) prints 10;

	it =it+2;
	cout<<*(it)<<" ";//prints 6
    
    //{10,20,30,40}
	vector<int>::iterator it =v.end();//points memory location after 40

	vector<int>::iterator it =v.rend();//points memory location before 10

	vector<int>::iterator it =v.rbegin();//points to 40 if be do i++ it will move in reverse order i.e it points to 30

	cout<<v[0]<<" "<<v.at(0);//both v[0] and v.at(0) does the same thing

	cout<<v.back()<<" ";//eg {10,20,30} element 30 is printed

	//loop to print the entire vector
	for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
		cout<<*(it)<<" ";
	} 
	//shorter version
	for (auto it =v.begin();it!=v.end();it++){//auto automatically defines the data type according to the data.
		cout<<*(it)<<" ";
	}
	//for each loop for printing the same
	for(auto it:v){
		cout<<it<<" ";
	}

	//deletion in a vector
	//{10,20,12,23}
	v.erase(v.begin()+1);//deletes 20

	//{10,20,12,23,35}
	v.erase(v.begin()+2,v.begin()+4);//{10,20,35 }[start, end]
             //12        //35


	//insert functions

	vector<int>v(2,100);//{100,100}
	v.insert(v.begin(),300);//{300,100,100}
	v.insert(v.begin()+1,2,10)//{300,10,10,100,100} (location,total nos,number)

	//insert vector in vector
	vector<int>copy(2,50);//{50,50}
	v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

	//{10,20}
	cout<<v.size();//2

	//{10,20}
	v.popback();//{10}

	//v1->{10,20}
	//v2->{30,40}
	v1.swap(v2);//v1->{30,40} v2->{10,20}

	v.clear();//erase the entire vector

	cout<<v.empty();
}

void explainlist(){
	//similar to vector give front operations as well
	list<int>ls;
	ls.push_back(2);//{2}
	ls.emplace_back(4);//{2,4}
     
	ls.push_front(5);//{5,2,4}

	ls.emplace_front(6)//{6,5,2,4}

	//rest functions same as vector 
	//begin,end,rbegin,rend,clear,insert,size,swap
}

void explaindeque(){
	deque<int>dp;
	dp.push_back(1);//{1}
	dp.emplace_back(2);//{1,2}
	dq.push_front(4);//{4,1,2}
	dq.emplace_back(3);//{3,4,1,2}

	dq.pop_back();//{3,4,1}
	dq.pop_front();//{4,1}

	dq.back();

	dq.front();

	//rest function same as vector
	//begin,end,rbegin,rend,clear,insert,size,swap
}
void explainstack(){//works on LIFO basis 0(1) complexity
	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(3);
	st.emplace(5);//{5,3,3,2,1}

	cout<<st.top();//print5 "** st[2] is invalid **"

	st.pop();

	cout<<st.top();//3
	cout<<st.size();//4
	cout<<st.empty();

	stack<int>st1,st2;
	st1.swap(st2);
}

void explainqueue(){//works on fifo basis
	queue<int> q;
	q.push(1);//{1}
	q.push(2);//{1,2}
	q.emplace(4);//{1,2,4}

	q.back()+=5;

	cout<<q.back();//prints 9


	cout<<q.front();//prints 1

	q.pop();//{2,9}
    
    //q is {2,9}
	cout<<q.front();//prints 2

	//size swap empty same as stack

}

void priorityqueue(){//element with largest value stays at the top
	priority_queue<int>pq;//max heap or mac priority queue
	pq.push(5);//{5}
	pq.push(2);//{5,2} 
	pq.push(8);//{8,5,2}
	pq.emplace(10);//{10,8,5,2}

	cout<<pq.top();//prints 10

	pq.pop();//{8,5,2}
	cout<<pq.top();//prints 8

	//size swap empty function same as others

	//minimum heap
	priotity_queue<int,vector<int>,greater<int>>pq;//min heap or minimum priority queue
	pq.push(5);//{5} 
	pq.push(2);//{2,5}
	pq.push(8);//{2,5,8}
	pq.emplace(10);//{2,5,8,10}
	
	cout<<pq.top();//prints 2

	//push and pop complexity is logn and top complexity is O(1)

}
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

