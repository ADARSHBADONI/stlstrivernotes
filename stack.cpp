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
