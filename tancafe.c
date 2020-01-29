#include <stdio.h>
int timeCompare(time a,time b)
{
    int t1=a.hour*60 +a.minute,t2=b.hour*60 +b.minute;
    if(t1<t2) return -1;
    if(t1==t2) return 0;
    if(t1>t2) return 1;
    }
typedef struct comype {
int number ; /* số hiệu */
int free; /*trạng thái máy rỗi-bận nếu free là 1-0*/
time beginTime;
time endTime;
long fee; /*tiền thu được tại máy từ đầu ngày.*/
int time_used; /*tổng số phút máy chạy trong ngày*/
} computer ;
typedef struct times {
int hour; /* giá trị từ 0 – 23 */
int minute; /* giá trị từ 0 – 59 */
} time;
int main()
{
    computer s[8];
    int may,choice,maychuyen;
    menu:
    printf("1.khoi tao du lieu \n2.dung may\n3.nghi choi\n4.chuyen may\n5.in trang thai toan bo phong may\n6.sap xep\n7.goi y dung may")
    scanf("%d",&choice);
    while (0<choice && 8>choice)
    {
        switch (choice)
        {
        case 1:/*khoi tao du lieu*/
            break;
        
        case 2:/*dung may*/
            printf("nhap may muon dung:");
            scanf("%d",&may);
            if (s[may-1].free ==1)
                {
                printf("nhap gio bat dau(hh:mm): ");
                scanf("%d:&d",&s[may-1].beginTime.hour,&s[may-1].beginTime.minute);
                }
            else printf("may dang ban");
            goto menu;
        case 3:/*nghi choi*/
            nhapmay:
            printf("nhap may muon nghi choi: ");
            scanf("%d",&may);
            if (s[may-1].free == 0)
            {
                nhapgio:
                printf("nhap gio ket thuc(hh:mm): ");
                scanf("%d:%d",&s[may-1].endTime.hour,&s[may-1].endTime.minute);
                int a=timeCompare(s[may-1].beginTime,s[may-1].endTime);
                if (a!=-1)
                    printf("thoi gian nhap khong thoa man, xin moi nhap lai");
                    goto nhapgio;
                else 
                {
                    printf("thoi gian bat dau:\t%d:%d\nthoi gian ket thuc:\t%d%d",s[may-1].beginTime.hour,s.[may-1].beginTime.minute,s[may-1].endTime.hour,s[may-1].endTime.minute);
                    printf("so phut dung dich vu: %d",(s[may-1].endTime.hour-s[may-1].endTime.hour)*60+s[may-1].endTime.minute-s[may-1].beginTime.minute);
                    printf("tien phai tra:\t%dx100=%d VND",(s[may-1].endTime.hour-s[may-1].endTime.hour)*60+s[may-1].endTime.minute-s[may-1].beginTime.minute,((s[may-1].endTime.hour-s[may-1].endTime.hour)*60+s[may-1].endTime.minute-s[may-1].beginTime.minute)*100);
                    s[may-1].free=1;
                }
            }
            else printf("may dang khong hoat dong, xin moi nhap lai");
            goto nhapmay;
            break;
        case 4:/*chuyen may*/
            printf("nhap may dang choi: ");
            scanf("%d",&may);
            printf("nhap may muon chuyen: ");
            scanf("%d",&maychuyen);
            break;
        case 5:/*in trang thai toan bo phong may*/
            break;
        
        }
    }
    

}