#include<iostream>
#include<cstring>
using namespace std;

class Content{
    protected:
    string title;
    float rating;
    
    public:
    Content(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){}
};

class Video : public Content{
    float videolength;
    public:
    Video(string s, float r, float vl) : Content(s, r){
        videolength = vl;
    }
    void display(){
        cout<<"The title of the video is: "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
        cout<<"Video Length: "<<videolength<<" minutes"<<endl;
    }
};

class Text : public Content{
    int words;
    public:
    Text(string s, float r, int w) : Content(s, r){
        words = w;
    }
    void display(){
        cout<<"The title of the text is: "<<title<<endl;
        cout<<"Rating: "<<rating<<" out of 5 stars"<<endl;
        cout<<"The words count is: "<<words<<" words"<<endl;
    }
};

int main(){

    string title;
    float rating, vlen;
    int words;

    //for video content
    title="C++ tutorial";
    vlen=15.42;
    rating=4.85;
    Video vd(title, rating, vlen);
    // vd.display();

    //for text content
    title="C++ tutorial notes";
    words=2165;
    rating=4.26;
    Text txt(title, rating, words);
    // txt.display();

    Content * cptr[2];
    cptr[0] = &vd;
    cptr[1] = &txt;    

    cptr[0]->display();
    cptr[1]->display();
    
    return 0;
}