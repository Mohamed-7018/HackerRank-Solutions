#include <iostream>
#include <sstream>
using namespace std;

/*

*/

class Student {
  
  
  private: 
     int a;
     int b;
     string f;
     string last;
  
  public:
    void set_age (int age){
        
        a = age;
        
    }
    void set_standard(int standard) {
      b= standard;  
    }
    
    
    
    
    void set_first_name (string first_name) {
        f =first_name;
    }
    
    void set_last_name (string last_name) {
       last =last_name; 
    }
    
    
    
    int get_age (){
        
        
        return a;
        
    }
    int get_standard() {
        
        
        return b;
    }
    
    string get_first_name () {
        
        
        return f;
    }
    
    string get_last_name () {
        
        
        return last;
    }
    
     string to_string()
    {
        stringstream ss;
        char c = ',';
        ss << a << c << f << c << last << c << b;
        return ss.str();
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
