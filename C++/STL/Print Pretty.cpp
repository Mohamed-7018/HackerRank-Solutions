

        /* Enter your code here */
        cout << resetiosflags(ios::uppercase|ios::scientific);
        cout << std::setiosflags (ios::left|ios::fixed);
        cout << setw(0) << std::hex;
        cout << std::setiosflags (ios::showbase);
        cout << (unsigned long)A << std::endl;
        cout << resetiosflags(ios::showbase);
        cout << setw(0xf) << setfill('_')<< std::dec ;
        cout << setiosflags (ios::showpos) << setprecision(2);
        cout  << B << endl;
        cout << resetiosflags(ios::fixed|ios::showpos);
        cout << setiosflags (ios::scientific | ios::uppercase) << setprecision(9);
        cout << C << endl;
