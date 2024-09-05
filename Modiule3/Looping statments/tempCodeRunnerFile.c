int main() {
    int num, sum = 0;

    printf("enter the number: ");
    scanf("%d", &num);

    for(int a = 1; a <= num; a++){
        sum += a * a;
    }
    printf("The sum of series is %d\n", sum);
}