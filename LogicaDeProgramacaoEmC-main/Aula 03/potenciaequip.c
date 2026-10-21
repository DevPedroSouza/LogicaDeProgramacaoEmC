int main(){
    int potencia, hora, total;
    scanf("Potencia do equipamento: %d", &potencia);
    printf("Horas poe dia: %d", &hora);
    total = (potencia*hora*30)/1000;
    printf("Consulmo mensal: %d", total);
    return 0;
}