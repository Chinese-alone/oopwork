#include"card.h"

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

void card::pay_card(int id){
    if(card_type(id)=='T'){
        cout<<"教师卡，免费乘车！";
    }
    else if(card_type(id)=='S'){
        
        if(balance>=2){
            if(balance<=5){
                balance-=2;
                cout<<"学生卡，扣费两元，余额为："<<balance<<"账户余额不足，请及时充值"<<endl;
            }else{
                balance-=2;
                cout<<"学生卡，扣费两元，余额为："<<balance<<endl;
            }
        }else {
            cout<<"余额不足，请充值"<<endl;
        } 
    }
    else if(card_type(card_id)=='L'){
        if(l_time>1){
            l_time-=1;
            cout<<"剩余免费次数："<<l_time<<endl;
        }
        else if(l_time==1){
            l_time-=1;
            cout<<"此次为最后一次免费乘车"<<endl;
        }
        else if(l_time==0){
            if(balance>=2){
                balance-=2;
                cout<<"本次为当前月份第一次收费，余额为："<<balance<<endl;
            }else cout<<"当前余额不足，请选择其他支付方式"<<endl;
            
            
        }else {
            if(balance>=2){
                balance-=2;
                cout<<"扣费2元余额为："<<balance<<endl;
            }
        }
    }
}

void card::print_info(){
    cout << card_id << ", " << balance << endl;
}