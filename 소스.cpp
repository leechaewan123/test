#include <iostream>
#include <string>
using namespace std;

//int max(int n,int m){
//	if (n > m){
//		cout << n;
//	}
//	else if (n < m){
//		cout << m;
//	}
//	else if (n == m){
//		cout << 0;
//
//	}
//	return 0;
//}
//int main(){
//	int n, m;
//	cin >> n >> m;
//	max(n,m);
//	max(20, 4);
//	max(176, 2);
//
//	return 0;
//}
class Item{
public: Item(){
			itemName = "null";
			price = 0;

}
		string itemName;
		int price;
};
int main(){
	Item item;
	cout << item.itemName;
	cout << item.price;

	cout << endl << endl;

	item.itemName = "피바라기";
	item.price = 3400;
	
	cout << item.itemName;
	return 0;
}