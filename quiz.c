#include<stdio.h>
#include<stdlib.h>


int question(int d){
    
    switch(d){
        case 1: printf("1.Brass gets discoloured in air because of the presence of which of the following gases in air ?\n"

"A.	Oxygen\n"
"B.	Hydrogen sulphide\n"
"C.	Carbon dioxide\n"
"D.	Nitrogen\n");
break;
        case 2: printf("2.Which of the following is a non metal that remains liquid at room temperature ?\n"

"A.	Phosphorous\n"
"B.	Bromine\n"
"C.	Chlorine\n"
"D.	Helium\n");
break;

        case 3: printf("3.Chlorophyll is a naturally occurring chelate compound in which central metal is ?\n"

"A.copper\n"
"B.magnesium\n"
"C.iron\n"
"D.calcium\n");
break;

case 4: printf("4.Which of the following is used in pencils?\n"

"A.Graphite\n"
"B.Silicon\n"
"C.Charcoal\n"
"D.Phosphorous\n");
break;

case 5: printf("5.Which of the following metals forms an amalgam with other metals ?\n"

"A.Tin\n"
"B.Mercury\n"
"C.Leadv\n"
"D.Zinc\n");
break;

case 6: printf("6.Chemical formula for water is ?v"

"A.NaAlO2\n"
"B.H2O\n"
"C.Al2O3\n"
"D.CaSiO3\n");
break;

case 7: printf("7.The gas usually filled in the electric bulb is ?\n"

"A.nitrogen\n"
"B.hydrogen\n"
"C.carbon dioxide\n"
"D.oxygen\n");
break;

case 8: printf("8.Washing soda is the common name for ?\n"

"A.Sodium carbonate\n"
"B.Calcium bicarbonate\n"
"C.Sodium bicarbonate\n"
"D.Calcium carbonate\n");
break;

case 9: printf("9.Quartz crystals normally used in quartz clocks etc. is chemically ?\n"

"A.silicon dioxide\n"
"B.germanium oxidev\n"
"C.a mixture of germanium oxide and silicon dioxide\n"
"D.sodium silicate\n");
break;


case 10: printf("10.Which of the gas is not known as green house gas ?\n"

"A.Methane\n"
"B.Nitrous oxide\n"
"C.Carbon dioxide\n"
"D.Hydrogen\n");
break;
default:printf("The question has ended\n");
break;
    }
}
int main(){
    char c,ans,ans2;
    int d=0;
    int a=0;
    int s=0;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("|-----------------------------------------------------------------------------------------------------|\n");
    printf("|                                                 Welcome to My Quiz                                  |\n");
    printf("|                                                 ******************                                  |\n");
    printf("|-----------------------------------------------------------------------------------------------------|\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("The question that are from General Knowledge and all question have 4 option and just type the option either 'a','b','c','d'.\n\n");
    printf("If you are ready to start the quiz just type start and type the number of question from 1 to 10\n");
    for(int i=1;i<11;i++){
        question(i);
        scanf("%c",&ans);
         s=s+d;
        
        if(i==1 && ans=='b'){
            printf("you are right here is your second question \n");
            d=d+1;
        }
        else if (i==2 && ans=='b'){
            printf("you are right here is your third question \n");
            d=d+1;
        }
        else if (i==3 && ans=='b'){
            printf("you are right here is your Fourth question \n");
            d=d+1;
        }
        else if (i==4 && ans=='a'){
            printf("you are right here is your Fifth question \n");
           d=d+1;
        }
        else if (i==5 && ans=='b'){
            printf("you are right here is your Sixth question \n");
            d=d+1;
        }
        else if (i==6 && ans=='b'){
            printf("you are right here is your Seventh question \n");
            d=d+1;
        }
        else if (i==7 && ans=='a'){
            printf("you are right here is your Eight question \n");
            d=d+1;
        }
        else if (i==8 && ans=='a'){
            printf("you are right here is your Ninth question \n");
            d=d+1;
        }
        else if (i==9 && ans=='a'){
            printf("you are right here is your Tenth question \n");
           d=d+1;
        }
        else if (i==10 && ans=='d'){
            printf("you are right  \n");
            d=d+1;
        }
        else{
            i=i-1;
            
        }
    
    }
    int result=10-((s/9)-10);
    printf("|---------------------------------------------------------------------------------------------------------|\n");
    printf("|                                                 So here is your result                                  |\n");
    printf("|                                                 **********************                                  |\n");
    printf("|                                            You got %d from total of 10 marks                           |\n",result);
    printf("|---------------------------------------------------------------------------------------------------------|\n");

    

}

 
