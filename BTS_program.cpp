#include<iostream>
using namespace std;
class bts{
    public:
  virtual void display(){
    cout<<"BTS are the 7 kings of kpop"<<endl;
  }
};
class jungkook : public bts{
    public:
    void display() override{
        cout<<"jungkook is golden maknae of bts"<<endl;
    }
};
    class taehyung : public bts{
        public:
        void display()override{
            cout<<"Taehyung is the visual of bts"<<endl;
        }
    };
    class jimin : public bts{
        public:
        void display()override{
            cout<<"Jimin is the angel of bts"<<endl;
        }
    };
    class RM : public bts{
        public:
        void display()override{
            cout<<"RM is the rapper of bts"<<endl;
        }
    };
    class suga : public bts{
        public:
        void display()override{
            cout<<"Suga is the savage king of bts"<<endl;
        }
    };
    class jhope : public bts{
        public:
        void display()override{
            cout<<"Jhope is the dancing machine of bts"<<endl;
        }
    };
    class jin: public bts{
        public:
        void display()override{
            cout<<"Jin is the wrld wide handsome of bts"<<endl;
        }
    };
int main(){
        bts* b1 = new jungkook();
        bts*b2 = new taehyung();
        bts*b3 = new jimin();
        bts*b4 = new RM();
        bts*b5 = new suga();
        bts*b6 = new jhope();
        bts*b7 = new jin();
        b1->display();
        b2->display();
        b3->display();
        b4->display();
        b5->display();
        b6->display();
        b7->display();
        return 0;
    }
