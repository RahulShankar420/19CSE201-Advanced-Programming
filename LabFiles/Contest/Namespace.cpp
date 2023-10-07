// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

namespace LibraryManagement{
      struct Book{
        string ISBN;
        string title;
        string author;
        Book(){
            
        }
    };
}
namespace UserInterface{
    int displayBookInfo(LibraryManagement::Book book){
        cout<<"Details of the book:"<<endl;
        cout<<"ISBN: "<<book.ISBN<<endl;
        cout<<"title: "<<book.title<<endl;
        cout<<"author: "<<book.author<<endl;
        return 0;
    }
}
namespace Utilities{
  class Date{
      public:
    int day;
    string month;
    int year;
    Date(int d,string m,int y){
        day=d;
        month=m;
        year=y;
    }
  };
  void isValidDate(Date date){
      int maxdate;
      bool fine=true;
      string mon30[4]={"Apr","jun","Sep","Nov"};
      string mon28="Feb";
      string mon31[7]={"Jan","Mar","May","Jul","Aug","Oct","Dec"};
    if(date.month=="Feb"){
        maxdate=28;
    }
    else{
        int i;
        int found=0;
        for(i=0;i<4;i++){
            if(mon30[i]==date.month){
                maxdate=30;
                found=1;
                break;
            }
        }
        if(found==0){
            for(i=0;i<7;i++){
                if(mon31[i]==date.month){
                    maxdate=31;
                    found=1;
                    break;
                }
            }
        }
        if(found==0){
            cout<<"invalid Month"<<endl;
            fine=false;
        }
    }
    if(date.day>maxdate || date.day<0){
        cout<<"Invalid date"<<endl;
        fine=false;
    }
    if(fine==true){
        cout<<"Date is valid"<<endl;
    }
  }
}
int main() {
   LibraryManagement::Book book;
   book.ISBN="123";
   book.title="Ramayana";
   book.author="valmiki";
   UserInterface::displayBookInfo(book);
   Utilities::Date date1(7,"May",2004);
   Utilities::isValidDate(date1);
   Utilities::Date date2(7,"fay",2004);
   Utilities::isValidDate(date2);
   Utilities::Date date3(37,"May",2004);
   Utilities::isValidDate(date3);

    return 0;
}