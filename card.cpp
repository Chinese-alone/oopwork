#include"card.h"

void card::init_card(int id){
    card_id = id;
    cout<<"����������:";
    string namein;
    cin>>namein;
    cin.get();
    name=namein;
    cout<<"��ѡ�����(ѧ������S����ʦ����T�����ƿ���L):";
    char card_type;
    cin>>card_type;
    cin.get();
    type=card_type;//֮��ӷǷ�������
    c_time=time(0);
}

char card::card_type(int id){
    if(id==card_id) return type;
    else return ERROR;
}

void card::pay_card(int id){
    if(card_type(id)=='T'){
        cout<<"��ʦ������ѳ˳���";
    }
    else if(card_type(id)=='S'){
        
        if(balance>=2){
            if(balance<=5){
                balance-=2;
                cout<<"ѧ�������۷���Ԫ�����Ϊ��"<<balance<<"�˻����㣬�뼰ʱ��ֵ"<<endl;
            }else{
                balance-=2;
                cout<<"ѧ�������۷���Ԫ�����Ϊ��"<<balance<<endl;
            }
        }else {
            cout<<"���㣬���ֵ"<<endl;
        } 
    }
    else if(card_type(card_id)=='L'){
        if(l_time>1){
            l_time-=1;
            cout<<"ʣ����Ѵ�����"<<l_time<<endl;
        }
        else if(l_time==1){
            l_time-=1;
            cout<<"�˴�Ϊ���һ����ѳ˳�"<<endl;
        }
        else if(l_time==0){
            if(balance>=2){
                balance-=2;
                cout<<"����Ϊ��ǰ�·ݵ�һ���շѣ����Ϊ��"<<balance<<endl;
            }else cout<<"��ǰ���㣬��ѡ������֧����ʽ"<<endl;
            
            
        }else {
            if(balance>=2){
                balance-=2;
                cout<<"�۷�2Ԫ���Ϊ��"<<balance<<endl;
            }
        }
    }
}

void card::print_info(){
    cout << card_id << ", " << balance << endl;
}