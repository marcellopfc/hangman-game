#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ll i=a;i<b;++i)
#define dbg(x) cout<<#x <<" = "<< x << endl
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int INF=0x3f3f3f3f;
const ll LINF=0x3f3f3f3f3f3f3f3fll;

void hangman(string s){
	int size=s.size();
	char c;
	system("clear");
	cout<<"Welcome to the Hangman Game\n\n\nyour word has "<<size<<" letters:\n\t\t";
	for(int i=0;i<size;i++){
		cout<<"__  ";
	}cout<<endl;
	cout<<"Pick a letter: ";
	cin>>c;
	
}

int main(){
		ifstream file;
		int i=0;
		vector<string> s(1001);
		file.open("words.txt");
		while(getline(file,s[i])){
			//cout<<s[i]<<" ";
			i++;
		}
		srand((unsigned) time(NULL));
		int random =(rand()%1000);
		string word=s[random];
		hangman(word);


		cout<<endl;
		return 0;
}



