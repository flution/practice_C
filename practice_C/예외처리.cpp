#include<iostream>
#include <string>

using namespace std;

//void main() {
//	int a = 0;
//	int b = 0;
//
//    cout << "�������� �� �Է� : ";
//    cin >> a;
//    cout << "������ �� �Է� : ";
//    cin >> b;

    //�������� ���
    //// ���� ���� Ȯ��
    //if (a == 0 || b == 0) {
    //    cout << "0�� ���� �� �����ϴ�." << endl;
    //}

    //// �м��� �������� ���� ���� ó��
    //else if (a % b != 0) {
    //    cout << "������ ��� : " << a / b << "�� ���� �������� �������� �ʽ��ϴ�." << endl;
    //}

    //// ������ �������� ���� ����ó��
    //else if (b < 0) {
    //    cout << "b�� �Է°��� �����Դϴ�." << endl;
    //}

    //else {
    //    cout << "������ ��� : " << a / b << endl;
    //}

    //2. �� �� Ȯ��� try~catch��.
    /*try
    {
        if (a < 0) {
            throw "a�� ���� �����Դϴ�.";
        }
        if (b == 0) {
            throw b;
        }
        cout << "������ ��� : " << a / b << endl;
    }
    catch (int exception)
    {
        cout << "b�� �Է°��� 0�Դϴ�. �����ڵ� : " << exception << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }*/


    //3��. functionȭ�� ����� ����ó��.

    void divide(int x, int y) 
    {
        if (x < 0) {
            throw "x�� ���� �����Դϴ�.";
        }
        if (y == 0) {
            throw y;
        }
        cout << "������ ��� : " << x / y << endl;
    }

    void main() {
        int a = 0;
        int b = 0;

        cout << "�������� �� �Է� : ";
        cin >> a;
        cout << "������ �� �Է� : ";
        cin >> b;
        try
        {
            divide(a, b);
        }
        catch (int exception)
        {
            cout << "b�� �Է°��� 0�Դϴ�. �����ڵ� : " << exception << endl;
        }
        catch (const char* msg)
        {
            cout << msg << endl;
        }
    }
