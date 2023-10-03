#include<iostream>
using namespace std;
// struct values{
//     char booktitle[10];
//     char bookauthor[10];
//     int bookprice;
// };
// int main(){
//     int n;
//     cin>>n;
//     struct values s[n];
    
//     for(int i=0;i<n;i++){
//         cin>>s[i].bookauthor;
//         cin>>s[i].booktitle;
//         cin>>s[i].bookprice;
//         }
//         for(int i=0;i<n;i++        return val;
){
//         cout<<"Author name is:"<<s[i].bookauthor<<endl;
//         cout<<"Bookprice is:"<<s[i].bookprice<<endl; 
//         cout<<"Bookname is:"<<s[i].booktitle<<endl; 
// }
// }


// struct values
//     {
//         float radius;
//         float length;
//         float width;
//     };
// int main(){    
//     struct values m;
//     cout<<"enter the radius:";
//     cin>>m.radius;
//     cin>>m.length;
//     cin>>m.width;
//     float area_of_circle=3.14*m.radius*m.radius;
//     float area_of_rect=m.length*m.width;
//     cout<<"the area of circle is "<<area_of_circle<<endl;
//     cout<<"the area of rectangle is "<<area_of_rect<<endl;
// }                   

// typedef struct values
// {
//     float radius;
//     float length;
// }s;
// s cylinder;
// int main(){
//     cin>>cylinder.radius;
//     cin>>cylinder.length;
//     float vol_of_cyl=3.14*cylinder.radius*cylinder.radius*cylinder.length;
//     cout<<vol_of_cyl<<endl;
// }

// #define Factor 1.5

// typedef struct employee
// {
//     int id;  
//     string name;

//     struct  salary{
//         int base;
//         int bonus;
//         int hra;
//     }s;   
// }k;

// int main(){
//     k by;
//     int a,b,c,d,e;
//     a=by.s.base;
//     b=by.s.bonus;
//     c=by.s.hra;
//     cin>>by.id;
//     cin>>by.name;
//     cin>>a;
//     cin>>b;
//     cin>>c;


//     if (a<=20000){
//         b=a*Factor*b*c;
//     }
//     cout<<b;
// }


// Array use in structures ...


// struct student {
//     int rollno;
//     int marks;
// }s={4,20};

// int main(){
//     struct student s1={2,40};
//     struct student s3[3];
//     for (int i=0;i<3;i++){
//         cout<<"Roll no: ";
//         cin>>s3[i].rollno;
//         cout<<"Enter Marks :";
//         cin>>s3[i].marks;
//     }
//     for (int i=0;i<3;i++){
//         cout<<s3[i].rollno;
//         if (s3[i].marks<10){
//             s3[i].marks*=2;
//             cout<<" "<<s3[i].marks<<endl;
//         }
//         else{
//         cout<<" "<<s3[i].marks<<endl;
//         }
//     }
//     cout<<s.rollno;
//     cout<<" "<<s.marks;
// }

// Nested structures ....

// struct dayofbirth{
//     int day;
//     int month;
//     int year;
// };
// struct student{
//     int id;
//     char name[10];
//     struct dayofbirth d;
// };
// int main(){
//     struct student s;
//     cin>>s.id;
//     cin>>s.name;
//     cin>>s.d.day;
//     cin>>s.d.month;
//     cin>>s.d.year;
//     cout<<s.id;
//     cout<<s.name;
//     cout<<s.d.day;
//     cout<<s.d.month;
//     cout<<s.d.year;
// }


// pointer in structures

// struct data{
//     int rollno;
//     int marks;
// };
// struct data s={1,20};
// int main(){
//     struct data *ptr=&s;
//     cout<<ptr->rollno;
//     cout<<" "<<ptr->marks<<endl;
// }
// struct employee{
//     int id;
//     char name[5];
// };
// struct address{
//     int house_no;
//     int street_no;
//     int location_cordinates;
//     struct employee d;
// };
// int main(){
//     struct address s[2];
//     for(int i=0;i<2;i++){
//     cin>>s[i].d.id;
//     cin>>s[i].d.name;
//     cin>>s->house_no;
//     cin>>s->location_cordinates;
//     cin>>s->street_no;
// }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             int distance=s[j]->location_cordinates-s[i]->location_cordinates;
//         }
//     }
// }
#include<vector>
#include<bits/stdc++.h>
struct students{
    char name[20];
    int rollno;
}student;
typedef struct marks{
    int hindi;
    int maths;
    int sanskrit;
    int eng;
    int sst;
    struct students s;
}k;
int main(){
    struct marks a[3];
    vector<int>ans;
    for (int i=0;i<3;i++){
    cin>>a[i].s.name;
    cin>>a[i].s.rollno;
    cin>>a[i].eng;
    cin>>a[i].hindi;
    cin>>a[i].maths;
    }
    // int sum=0,i;
    // for( i=0;i<3;i++){
    //     sum=a[i].eng+a[i].hindi+a[i].maths;
    //     k=sum;
    //     if(k!=0){
    //     ans.push_back(k);
    //     }
    // }
    // int maxElementIndex = max_element(ans.begin(),ans.end()) - ans.begin();
    // cout<<"Winner is :->"<<a[maxElementIndex].s.name<<" and the score is->"<<*max_element(ans.begin(),ans.end())<<endl;
    int sum=0,k,index;
    int arr[3];
    for(int i=0;i<3;i++){
        sum=a[i].eng+a[i].hindi+a[i].maths;
        k=sum;
        if(k!=0){
            arr[i]=k;
        }
        
    }
    int max=INT8_MIN;
    for(int i=0;i<3;i++){
            index=-1;
            if(max<arr[i]){
                max=arr[i];
                index=i;
            }
        }
        cout<<"THe topper is:->"<<a[index].s.name<<" and marks is:"<<max<<endl;
}
