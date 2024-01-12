#include <iostream>
using namespace std;

int cnt;
void print(){
    if(cnt == 3) return;
    cout<<cnt<<endl;
    cnt++;
    print();

}

int main()
{
    print();
}
