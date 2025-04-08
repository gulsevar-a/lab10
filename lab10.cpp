// // Problem_1
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     while (a <= 15) {
//         cout << a << " ";
//         a++;
//     }
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_2
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     while (a <= 100) {
//         cout << a << " ";
//         a += 2;
//     }
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_3
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 2;
//     while (a <= 100) {
//         cout << a << " ";
//         a += 2;
//     }
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_4
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     while (a <= 10) {
//         cout << a * a << " ";
//         a++;
//     }
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_5
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     while (a <= 15) {
//         cout << a * a * a << " ";
//         a++;
//     }
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_6
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     int sum = 0;
//     while (a <= 100) {
//         sum += a;
//         a++;
//     }
//     cout << "Sum = " << sum << endl;
//     return 0;
// }
//
//
//
// // Problem_7
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     int sum = 0;
//     while (a <= 100) {
//         if (a % 2 == 0)
//             sum += a;
//         a++;
//     }
//     cout << "Sum of even numbers = " << sum << endl;
//     return 0;
// }
//
//
//
// // Problem_8
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 1;
//     int sum = 0;
//     while (a <= 100) {
//         if (a % 2 != 0)
//             sum += a;
//         a++;
//     }
//     cout << "Sum of odd numbers = " << sum << endl;
//     return 0;
// }
//
//
// // Problem_9
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 5;
//     do {
//         cout << a << " ";
//         a += 5;
//     } while (a <= 100);
//     cout << endl;
//     return 0;
// }
//
//
// // Problem_10
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 100;
//     do {
//         cout << a << " ";
//         a -= 5;
//     } while (a >= 5);
//     cout << endl;
//     return 0;
// }
//
//
//
// // Problem_11
// #include <iostream>
// using namespace std;
//
// int main() {
//     int a = 10;
//     do {
//         cout << a << " ";
//         a--;
//     } while (a >= 1);
//     cout << endl;
//     return 0;
// }
//
//
//
// // Problem_12
#include <iostream>
using namespace std;

int main() {
    int a = 50;
    do {
        cout << a << " ";
        a += 2;
    } while (a <= 70);
    cout << endl;
    return 0;
}
