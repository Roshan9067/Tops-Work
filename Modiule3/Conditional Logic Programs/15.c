
/* 15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria Eligibility Criteria : Marks in 
Maths >=65
Phy >=55  
Chem>=50 and 
Total in all three subject >=190 
Total in Maths and Physics >=140 
 Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include <stdio.h>
int main() {
    int maths, phy, chem, Total_marks, math_phy;

    printf("Enter marks obtain in maths between 0 to 100: ");
    scanf("%d", &maths);

    printf("Enter marks obtain in physics between 0 to 100: ");
    scanf("%d", &phy);

    printf("Enter marks obtain in chemistry between 0 to 100: ");
    scanf("%d", &chem);

    Total_marks = maths + phy + chem;
    printf("Total marks obtain in maths , physics and chemistry is: %d\n", Total_marks);

    math_phy = maths + phy;
    printf("Total marks obtain in maths and physics is: %d\n", math_phy);
    if(maths >= 65 && phy >= 55 && chem >= 50 && Total_marks >= 190 && math_phy >= 140){
        printf("You are eligibal for admission in professional course\n");
    }else{
        printf("You are not eligibal for the admission in professional course");
    }








}