#include<stdio.h>
#include<conio.h>
#include<time.h>

struct info
{
    int hour,minute,day,month,year,f,pincode,crno;
    char p[2],pickup[30],address[50],city[50],state[50];
};

struct info suzuki,audi,skoda,bmw;


int stock()
{
  
    int  c=5, rent[4]={15000, 10000, 25000, 30000},no[4] = {suzuki.crno,audi.crno,skoda.crno,bmw.crno};
    char  s[][50] = {"Suzuki","Audi","Skoda","BMW"};
    
   
    printf("Car\tRent/Hour\tCapacity\tNo. of Cars Available\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\t%d\t\t%d\t\t%d\n",s[i],rent[i],c,no[i]);
    }
    
}


int book()
{   
    int car;
   
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    
     while (1)
    {
        printf("\nWhich car you want to book?\n Press 1 for Suzuki\n Press 2 for Audi\n Press 3 for Skoda\n Press 4 for Bmw\n Enter 0 to go to the previous page\n");
        scanf("%d",&car);
        switch (car)
        {
            case 0:
                return 0;
                break;
           
            case 1:
                
                printf("You have successfully booked Suzuki\nThe rent for this car is 15000 rs/km\n");

                printf("Please enter the pickup date(in dd-mm-yyyy format)\n");
                scanf("%d-%d-%d",&suzuki.day,&suzuki.month,&suzuki.year);

                if (suzuki.day <= tm.tm_mday && suzuki.month == tm.tm_mon+1 && suzuki.year == tm.tm_year+1900 || suzuki.month < tm.tm_mon+1 && suzuki.year == tm.tm_year+1900 ||  suzuki.year<tm.tm_year+1900 || suzuki.year>=tm.tm_year+1902 || suzuki.day<1 || suzuki.day>31 || suzuki.month<1 || suzuki.month>12)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
                
    
                printf("Enter the pickup time(in HH:MM fromat)\n");
                scanf("%d:%d",&suzuki.hour,&suzuki.minute);

                if (suzuki.hour>12 || suzuki.hour<1 || suzuki.minute<0 || suzuki.minute>60)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                printf("Please Press 1 to select AM or 2 to select PM\n");
                scanf("%d",&suzuki.f);

                if (suzuki.f==1)
                {
                    suzuki.p[0] = 'A';
                    suzuki.p[1] = 'M';
                }
                else if (suzuki.f==2)
                {
                    suzuki.p[0] = 'P';
                    suzuki.p[1] = 'M';
                }
                else
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }

                
                gets(suzuki.pickup);

                printf("Enter pickup Address\n");
                gets(suzuki.address);
        
                printf("Enter the pickup city\n");
                gets(suzuki.city);

                printf("Enter the pickup state\n");
                gets(suzuki.state);

                printf("Eneter pincode\n");
                scanf("%d",&suzuki.pincode);

                if (suzuki.pincode<100000 || suzuki.pincode>999999)
                {
                    printf("Your given pincode is inavlid\n");
                    break;
                }
                

               printf("Booking is confirmed:\n Car : Suzuki\n Rent : 15000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,suzuki.day,suzuki.month,suzuki.year,suzuki.hour,suzuki.minute,suzuki.p[0],suzuki.p[1],suzuki.address,suzuki.city,suzuki.state,suzuki.pincode);
               suzuki.crno--;
                break;

            case 2:
                
                printf("You have successfully booked Audi\nThe rent for this car is 10000 rs/km\n");

                printf("Please enter the pickup date(in dd-mm-yyyy format)\n");
                scanf("%d-%d-%d",&audi.day,&audi.month,&audi.year);

                if (audi.day <= tm.tm_mday && audi.month == tm.tm_mon+1 && audi.year == tm.tm_year+1900 || audi.month < tm.tm_mon+1 && audi.year == tm.tm_year+1900 ||  audi.year<tm.tm_year+1900 || audi.year>=tm.tm_year+1902 || audi.day<1 || audi.day>31 || audi.month<1 || audi.month>12)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                printf("Enter the pickup time(in HH:MM fromat)\n");
                scanf("%d:%d",&audi.hour,&audi.minute);

                if (audi.hour>12 || audi.hour<1 || audi.minute<0 || audi.minute>60)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                printf("Please Press 1 to select AM or 2 to select PM\n");
                scanf("%d",&audi.f);

                if (audi.f==1)
                {
                    audi.p[0] = 'A';
                    audi.p[1] = 'M';
                }
                else if (audi.f==2)
                {
                    audi.p[0] = 'P';
                    audi.p[1] = 'M';
                }
                else
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }

                
                gets(audi.pickup);

                printf("Enter pickup Address\n");
                gets(audi.address);
        
                printf("Enter the pickup city\n");
                gets(audi.city);

                printf("Enter the pickup state\n");
                gets(audi.state);

                
                printf("Eneter pincode\n");
                scanf("%d",&audi.pincode);

                if (audi.pincode<100000 || audi.pincode>999999)
                {
                    printf("Your given pincode is inavlid\n");
                    break;
                }


                printf("Booking is confirmed:\n Car : Audi\n Rent : 10000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d\n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,audi.day,audi.month,audi.year,audi.hour,audi.minute,audi.p[0],audi.p[1],audi.address,audi.city,audi.state,audi.pincode);
                audi.crno--;
                break;
            
            case 3:
                
               printf("You have successfully booked Skoda\nThe rent for this car is 25000 rs/km\n");

                printf("Please enter the pickup date(in dd-mm-yyyy format)\n");
                scanf("%d-%d-%d",&skoda.day,&skoda.month,&skoda.year);

                if (skoda.day <= tm.tm_mday && skoda.month == tm.tm_mon+1 && skoda.year == tm.tm_year+1900 || skoda.month < tm.tm_mon+1 && skoda.year == tm.tm_year+1900 ||  skoda.year<tm.tm_year+1900 || skoda.year>=tm.tm_year+1902 || skoda.day<1 || skoda.day>31 || skoda.month<1 || skoda.month>12)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                printf("Enter the pickup time(in HH:MM fromat)\n");
                scanf("%d:%d",&skoda.hour,&skoda.minute);

                if (skoda.hour>12 || skoda.hour<1 || skoda.minute<0 || skoda.minute>60)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                 printf("Please Press 1 to select AM or 2 to select PM\n");
                scanf("%d",&skoda.f);

                if (skoda.f==1)
                {
                    skoda.p[0] = 'A';
                    skoda.p[1] = 'M';
                }
                else if (skoda.f==2)
                {
                    skoda.p[0] = 'P';
                    skoda.p[1] = 'M';
                }
                else
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }

                
                gets(skoda.pickup);

                printf("Enter pickup Address\n");
                gets(skoda.address);
        
                printf("Enter the pickup city\n");
                gets(skoda.city);

                printf("Enter the pickup state\n");
                gets(skoda.state);

                
                printf("Eneter pincode\n");
                scanf("%d",&skoda.pincode);

                if (skoda.pincode<100000 || skoda.pincode>999999)
                {
                    printf("Your given pincode is inavlid\n");
                    break;
                }


                printf("Booking is confirmed:\n Car : Skoda\n Rent : 25000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,skoda.day,skoda.month,skoda.year,skoda.hour,skoda.minute,skoda.p[0],skoda.p[1],skoda.address,skoda.city,skoda.state,skoda.pincode);
                skoda.crno--;
                break;

            case 4:

                printf("You have successfully booked BMW\nThe rent for this car is 30000 rs/km\n");

                printf("Please enter the pickup date(in dd-mm-yyyy format)\n");
                scanf("%d-%d-%d",&bmw.day,&bmw.month,&bmw.year);

                if (bmw.day <= tm.tm_mday && bmw.month == tm.tm_mon+1 && bmw.year == tm.tm_year+1900 || bmw.month < tm.tm_mon+1 && bmw.year == tm.tm_year+1900 || bmw.year<tm.tm_year+1900 || bmw.year>=tm.tm_year+1902 || bmw.day<1 || bmw.day>31 || bmw.month<1 || bmw.month>12)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                printf("Enter the pickup time(in HH:MM fromat)\n");
                scanf("%d:%d",&bmw.hour,&bmw.minute);

                if (bmw.hour>12 || bmw.hour<1 || bmw.minute<0 || bmw.minute>60)
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }
    
                 printf("Please Press 1 to select AM or 2 to select PM\n");
                scanf("%d",&bmw.f);

                if (bmw.f==1)
                {
                    bmw.p[0] = 'A';
                    bmw.p[1] = 'M';
                }
                else if (bmw.f==2)
                {
                    bmw.p[0] = 'P';
                    bmw.p[1] = 'M';
                }
                else
                {
                    printf("Your given input is not acceptable\n");
                    break;
                }

                
                
                gets(bmw.pickup);

                printf("Enter pickup Address\n");
                gets(bmw.address);
        
                printf("Enter the pickup city\n");
                gets(bmw.city);

                printf("Enter the pickup state\n");
                gets(bmw.state);

                
                printf("Eneter pincode\n");
                scanf("%d",&bmw.pincode);

                if (bmw.pincode<100000 || bmw.pincode>999999)
                {
                    printf("Your given pincode is inavlid\n");
                    break;
                }

                
                printf("Booking is confirmed:\n Car : BMW\n Rent : 30000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,bmw.day,bmw.month,bmw.year,bmw.hour,bmw.minute,bmw.p[0],bmw.p[1],bmw.address,bmw.city,bmw.state,bmw.pincode);
                bmw.crno--;
                break;

            default:

                printf("Something went wrong please try again\n");
                break;
            }
            
            return car;
    }
   
}
    
   
int main()
{
    suzuki.crno = 50 , audi.crno = 50 , skoda.crno = 50 , bmw.crno = 50;
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    
    int x,res=0;
    char ustock;
    while (1)
    {
    printf("\nPlease\n press 1 for book a car for rent\n Press 2 for see booking status\n Press 3 for see the avalaible cars\n Press 4 for cancel your booking\n Press 0 to logout\n");
    scanf("%d",&x);
    switch (x)
    {
        
        case 0:
            return 0;
            break;

        case 1:
            res = book();
            break;

        case 2:
            if (res == 1)
            {
               
               printf("Booking is confirmed:\n Car : Suzuki\n Rent : 15000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,suzuki.day,suzuki.month,suzuki.year,suzuki.hour,suzuki.minute,suzuki.p[0],suzuki.p[1],suzuki.address,suzuki.city,suzuki.state,suzuki.pincode);
               break;
            }
            else if (res == 2)
            {
              
                printf("Booking is confirmed:\n Car : Audi\n Rent : 10000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,audi.day,audi.month,audi.year,audi.hour,audi.minute,audi.p[0],audi.p[1],audi.address,audi.city,audi.state,audi.pincode);
                break;
            }
            else if (res == 3)
            {
                
                printf("Booking is confirmed:\n Car : Skoda\n Rent : 25000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,skoda.day,skoda.month,skoda.year,skoda.hour,skoda.minute,skoda.p[0],skoda.p[1],skoda.address,skoda.city,skoda.state,skoda.pincode);
                break;
            }
            else if (res == 4)
            {
                printf("Booking is confirmed:\n Car : BMW\n Rent : 30000 rs/km\n Bokking Date : %02d-%02d-%4d\n Pickup Date : %02d-%02d-%4d \n Pickup Time : %02d:%02d %c%c\n Pickup Address : %s\n Pickup City : %s\n Pickup State : %s\n Pincode : %d\n",tm.tm_mday,tm.tm_mon+1,tm.tm_year+1900,bmw.day,bmw.month,bmw.year,bmw.hour,bmw.minute,bmw.p[0],bmw.p[1],bmw.address,bmw.city,bmw.state,bmw.pincode);
                break;
            }
            else
            {
                printf("No booking has been done yet\n");
            }  
            break;

        case 3:
            ustock = stock();
            break;

        case 4:
            if (res != 0)
            {
                if (res == 1)
                {
                    suzuki.crno++;
                }
                else if (res == 2)
                {
                    audi.crno++;
                }
                else if (res == 3)
                {
                    skoda.crno++;
                }
                else if (res == 4)
                {
                    bmw.crno++;
                }
        
                res = 0;
                printf("Your booking has been cancled\n");
                
            }
            else
            {
                printf("No booking has been done yet\n");
            }
            break;
        
            
        default:
            printf("Something went wrong please try again\n");
            break;
        }
    }
    
    return 0;

    
   
}