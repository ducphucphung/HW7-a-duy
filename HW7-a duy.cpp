//Bài 1:
#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Enter N:";
	cin>>N;
	for(int i=1;i<N+1;i++){
		cout<<i<<","<<;
	}
	
}
//Bài 2:
#include <iostream>
using namespace std;
int main()
{
	int a[10];
	for (int i=0; i<10; i++)
	{
		a[i]=i+1;
		cout<<a[i]<<",";
	}
	return 0;
}
//Bài 3:
#include <climits>
#include <iostream>
using namespace std;
int main()
{
	int limit_int=INT_MAX;
	
	cout<<"Gia tri lon nhat cua int dat duoc:"<<limit_int<<endl;
	 
	int limit_llong=LLONG_MAX;
	cout<<"Gia tri lon nhat kieu long long int:"<<limit_llong<<endl;
}


//Bài 4:
#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cout << "Enter N" << std::endl;
    cin >> N;
    int* a = new int[N];
    for (int i = 0; i < N; i++) {
        int element = 0;
        cout << "Enter an element" << std::endl;
        cin >> element;
        a[i] = element;
        sum += a[i];
        
    }


    cout << sum << endl;
    for(int i = 0; i<N; i++)
    {
    	cout<<a[i]<<' ';
	}
    

    return true;
}
//Bài 5:
#include <iostream>
using namespace std;
int main()
{
	int M;
	cout<<"Enter M"<<endl;
	cin>>M;
	for(int i=2; i<M; i++)
	{
		if (M%i==0)
		{
			cout<<"Day khong phai la so nguyen to"<<endl;
			break;
		}
		else
		{
		    cout<<"Day la so nguyen to"<<endl;
		}
	}	
}
//Bài 6:
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout<<"nhap 1 chuoi:"<<endl;
	getline(std::cin, s);
	cout<<"day cua ban:"<<s<<endl;
	
}
//Bài 7:
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cout<<"nhap 1 chuoi:"<<endl;
	getline(std::cin, s);
	int size_s=sizeof(s);
	for (int i=0; i<size_s; i+=2)
	{
		cout<<"cac ki tu thoa man:"<<a[i];
	}
}
	
}
//Bai 8:
#include <iostream>
using namespace std;

int main()
{
	string bubble;
	cout<<"nhap 1 string"<<endl;
	
	getline(std::cin, bubble );
	int n=sizeof(bubble);
	for(int i=0; i<n;i++)
	{
		for(int j=0; j<n-j-1;j++);
		{
			if(bubble[j]>bubble[j+1])
			{
				swap(bubble[j], bubble[j+1])
			}
		}
	}
    cout<<"Sorted:";
	for(int i=0; i<n;i++)
	{
	    cout<<bubble[i]	
	}
}
			
