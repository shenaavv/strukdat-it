#include <iostream>
#include <string>
using namespace std;

class mhs_private {
    private:
    string mhs_name;

    public:
    mhs_private(string name){
        set_name(name);
        printName();
    }

    int sum(){
        int a = 1;
        int b = 2; 
        int sum = a+b; 
        return sum;
    }

    aiti.function()
    aiti.namalengkap
    aiti.alamat
    aiti.ktp

    // setter for mhs_name
    void set_name(string name){
        mhs_name = name;
    }
 
    // getter for mhs_name
    string get_name(){
        return mhs_name;
    } 



    /* mhs_private(){
        ini = "ini coba";
        cout << ini << endl;
    } */


    // print out the name
    void printName(){
        cout << "My name is " << mhs_name << endl;
    }
};

// class mhs_public {
//     public:
//     string mhs_name;

//     // print out the name
//     void printName(){
//         cout << "My name is " << mhs_name << endl;
//     }
// };

int main() {
    // create an object of class mhs and set its name
    mhs_private aiti("Ini yang baru", "ini yang lagi"); 

    perempuan budi("budi")
    --> print("namaku Budi");
    --> rambut(pirang);
    --> tinggi(tinggi); 
    --> mata(hitam);

    // set the name of the object
    aiti.set_name("Gue Aiti Budi");

    // print the name of the object
    aiti.printName();

    string name = aiti.get_name();
    cout << "My name is " << name << endl;

    // mhs_public atiti;
    // atiti.mhs_name = "Gue Atiti Budi";
    // atiti.printName();


    return 0;
}