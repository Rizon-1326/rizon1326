#include <bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int>& input)
{
	stack<int> tmpStack;

	while (!input.empty()) {
		int tmp = input.top();
		input.pop();

		while (!tmpStack.empty() && tmpStack.top() > tmp) {

			input.push(tmpStack.top());
			tmpStack.pop();
		}
		tmpStack.push(tmp);
	}

	return tmpStack;
}

stack<int> sortedMerge(stack<int>& s1, stack<int>& s2)
{
	stack<int> res;
	while (!s1.empty()) {
		res.push(s1.top());
		s1.pop();
	}
	while (!s2.empty()) {
		res.push(s2.top());
		s2.pop();
	}

	return sortStack(res);
}
int main()
{
	stack<int> s1, s2;
	s1.push(34);
	s1.push(3);
	s1.push(31);

	s2.push(1);
	s2.push(12);
	s2.push(23);
	stack<int> tmpStack = sortedMerge(s1, s2);
	cout << "Sorted and merged stack :\n";

	while (!tmpStack.empty()) {
		cout << tmpStack.top() << " ";
		tmpStack.pop();
	}
}
