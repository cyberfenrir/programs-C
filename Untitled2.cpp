#include <iostream>        
class Base {
    public:
        int i;
        void printValues() {
	    cout << "Base::i = " << i << "\n"
	    	 << "Base::c = " << c << "\n"
	    	 << "Base::d = " << d << "\n";
	}
    private:
        char c;
    protected:
        double d;
    Base() : i(0), c('a'), d(0) {}
 
};
 
class Derived : public Base {
    public:
        void changeI() 
		{
	    i = 10;
	    cout << "Changing Base::i to 10\n";
	    }
	void changeC() {
	    // c = 'j';
	    cout << "Unable to access Base::c\n";
	}
	void changeD() {
	    d = 10;
	    cout << "Changing Base::d to 10\n";
	}    
};
 
int main () {
    Derived d;
 
    d.printValues();
    d.changeI();
    d.changeC();
    d.changeD();
    d.printValues();
}