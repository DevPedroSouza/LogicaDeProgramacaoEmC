int main(){
    int hora;
    int minutos;
    int total;
    printf("horas passadas: ");
    scanf("%d", &hora);
    printf("Minutos passados: ");
    scanf("%d", &minutos);
    total= minutos + (hora*60);
    printf("Já se passaram %d minutos desde o incio do dia: ", total);
    return 0;
}