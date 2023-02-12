#include <iostream>
using namespace std;

class FruitSeller
{
    private:
        int APPLE_PRICE;
        int numOfApples;
        int myMoney;

    public:
        void InitMember(int price, int num, int money);
        int SaleApples(int money);
        void ShowSalesResult();
};

class FruitBuyer
{
    int myMoney; // class에서 접근 제저 지정자를 선언안하면 자동으로 private으로 간주.
    int numOfApples;

    public:
        void InitMembers(int money);
        void BuyApples(FruitSeller &seller, int money);
        void ShowBuyResult();
};

void FruitSeller::InitMember(int price, int num, int money)
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
    cout << "남은 사과: " << numOfApples <<endl;
    cout << "판매수익: " << myMoney <<endl << endl; 
}

void FruitBuyer::InitMembers(int money)
{
    myMoney = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
    numOfApples += seller.SaleApples(money); // 이 부분 중요!!
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
    cout << "현재 잔액: " << myMoney << endl;
    cout << "사과 개수: " << numOfApples << endl << endl;
}


int main(void)
{
    FruitSeller seller;
    FruitBuyer buyer;
    seller.InitMember(1000, 20, 0);
    buyer.InitMembers(5000);

    buyer.BuyApples(seller, 2000); // 과일 구매(메세지 전달)
    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();
    return 0;
}