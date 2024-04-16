#include<iostream>
#include <string>

using namespace std;

//void main() {
//	int a = 0;
//	int b = 0;
//
//    cout << "나누어질 수 입력 : ";
//    cin >> a;
//    cout << "나누는 수 입력 : ";
//    cin >> b;

    //고전적인 방식
    //// 예외 조건 확인
    //if (a == 0 || b == 0) {
    //    cout << "0은 나눌 수 없습니다." << endl;
    //}

    //// 분수로 나누어질 때의 예외 처리
    //else if (a % b != 0) {
    //    cout << "나누기 결과 : " << a / b << "이 셈은 나머지를 포함하지 않습니다." << endl;
    //}

    //// 음수로 나누어질 때의 예외처리
    //else if (b < 0) {
    //    cout << "b의 입력값은 음수입니다." << endl;
    //}

    //else {
    //    cout << "나누기 결과 : " << a / b << endl;
    //}

    //2. 좀 더 확장된 try~catch문.
    /*try
    {
        if (a < 0) {
            throw "a의 값은 음수입니다.";
        }
        if (b == 0) {
            throw b;
        }
        cout << "나누기 결과 : " << a / b << endl;
    }
    catch (int exception)
    {
        cout << "b의 입력값은 0입니다. 예외코드 : " << exception << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }*/


    //3번. function화를 사용한 예외처리.

    void divide(int x, int y) 
    {
        if (x < 0) {
            throw "x의 값은 음수입니다.";
        }
        if (y == 0) {
            throw y;
        }
        cout << "나누기 결과 : " << x / y << endl;
    }

    void main() {
        int a = 0;
        int b = 0;

        cout << "나누어질 수 입력 : ";
        cin >> a;
        cout << "나누는 수 입력 : ";
        cin >> b;
        try
        {
            divide(a, b);
        }
        catch (int exception)
        {
            cout << "b의 입력값은 0입니다. 예외코드 : " << exception << endl;
        }
        catch (const char* msg)
        {
            cout << msg << endl;
        }
    }
