#include"iostream"
#include"string"
#include"time.h"
#define ERROR 1;

using namespace std;

/*ע�⣨����*/

//������Ҫʹ��ѧ��Ψһ��ʶ

class card{
private:
    long long int card_id;//���λ��19 ���趨18λ����
    int balance=100;
    char type; //ѧ�� S����ʦ��T����ʱ��L;
    long int date=31536000;// ��Ч�ڴ洢 one year
    long c_time;
    string name;//�ֿ�������
    int l_time=20;//���ƿ����� ��������£�ʱ�䣩 ����ʾʣ����� �շѿ�ʼ 
public:
    void init_card(int id);//�½���
    char card_type(int card_id);//����ˢ�����
    void pay_card(int card_id);//֧��
    void print_info();

};


/*
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

void card::pay_card(int card_id){
    if(card_type(card_id)=='T'){
        cout << "��ʦ������ѳ˳���" << endl;
    }
    else if(card_type(card_id)=='S'){
        
        if(card::balance>=2){
            if(card::balance<=5){
                card::balance-=2;
                cout <<"ѧ�������۷���Ԫ�����Ϊ��"<< card::balance << "�˻����㣬�뼰ʱ��ֵ"<<endl;
            }else{
                card::balance-=2;
                cout <<"ѧ�������۷���Ԫ�����Ϊ��"<< card::balance << endl;
            }
        } 
    }
    else if(card_type(card_id)=='L'){
        if(card::l_time>1){
            card::l_time-=1;
            cout<<"ʣ����Ѵ�����"<<card::l_time<<endl;
        }
        else if(card::l_time==1){
            card::l_time-=1;
            cout<<"�˴�Ϊ���һ����ѳ˳�"<<endl;
        }
        else if(card::l_time==0){
            if(card::balance>=2){
                card::balance-=2;
                cout<<"����Ϊ��ǰ�·ݵ�һ���շѣ����Ϊ��"<<card::balance<<endl;
            }else cout<<"��ǰ���㣬��ѡ������֧����ʽ"<<endl;
            
            
        }else {
            if(card::balance>=2){
                card::balance-=2;
                cout<<"�۷�2Ԫ���Ϊ��"<<card::balance<<endl;
            }
        }
    }
}

void card::print_info(){
    cout << card_id << ", " << balance << "\'"<< type << "\'" << endl;
}
*/