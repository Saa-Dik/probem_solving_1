#include<iostream>
#include<queue>
using namespace std;
int main()
{
   queue<int>st; //queue as st hisabe bujailam

    st.push(5);
    st.push(6);
    st.push(15); //st.push mane amra amade queue te amar data ke push korteci
    cout<<(st.front())<<"\n";
    st.pop();
    cout<<(st.front())<<"\n"; // akn amra pop korar pore kon kon data ace ta dekte pabo

}

//print 1-10 using queue

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>st;
    for(int i=1;i<=10;i++){
        st.push(i);
    }
    while(st.size()){
        cout<<(st.front())<<"\n";
        st.pop();
    }
}
