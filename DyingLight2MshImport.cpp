// DyingLight2MshImport.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <TlHelp32.h>
#include <vector>
#include <stdlib.h>
#include <winternl.h>
#include <set>
#include <stdlib.h>
#include <intrin.h>

using std::cout;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;
using std::cin;

uint32_t swap_uint32(uint32_t val)
{
    val = ((val << 8) & 0xFF00FF00) | ((val >> 8) & 0xFF00FF);
    return (val << 16) | (val >> 16);
}

int main()
{
    cout << "Select a slot to import: " << endl << "Slot1" << endl;
    string x1;
    cin >> x1;
    ifstream is;
    ofstream os;
    if (x1 == "Slot1")
    {
        is.open("input2a.msh", std::ios::binary);
        BYTE pa1;
        BYTE pa2;
        BYTE pa3;
        BYTE pa4;
        BYTE pb1;
        BYTE pb2;
        BYTE pb3;
        BYTE pb4;
        BYTE pc1;
        BYTE pc2;
        BYTE pc3;
        BYTE pc4;
        BYTE pd1;
        BYTE pd2;
        BYTE pd3;
        BYTE pd4;
        BYTE pc1a;
        BYTE pc2a;
        BYTE pc3a;
        BYTE pc4a;
        BYTE pd1a;
        BYTE pd2a;
        BYTE pd3a;
        BYTE pd4a;
        BYTE pc1ab;
        BYTE pc2ab;
        BYTE pc3ab;
        BYTE pc4ab;
        BYTE pd1ab;
        BYTE pd2ab;
        BYTE pd3ab;
        BYTE pd4ab;
        BYTE pd1aba;
        BYTE pd2aba;
        BYTE pd3aba;
        BYTE pd4aba;
        BYTE x4;
        int Co1 = 0;
        int c1 = 0;
        int Co3 = 0;
        while (1)
        {
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.read(reinterpret_cast<char*>(&pb3), sizeof(pb3));
            is.read(reinterpret_cast<char*>(&pb4), sizeof(pb4));
            is.read(reinterpret_cast<char*>(&pc1), sizeof(pc1));
            is.read(reinterpret_cast<char*>(&pc2), sizeof(pc2));
            is.read(reinterpret_cast<char*>(&pc3), sizeof(pc3));
            is.read(reinterpret_cast<char*>(&pc4), sizeof(pc4));
            is.read(reinterpret_cast<char*>(&pd1), sizeof(pd1));
            is.read(reinterpret_cast<char*>(&pd2), sizeof(pd2));
            is.read(reinterpret_cast<char*>(&pd3), sizeof(pd3));
            is.read(reinterpret_cast<char*>(&pd4), sizeof(pd4));
            is.read(reinterpret_cast<char*>(&pc1a), sizeof(pc1a));
            is.read(reinterpret_cast<char*>(&pc2a), sizeof(pc2a));
            is.read(reinterpret_cast<char*>(&pc3a), sizeof(pc3a));
            is.read(reinterpret_cast<char*>(&pc4a), sizeof(pc4a));
            is.read(reinterpret_cast<char*>(&pd1a), sizeof(pd1a));
            is.read(reinterpret_cast<char*>(&pd2a), sizeof(pd2a));
            is.read(reinterpret_cast<char*>(&pd3a), sizeof(pd3a));
            is.read(reinterpret_cast<char*>(&pd4a), sizeof(pd4a));
            is.read(reinterpret_cast<char*>(&pc1ab), sizeof(pc1ab));
            is.read(reinterpret_cast<char*>(&pc2ab), sizeof(pc2ab));
            is.read(reinterpret_cast<char*>(&pc3ab), sizeof(pc3ab));
            is.read(reinterpret_cast<char*>(&pc4ab), sizeof(pc4ab));
            is.read(reinterpret_cast<char*>(&pd1ab), sizeof(pd1ab));
            is.read(reinterpret_cast<char*>(&pd2ab), sizeof(pd2ab));
            is.read(reinterpret_cast<char*>(&pd3ab), sizeof(pd3ab));
            is.read(reinterpret_cast<char*>(&pd4ab), sizeof(pd4ab));
            is.seekg(-15, SEEK_CUR);
            if (pa1 != 0 && pa2 != 0 && pa3 != 0 && pa4 != 0 && pb1 != 0 && pb2 != 0 && pb3 != 0 && pb4 != 0 && pc1 != 0 && pc2 != 0 && pc3 != 0 && pc4 != 0 && pd1 != 0 && pd2 != 0 && pd3 != 0 && pd4 != 0 && pc1a != 0 && pc2a != 0 && pc3a != 0 && pc4a != 0 && pd1a != 0 && pd2a != 0 && pd3a != 0 && pd4a != 0 && pc1ab != 0 && pc2ab != 0 && pc3ab != 0 && pc4ab != 0 && pd1ab != 0 && pd2ab != 0 && pd3ab != 0 && pd4ab != 0)
            {
                is.seekg(-1, SEEK_CUR);
                break;
            }
        }
        os.open("temp1.tmp", std::ios::binary);
        while (1)
        {
            is.read(reinterpret_cast<char*>(&x4), sizeof(x4));
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.seekg(-6, SEEK_CUR);
            os.write(reinterpret_cast<char*>(&x4), sizeof(x4));
            Co1++;
            if (pa1 == 0x40 && pa2 == 0x01 && pa3 == 0 && pa4 == 0)
            {
                break;
            }
        }
        os.close();
        os.open("temp2.tmp", std::ios::binary);
        while (1)
        {
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.seekg(-5, SEEK_CUR);
            if (pa1 == 0 && pa2 == 0 && pa3 == 0x01 && pa4 == 0 && pb1 == 0x02 && pb2 == 0)
            {
                is.seekg(-1, SEEK_CUR);
                break;
            }
        }
        /*
        while (1)
        {
            is.read(reinterpret_cast<char*>(&x4), sizeof(x4));
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.seekg(-6, SEEK_CUR);
            os.write(reinterpret_cast<char*>(&x4), sizeof(x4));
            Co3++;
            if (pa1 == 0x00 && pa2 == 0x00 && pa3 == 0 && pa4 == 0x00)
            {
                break;
            }
        }
        */
        while (1)
        {
            is.read(reinterpret_cast<char*>(&x4), sizeof(x4));
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.seekg(-6, SEEK_CUR);
            os.write(reinterpret_cast<char*>(&x4), sizeof(x4));
            Co3++;
            if (pa1 == 0x51 && pa2 == 0x01 && pa3 == 0 && pa4 == 0)
            {
                break;
            }
        }
        while (1)
        {
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.read(reinterpret_cast<char*>(&pb3), sizeof(pb3));
            is.read(reinterpret_cast<char*>(&pb4), sizeof(pb4));
            is.read(reinterpret_cast<char*>(&pc1), sizeof(pc1));
            is.read(reinterpret_cast<char*>(&pc2), sizeof(pc2));
            is.read(reinterpret_cast<char*>(&pc3), sizeof(pc3));
            is.read(reinterpret_cast<char*>(&pc4), sizeof(pc4));
            is.read(reinterpret_cast<char*>(&pd1), sizeof(pd1));
            is.read(reinterpret_cast<char*>(&pd2), sizeof(pd2));
            is.read(reinterpret_cast<char*>(&pd3), sizeof(pd3));
            is.read(reinterpret_cast<char*>(&pd4), sizeof(pd4));
            is.read(reinterpret_cast<char*>(&pc1a), sizeof(pc1a));
            is.read(reinterpret_cast<char*>(&pc2a), sizeof(pc2a));
            is.read(reinterpret_cast<char*>(&pc3a), sizeof(pc3a));
            is.read(reinterpret_cast<char*>(&pc4a), sizeof(pc4a));
            is.read(reinterpret_cast<char*>(&pd1a), sizeof(pd1a));
            is.read(reinterpret_cast<char*>(&pd2a), sizeof(pd2a));
            is.read(reinterpret_cast<char*>(&pd3a), sizeof(pd3a));
            is.read(reinterpret_cast<char*>(&pd4a), sizeof(pd4a));
            is.read(reinterpret_cast<char*>(&pc1ab), sizeof(pc1ab));
            is.read(reinterpret_cast<char*>(&pc2ab), sizeof(pc2ab));
            is.read(reinterpret_cast<char*>(&pc3ab), sizeof(pc3ab));
            is.read(reinterpret_cast<char*>(&pc4ab), sizeof(pc4ab));
            is.read(reinterpret_cast<char*>(&pd1ab), sizeof(pd1ab));
            is.read(reinterpret_cast<char*>(&pd2ab), sizeof(pd2ab));
            is.read(reinterpret_cast<char*>(&pd3ab), sizeof(pd3ab));
            is.read(reinterpret_cast<char*>(&pd4ab), sizeof(pd4ab));
            is.read(reinterpret_cast<char*>(&pd1ab), sizeof(pd1ab));
            is.read(reinterpret_cast<char*>(&pd2ab), sizeof(pd2ab));
            is.read(reinterpret_cast<char*>(&pd3ab), sizeof(pd3ab));
            is.read(reinterpret_cast<char*>(&pd4ab), sizeof(pd4ab));
            is.seekg(-35, SEEK_CUR);
            if (pa1 != 0 && pa2 != 0 && pa3 != 0 && pa4 != 0 && pb1 != 0 && pb2 != 0 && pb3 != 0 && pb4 != 0 && pc1 != 0 && pc2 != 0 && pc3 != 0 && pc4 != 0 && pd1 != 0 && pd2 != 0 && pd3 != 0 && pd4 != 0 && pc1a != 0 && pc2a != 0 && pc3a != 0 && pc4a != 0 && pd1a != 0 && pd2a != 0 && pd3a != 0 && pd4a != 0 && pc1ab != 0 && pc2ab != 0 && pc3ab != 0 && pc4ab != 0 && pd1ab != 0 && pd2ab != 0 && pd3ab != 0 && pd4ab != 0)
            {
                break;
            }
        }
        os.close();
        os.open("temp3.tmp", std::ios::binary);
        while (1)
        {
            is.read(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            is.read(reinterpret_cast<char*>(&pa2), sizeof(pa2));
            is.read(reinterpret_cast<char*>(&pa3), sizeof(pa3));
            is.read(reinterpret_cast<char*>(&pa4), sizeof(pa4));
            is.read(reinterpret_cast<char*>(&pb1), sizeof(pb1));
            is.read(reinterpret_cast<char*>(&pb2), sizeof(pb2));
            is.seekg(-5, SEEK_CUR);
            os.write(reinterpret_cast<char*>(&pa1), sizeof(pa1));
            if (pa1 == 0 && pa2 == 0 && pa3 == 0x01 && pa4 == 0 && pb1 == 0x02 && pb2 == 0)
            {
                is.seekg(-1, SEEK_CUR);
                break;
            }
        }
        os.close();
        is.close();
        BYTE a;
        BYTE b;
        BYTE c;
        BYTE d;
        BYTE a1;
        BYTE b1;
        BYTE c1a;
        BYTE d1;
        byte b2[12] = { 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x7F, };
        byte b3[12] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF };
        os.open("temp4.tmp", std::ios::binary);
        //byte b2[28] = { };
        int s1 = 0;
        int s2 = 0;
        Co1 = Co1 / 4;
        Co1 = Co1 / 3;
        Co1 = Co1 * 40;
        cout << Co1 << endl;
        for (int k = 0; k < Co1 / 40; k++)
        {
            is.open("temp1.tmp", std::ios::binary);
            is.seekg(s1, std::ios::beg);
            for (int i = 0; i < 12;)
            {
                is.read(reinterpret_cast<char*>(&d), sizeof(d));
                s1++;
                os.write(reinterpret_cast<char*>(&d), sizeof(d));
                i++;
            }
            is.close();
            os.write(reinterpret_cast<char*>(&b2), sizeof(b2));
            is.open("temp3.tmp", std::ios::beg);
            is.seekg(s2, std::ios::beg);
            is.read(reinterpret_cast<char*>(&a1), sizeof(a1));
            is.read(reinterpret_cast<char*>(&b1), sizeof(b1));
            is.read(reinterpret_cast<char*>(&c1a), sizeof(c1a));
            is.read(reinterpret_cast<char*>(&d1), sizeof(d1));
            s2 = s2 + 4;
            os.write(reinterpret_cast<char*>(&a1), sizeof(a1));
            os.write(reinterpret_cast<char*>(&b1), sizeof(b1));
            os.write(reinterpret_cast<char*>(&c1a), sizeof(c1a));
            os.write(reinterpret_cast<char*>(&d1), sizeof(d1));
            is.close();
            os.write(reinterpret_cast<char*>(&b3), sizeof(b3));
            /*
            for (int g = 0; g < 8;)
            {

                is.read(reinterpret_cast<char*>(&d), sizeof(d));
                os.write(reinterpret_cast<char*>(&d), sizeof(d));
                g++;
            }
            */
            //os.write(reinterpret_cast<char*>(&b2), sizeof(b2));
        }
        
        is.close();
        os.close();
        os.open("customrpack.rpack", std::ios::binary);
        is.open("common_meshes_pc.rpack", std::ios::binary);
        BYTE stor1[0x52930];
        is.read(reinterpret_cast<char*>(&stor1), sizeof(stor1));
        os.write(reinterpret_cast<char*>(&stor1), sizeof(stor1));
        os.write(reinterpret_cast<char*>(&Co1), sizeof(Co1));
        BYTE stor2[8] = { 0, 0, 0, 0, 0x04, 0x01, 0x83, 0x10 };
        os.write(reinterpret_cast<char*>(&stor2), sizeof(stor2));
        int Co1a = std::byteswap(Co1);
        int stor3 = 0x4CB32204 + Co1a;
        stor3 = std::byteswap(stor3);
        os.write(reinterpret_cast<char*>(&stor3), sizeof(stor3));
        os.write(reinterpret_cast<char*>(&Co3), sizeof(Co3));
        BYTE stor1a[4] = { 0,0,0,0 };
        os.write(reinterpret_cast<char*>(&stor1a), sizeof(stor1a));
        is.seekg(24, SEEK_CUR);
        BYTE stor4[0x844C1];
        for (int i1b = 0; i1b < 2048; i1b++)
        {
            is.read(reinterpret_cast<char*>(&stor4), sizeof(stor4));
            os.write(reinterpret_cast<char*>(&stor4), sizeof(stor4));
        }
        is.close();
        is.open("fixfile.fix", std::ios::binary);
        BYTE stor5[0x378];
        is.read(reinterpret_cast<char*>(&stor5), sizeof(stor5));
        os.write(reinterpret_cast<char*>(&stor5), sizeof(stor5));
        is.close();
        is.open("temp4.tmp", std::ios::binary);
        for (int i1c = 0; i1c < Co1; i1c++)
        {
            is.read(reinterpret_cast<char*>(&x4), sizeof(x4));
            os.write(reinterpret_cast<char*>(&x4), sizeof(x4));
        }
        is.close();
        is.open("temp2.tmp", std::ios::binary);
        for (int i1d = 0; i1d < Co3; i1d++)
        {
            is.read(reinterpret_cast<char*>(&x4), sizeof(x4));
            os.write(reinterpret_cast<char*>(&x4), sizeof(x4));
        }
    }
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
