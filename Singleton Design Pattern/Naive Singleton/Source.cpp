//#include<iostream>
//#include<thread>
//using namespace std;
//
//class Singleton
//{
//    Singleton(const string value) : _value(value)
//    {
//
//    }
//    static Singleton* _singleton;
//    string _value;
//public:
//
//
//    static Singleton* getInstance(string value);
//    string getValue()
//    {
//        return _value;
//    }
//};
//
//// initailize the static members
//
//Singleton* Singleton::_singleton = nullptr;
//
//Singleton* Singleton::getInstance(string value) {
//    if (_singleton == nullptr)
//    {
//        _singleton = new Singleton(value);
//    }
//    return _singleton;
//}
//
//
//// Client Code
//
//void AliceThread()
//{
//    this_thread::sleep_for(chrono::milliseconds(300));
//    Singleton* singleton = Singleton::getInstance("Alice");
//    cout << singleton->getValue() << '\n';
//}
//
//void BobThread()
//{
//    this_thread::sleep_for(chrono::milliseconds(300));
//    Singleton* singleton = Singleton::getInstance("Bob");
//    cout << singleton->getValue() << '\n';
//}
//
//
//int main()
//{
//    // This Code Failed during Multi-Threading
//    cout << "If You See Different Values --> This Code failed\n";
//    thread t1(AliceThread);
//    thread t2(BobThread);
//    
//    t1.join();
//    t2.join();
//
//
//	return 0;
//}