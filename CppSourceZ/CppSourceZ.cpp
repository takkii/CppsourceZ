// CppSourceZ.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"

int main(void)
{
    try
    {
        time_t now = time(nullptr);
        const tm* nowlt = localtime(&now);
        
        stringstream x;
        x<<"R0";
        x<<nowlt->tm_year-118;
        x<<".";
        x<<nowlt->tm_mon+1;
        x<<".";
        x<<nowlt->tm_mday;
        
        string result_r = x.str();
        
        stringstream y;
        y<<"�ߘa";
        y<<nowlt->tm_year-118;
        y<<"�N";
        y<<nowlt->tm_mon+1;
        y<<"��";
        y<<nowlt->tm_mday;
        y<<"��";
        
        string result_reiwa = y.str();
        
        
        stringstream z;
        z<<"20";
        z<<nowlt->tm_year-100;
        z<<"�N";
        z<<nowlt->tm_mon+1;
        z<<"��";
        z<<nowlt->tm_mday;
        z<<"��" << " : ";
        z<<nowlt->tm_hour;
        z<<"��";
        z<<nowlt->tm_min;
        z<<"��";
        z<<nowlt->tm_sec;
        z<<"�b";
        
        string result = z.str();
        
        int redays = nowlt->tm_yday;
        int redays_mini = 365-redays;
        
        string tim = "������\��";
        string gantan = "���N��1��1���܂ł���";
        string aisatu = " ���ł�";
        string number = "���߂��萔���ԍ�";
        string week = "�j��";
        
        // week Sun ~ Sat
        time_t timer;
        struct tm *t_st;
        const char *wday[] = {"��", "��", "��", "��", "��", "��", "�y"};
        
        time(&timer);
        t_st = localtime(&timer);
        
        stringstream ss;
        stringstream ssd;
        
        // version number
        ss << 1;
        ssd << 1;
        string str_num = ss.str();
        string str_dd = ssd.str();
        string comma = " : ";
        
        // version number comma
        string number_comma = ".1.";
        
        string himekuri = number + comma + str_num + number_comma + str_dd;
        
        cout << tim << comma << result << comma << wday[t_st->tm_wday] << week << endl;
        cout << gantan << comma << redays_mini << aisatu << endl;
        cout << result_reiwa << comma << result_r << endl;
        cout << himekuri << endl;
        
        // C++ version info.
        long cpp17 = 201703L;
        long cpp14 = 201402L;
        long cpp11 = 201103L;
        long cpp98 = 199711L;
        
        // long type
        long cpp_ver = __cplusplus;
        
		// long �� long equal.
        if (cpp_ver == cpp17)
            cout << "���݂� C++ : C++17" << endl;
        else if (cpp_ver == cpp14)
            cout << "���݂� C++ : C++14" << endl;
        else if (cpp_ver == cpp11)
            cout << "���݂� C++ : C++11" << endl;
        else if (cpp_ver == cpp98)
            cout << "���݂� C++ : C++98" << endl;
        else
            cout << "���݂� C++ : pre-standard C++" << endl;
        
        return 0;
    }
    catch (const exception &e)
    {
        cerr << e.what();
    }
}


