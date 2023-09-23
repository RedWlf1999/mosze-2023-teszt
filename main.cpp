#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // hiányzó karakter az elemszámnál
    std::cout << '1-100 ertekek duplazasa'<<std::endl; // nincs lezárva a kiiratás
    for (int i = 0;i<N_ELEMENTS;i++) // hiányos ciklusmag
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:" <<std::endl;;// nincs lezárva a kiiratás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) //a második vessző nem pontos
    {
        atlag += b[i]; //hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
