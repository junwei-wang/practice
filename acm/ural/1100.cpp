#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node
{
	int id;
	int solved;
} a[150005];

bool compare_desend(node m, node n)
{
	return (m.solved > n.solved);
}

int main()
{
	int N;
	cin >> N;

	for (int i=0; i<N; i++) 
		cin >> a[i].id >> a[i].solved;
	
	stable_sort(a, a+N, compare_desend);

	for (int i=0; i<N; i++) 
		cout << a[i].id << " " << a[i].solved << endl;
}
