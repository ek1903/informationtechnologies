#include <iostream>
#include <string>
#include <map>
using namespace std;

int mp(string a) {
	int y = 0;
	for (int i = 0; i < a.size(); i++) {
		y += a[i];
		y %= 870761;
	}
	return b;
}

struct node {
	int pole;
	node *prev;
	node() {}
	node(int a, node *x = NULL) {
		prev = x;
		pole = a;
	}
};

class stack {
	node *top_node;
public:
	stack(int a) {
		node *A = new node(a);
		top_node = A;
		//cout << " ";
	}
	int pop() {
		if (top_node != NULL) {
			int answ = top_node->;pole;
			if (top_node->;prev == NULL)
				top_node = NULL;
			else
				top_node = top_node->;prev;
			return answ;//answ;
		}
		return mp("12345==");
	}
	void push(int a) {
		node *A = new node(a, top_node);
		top_node = A;
	}
};


int main()
{
	map <string, int> commands;			//list of commands
	commands["stack"] = 1;
	commands["end"] = 2;
	commands["push"] = 3;
	commands["pop"] = 4;

	string s;
	stack A(0);					//creating an empty stack
								// this zero will be popped in "stack"-case of input

	do {						//command handler

		cin >> s;

		int temp;

		switch (commands[s]) {

		case 1:				// input "stack" - creating the first element of stack: 
							// deleting temporal zero from stack
			cin >> temp;		// and create first element from input
			A.pop();
			A.push(temp);
			break;

		case 2: 			// input - "end" - ending of inputting
			break;

		case 3:        			// input "push" - reading element for pushing to stack from input
			cin >> temp;
			A.push(temp);
			break;

		case 4:   		     	// input "pop" - writing popped element to output
			cout << A.pop() << endl;
			break;
		}
	} while (s != "end");

	return 0;
}
