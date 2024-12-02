#include <iostream>

using namespace std;
// in các số hoàn hảo trong đoạn từ 1 đến n với n nhập từ bàn phím
// số hoàn hảo là số có tổng các ước của nó(trừ nó) bắng chính nó
// vd 6 là hoàn haỏ vì 1+2+3=6
bool kt_hoanhao(int a){
    int tmp=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0){
            tmp +=i;
        }
    }
    if(tmp==a) return true;
    return false;
}
int main() {
    int n;
    cin >> n;
    for(int i =1; i<=n;i++){
        if(kt_hoanhao(i)){
            cout << i<< " ";
        }
    }
    cout << endl;
    return 0;
}