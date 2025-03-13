#include <iostream>

using namespace std;
float dis(int, float);
int main()
{
    double a;
    float percentage;
    int option;
    int num=0;
    int price;
    int sum=0;
    float discount;
    cout<<"Thank you for shopping at J&Z's Clothing Line"<<endl;
    cout<<endl;
    cout<<"Being human is given, but keeping our humanity is a choice"<<endl;
    cout<<endl;
    cout<<"J&Z's are proud to present amazing jaw dropping discounts for the international charity week from 25th November to 9th December"<<endl;
    cout<<endl;
    cout<<"Please enter the date when you shopped at J&Z's"<<endl;
    tryagain:
    cin>>a;
    cout<<endl;
    if(25<=a && a<=30)
    {
    cout<<"You have received a discount of 50%"<<endl;
    percentage=50.0/100.0;
     }
    else if(1<=a && a<=5)
    {
    cout<<"You have received a discount of 30%"<<endl;
    percentage=30.0/100.0;
         }
    else if(6<=a && a<=9)
    {
    cout<<"You have received a discount of 10%"<<endl;
    percentage=10.0/100.0;
    }
    else
    {
    cout<<"You did not enter the correct date. Please enter the date again"<<endl;
    goto tryagain;
    }
    cout<<endl;
    cout<<"Please enter the number of items you purchased"<<endl;
    cin>>num;
    cout<<endl;
    cout<<"Please enter the price of the items (Prices are tagged on every item. If not, ask a worker to help you)"<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>price;
        sum=sum+price;
    }
    cout<<endl;
    cout<<"Your total bill is "<<sum<<endl;
    discount =dis(sum, percentage);
    cout<<endl;
    cout<<"new bill after discount is "<<discount<<endl;
    cout<<endl;
    cout<<"Select option for the charity your money will be donated to:"<<endl;
    cout<<endl;
    cout<<"Please press 1 to donate to The Edhi Foundation"<<endl;
    cout<<"Please press 2 to donate to The Ansar Burney Trust"<<endl;
    cout<<"Please press 3 to donate to Shaukat Khanum cancer hospital"<<endl;
    cout<<endl;
    cin>>option;
    cout<<endl;
    if(option==1)
    cout<<"Thank you for donating to The Edhi foundation"<<endl;
    else if(option==2)
    cout<<"Thank you for donating to The Ansar Burney Trust"<<endl;
    else if(option==3)
    cout<<"Thank you for donating to Shaukat Khanum cancer hospital"<<endl;
    else
    cout<<"You did not select the correct option"<<endl;
    cout<<endl;
    cout<<"THANK YOU FOR SHOPPING AT J&Z'S. DO COME AGAIN"<<endl;
    cout<<endl;
    cout<<"Coded by Zahra Batool and Javeria Liaqat"<<endl;
    return 0;
}

float dis(int x, float y)
{ float answer;
  answer= x * y;
  return answer;
}
