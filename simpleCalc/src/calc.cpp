int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
double volume(int a, int b, int h, int H){
    return (a+b)*h/2*H;
}
void help(){
    string helpMsg = "Simple Calculator\nsimpleCalc [nazwa dzialania]\n\nDzialania:\nadd [a] [b]\n\tDodawanie dwoch liczb calkowitych [a]+[b].\nsubtract [a] [b]\n\tOdejmowanie dwoch liczb calkowitych [a]-[b]\nvolume [a] [b] [h] [H]\n\tObliczanie objetosci graniastoslupa prostego o podstawie trapezu, gdzie:\n\t [a] i [b] to podstawy,\n\t [h] to wysokosc trapezu,\n\t [H] to wysokosc bryly\nhelp\n\tDokumentacja";
    cout<<helpMsg;
}
void error(bool syntax, int expectedArgs){
    if(syntax){
        cout<<"Nie ma takiej opcji. Zerknij do dokumentacji: \n";
        help();
    }else{
        cout<<"Zla liczba argumentow. Ta funkcja oczekuje "<<expectedArgs<<" argumentow. Zerknij do dokumentacji:\n";
        help();
    }
    exit(1);
}