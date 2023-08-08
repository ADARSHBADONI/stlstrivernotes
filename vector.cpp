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
