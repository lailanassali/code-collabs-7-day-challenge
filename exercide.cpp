#include <iostream>
#include <cmath>
#include <vector>
#include <unordered_map>

using namespace std;




string task1(int number) {
	unordered_map<int, string> hashtable {
		{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}, {10,"Ten"},
		{11,"Eleven"}, {12,"Twelve"}, {13,"Thirteen"}, {14, "Fourteen"}, {15,"Fiftheen"}, {16,"Sixteen"}, {17,"Seventeen"}, {18,"Eighteen"},
		{19, "Nineteen"}, {20, "Twenty"},{30, "Thirty"},{40, "Fourty"},{50, "Fifty"}, {60,"Sixty"}, {70,"seventy"}
		};
	if (11<=number && number<=19) return hashtable[number];
	return hashtable[(number/10)*10] + " " + hashtable[(number%10)];
}


/*


    46 -> 40  -> 6
    40  

*/








int main(int argc, char *argv[]) {
	
	for (int i=1; i<=50;i++) {
		cout << task1(i) << endl;
	}
	
}