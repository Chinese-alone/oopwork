#include"iostream"
#include"string"
#include"time.h"
#define ERROR 1;

using namespace std;

/*注意（需求）*/

//建卡需要使用学号唯一标识

class card{
private:
    long long int card_id;//最大位数19 可设定18位卡号
    int balance=100;
    char type; //学生 S；教师：T；临时；L;
    long int date=31536000;// 有效期存储 one year
    long c_time;
    string name;//持卡人姓名
    int l_time=20;//限制卡次数 后期需更新（时间） 需提示剩余次数 收费开始 
public:
    void init_card(int id);//新建卡
    char card_type(int card_id);//后续刷卡检测
    void pay_card(int card_id);//支付
    void print_info();

};


/*
void card::init_card(int id){
    card_id = id;
    cout<<"请输入姓名:";
    string namein;
    cin>>namein;
    cin.get();
    name=namein;
    cout<<"请选择类别(学生卡：S，教师卡：T，限制卡：L):";
    char card_type;
    cin>>card_type;
    cin.get();
    type=card_type;//之后加非法输入检测
    c_time=time(0);
}

char card::card_type(int id){
    if(id==card_id) return type;
    else return ERROR;
}

void card::pay_card(int card_id){
    if(card_type(card_id)=='T'){
        cout << "教师卡，免费乘车！" << endl;
    }
    else if(card_type(card_id)=='S'){
        
        if(card::balance>=2){
            if(card::balance<=5){
                card::balance-=2;
                cout <<"学生卡，扣费两元，余额为："<< card::balance << "账户余额不足，请及时充值"<<endl;
            }else{
                card::balance-=2;
                cout <<"学生卡，扣费两元，余额为："<< card::balance << endl;
            }
        } 
    }
    else if(card_type(card_id)=='L'){
        if(card::l_time>1){
            card::l_time-=1;
            cout<<"剩余免费次数："<<card::l_time<<endl;
        }
        else if(card::l_time==1){
            card::l_time-=1;
            cout<<"此次为最后一次免费乘车"<<endl;
        }
        else if(card::l_time==0){
            if(card::balance>=2){
                card::balance-=2;
                cout<<"本次为当前月份第一次收费，余额为："<<card::balance<<endl;
            }else cout<<"当前余额不足，请选择其他支付方式"<<endl;
            
            
        }else {
            if(card::balance>=2){
                card::balance-=2;
                cout<<"扣费2元余额为："<<card::balance<<endl;
            }
        }
    }
}

void card::print_info(){
    cout << card_id << ", " << balance << "\'"<< type << "\'" << endl;
}
*/