#include<iostream>
using namespace std;
int main(){

bool name = false;
int input;
cin>> input;
for(int i=1;i<input;i++){
	if(input%2==0){
	cout<<"Not Prime"<<endl;
	name= true;
	break;

}
}
if(name==false){
cout<<"prime"<<endl;
}
return  0;
}
