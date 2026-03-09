#include <stdio.h>
#include <string.h>


struct  Date
{
   int day;
   int month;
   int year; /* data */
};


struct Person
{
    char name[20];
    int age;
    struct Date birthday;
};

void updateName(struct Person *p,char name[]){
    strcpy(p ->name , name);
};
void updateBirthday(struct Person *p, struct Date *d ){
     p->birthday.day   = d->day;
    p->birthday.month = d->month;
    p->birthday.year  = d->year;
}; 

int main(){
    struct Person p1,p2;
    strcpy(p1.name, "james");
    p1.age = 19;
    p1.birthday.day = 11;
    p1.birthday.month = 11;
    p1.birthday.year = 2006;
    struct Person *ptr = &p1;

    printf("name: %s \n day:%d/month:%d/year:%d\n",ptr ->name,
        ptr->birthday.day, ptr->birthday.month, ptr->birthday.year);

    updateName(ptr,"joshua");
    
   
    printf("updated name: %s", ptr ->name);





 
}