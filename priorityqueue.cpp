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
