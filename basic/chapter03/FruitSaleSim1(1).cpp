#include <iostream>
using namespace std;

class FruitSeller
{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;
    public:
        void InitMembers(int price, int num,int money);
        int SaleApples(int money);
        void ShowSalesResult();
};

void FruitSeller::InitMembers(int price, int num, int money)
{
    APPLE_PRICE = price;
    numOfApples = num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSalesResult()
{
    cout << "남은 사과: " << numOfApples << endl;
    cout << "판매 금액: " << myMoney << endl << endl;
}

class FruitBuyer
{
    int myMoney; // 접근 제어자 선언 안해주면 자동으로 private.
    int numOfApples;

    public:
        void InitMembers(int money);
        void BuyApples(FruitSeller &seller, int money);
        void ShowBuyResult();
};

void FruitBuyer::InitMembers(int money)
{
    myMoney = money;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
    cout << "현재 잔액: "  << myMoney << endl;
    cout << "사과 개수: " << numOfApples << endl << endl;
}

int main(void)
{
    FruitSeller seller;
    FruitBuyer buyer;

    seller.InitMembers(1000, 20, 0);
    buyer.InitMembers(5000);

    // 나라는 객체가 과일장수라는 객체에게 사과라는 객체를 사는 것.
    // 이처럼 하나의 객체가 다른 하나의 객체에게 메세지를 전달하는 방법을 객체 간의 "메세지 전달(Message Passing)"이라고 한다.
    buyer.BuyApples(seller, 2000); // seller에게 2000원 어치 사과 구매
    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();

    cout<< "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();
    return 0;
}