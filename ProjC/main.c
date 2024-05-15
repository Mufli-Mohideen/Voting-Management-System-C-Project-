#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>


char id[20],candidate1[20],candidate2[20],party1[20],party2[20];
int Ampara_count=0,Anuradhapura_count=0,Badulla_count=0,Batticaloa_count=0,Colombo_count=0,Galle_count=0,Gampaha_count=0,Hambantota_count=0,Jaffna_count=0,Kalutara_count=0,Kandy_count=0,Kegalle_count=0,Kilinochchi_count=0,Kurunegala_count=0,Mannar_count=0,Matale_count=0,Matara_count=0,Monaragala_count=0,Mullativu_count=0,NuwaraEliya_count=0,Polonnaruwa_count=0,Puttalam_count=0,Ratnapura_count=0,Trincomalee_count=0,Vavuniya_count=0;
int select,candidate1Ampara=0,candidate2Ampara=0,candidate1Anuradhapura=0,candidate2Anuradhapura=0,candidate1Badulla=0,candidate2Badulla=0,candidate1Batticaloa=0,candidate2Batticaloa=0,candidate1Colombo=0,candidate2Colombo=0,candidate1Galle=0,candidate2Galle=0,candidate1Gampaha=0,candidate2Gampaha=0,candidate1Hambantota=0,candidate2Hambantota=0,candidate1Jaffna=0,candidate2Jaffna=0,candidate1Kalutara=0,candidate2Kalutara=0,candidate1Kandy=0,candidate2Kandy=0,candidate1Kegalle=0,candidate2Kegalle=0,candidate1Kilinochchi=0,candidate2Kilinochchi=0,candidate1Kurunegala=0,candidate2Kurunegala=0,candidate1Mannar=0,candidate2Mannar=0,candidate1Matale=0,candidate2Matale=0,candidate1Matara=0,candidate2Matara=0,candidate1Monaragala=0,candidate2Monaragala=0,candidate1Mullativu=0,candidate2Mullativu=0,candidate1NuwaraEliya=0,candidate2NuwaraEliya=0,candidate1Polonnaruwa=0,candidate2Polonnaruwa=0,candidate1Puttalam=0,candidate2Puttalam=0,candidate1Ratnapura=0,candidate2Ratnapura=0,candidate1Trincomalee=0,candidate2Trincomalee=0,candidate1Vavuniya=0,candidate2Vavuniya=0;
int Ampara_rejected=0,Anuradhapura_rejected=0,Badulla_rejected=0,Batticaloa_rejected=0,Colombo_rejected=0,Galle_rejected=0,Gampaha_rejected=0,Hambantota_rejected=0,Jaffna_rejected=0,Kalutara_rejected=0,Kandy_rejected=0,Kegalle_rejected=0,Kilinochchi_rejected=0,Kurunegala_rejected=0,Mannar_rejected=0,Matale_rejected=0,Matara_rejected=0,Monaragala_rejected=0,Mullativu_rejected=0,NuwaraEliya_rejected=0,Polonnaruwa_rejected=0,Puttalam_rejected=0,Ratnapura_rejected=0,Trincomalee_rejected=0,Vavuniya_rejected=0,rejected=0;

int main()
{
    printf("\n\t\t\t\t----------The Democratic Socialist Republic of Sri Lanka----------");
    printf("\n\t\t\t\t\t\t-presidential election 2022-");

    //Entering the names and parties of the candidates..........
    system("COLOR 0c");

    printf("\n\n\nPlease enter the 1st candidates name:\t");
    scanf("%s",&candidate1);
    printf("Please enter the  political party:\t");
    scanf("%s",&party1);

    printf("\nPlease enter the 2nd candidates name:\t");
    scanf("%s",&candidate2);
    printf("Please enter the  political party:\t");
    scanf("%s",&party2);

    system("cls");

    vote();
    return 0;
}

void vote()
{

    int nic;
    int district;
    system("COLOR 0a");
    //All the data are inputted using this function..........
    for(;;)
    {
    printf("\n\t\t\t\t----------The Democratic Socialist Republic of Sri Lanka----------");
    printf("\n\t\t\t\t\t\t-presidential election 2022-");

    printf("\n\n\n\t\t\t\t\t\t--ELECTION RULES & REGULATIONS--");
    printf("\n\n1: You must cast your vote in a single attempt.....\n2.False selections will cause your vote to be rejected.....\n\n\n");

    //A voter must enter his/her NIC number, Select his/her voting district and select the candidate they prefer..........

    printf("Please enter your NIC number:\t");
    scanf("%d",&nic);

    //The loop breaking number is only given to the authorities..........

    if(nic == 0000)
        {
            break;
        }

    printf("\n\n\t\t\t\t\t\t\t-DISTRICT LIST-\n\n");
    printf("\t\t\t\t\t\t1.Ampara\n");
    printf("\t\t\t\t\t\t2.Anuradhapura\n");
    printf("\t\t\t\t\t\t3.Badulla\n");
    printf("\t\t\t\t\t\t4.Batticaloa\n");
    printf("\t\t\t\t\t\t5.Colombo\n");
    printf("\t\t\t\t\t\t6.Galle\n");
    printf("\t\t\t\t\t\t7.Gampaha\n");
    printf("\t\t\t\t\t\t8.Hambantota\n");
    printf("\t\t\t\t\t\t9.Jaffna\n");
    printf("\t\t\t\t\t\t10.Kalutara\n");
    printf("\t\t\t\t\t\t11.Kandy\n");
    printf("\t\t\t\t\t\t12.Kegalle\n");
    printf("\t\t\t\t\t\t13.Kilinochchi\n");
    printf("\t\t\t\t\t\t14.Kurunegala\n");
    printf("\t\t\t\t\t\t15.Mannar\n");
    printf("\t\t\t\t\t\t16.Matale\n");
    printf("\t\t\t\t\t\t17.Matara\n");
    printf("\t\t\t\t\t\t18.Monaragala\n");
    printf("\t\t\t\t\t\t19.Mullativu\n");
    printf("\t\t\t\t\t\t20.Nuwara Eliya\n");
    printf("\t\t\t\t\t\t21.Polonnaruwa\n");
    printf("\t\t\t\t\t\t22.Puttalam\n");
    printf("\t\t\t\t\t\t23.Ratnapura\n");
    printf("\t\t\t\t\t\t24.Trincomalee\n");
    printf("\t\t\t\t\t\t25.Vavuniya\n\n");
    printf("Please select the number of your district from above list:\t");
    scanf("%d",&district);

    //All the votes of 2 candidates for each particular district is calculated with the help of for loop and if/else statement..........

    if (district == 1)
        {
            Ampara_count=Ampara_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("\t1.Mr.%s\n\t2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Ampara=candidate1Ampara+1;
            }
            else if (select == 2)
            {
                candidate2Ampara=candidate2Ampara+1;
            }
            else
            {
                Ampara_rejected=Ampara_rejected+1;
            }
        }


    else if (district == 2)
        {
            Anuradhapura_count=Anuradhapura_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Anuradhapura=candidate1Anuradhapura+1;
            }
            else if (select == 2)
            {
                candidate2Anuradhapura=candidate2Anuradhapura+1;
            }
            else
            {
                Anuradhapura_rejected=Anuradhapura_rejected+1;
            }
        }


    else if (district == 3)
        {
            Badulla_count=Badulla_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Badulla=candidate1Badulla+1;
            }
            else if (select == 2)
            {
                candidate2Badulla=candidate2Badulla+1;
            }
            else
            {
                Badulla_rejected=Badulla_rejected+1;
            }
        }


    else if (district == 4)
        {
            Batticaloa_count=Batticaloa_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Batticaloa=candidate1Batticaloa+1;
            }
            else if (select == 2)
            {
                candidate2Batticaloa=candidate2Batticaloa+1;
            }
            else
            {
                Batticaloa_rejected=Batticaloa_rejected+1;
            }
        }


    else if (district == 5)
        {
            Colombo_count=Colombo_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Colombo=candidate1Colombo+1;
            }
            else if (select == 2)
            {
                candidate2Colombo=candidate2Colombo+1;
            }
            else
            {
                Colombo_rejected=Colombo_rejected+1;
            }
        }


    else if (district == 6)
        {
            Galle_count=Galle_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Galle=candidate1Galle+1;
            }
            else if (select == 2)
            {
                candidate2Galle=candidate2Galle+1;
            }
            else
            {
                Galle_rejected=Galle_rejected+1;
            }
        }


    else if (district == 7)
        {
            Gampaha_count=Gampaha_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Gampaha=candidate1Gampaha+1;
            }
            else if (select == 2)
            {
                candidate2Gampaha=candidate2Gampaha+1;
            }
            else
            {
                Gampaha_rejected=Gampaha_rejected+1;
            }
        }


    else if (district == 8)
        {
            Hambantota_count=Hambantota_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Hambantota=candidate1Hambantota+1;
            }
            else if (select == 2)
            {
                candidate2Hambantota=candidate2Hambantota+1;
            }
            else
            {
                Hambantota_rejected=Hambantota_rejected+1;
            }
        }


    else if (district == 9)
        {
            Jaffna_count=Jaffna_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Jaffna=candidate1Jaffna+1;
            }
            else if (select == 2)
            {
                candidate2Jaffna=candidate2Jaffna;
            }
            else
            {
                Jaffna_rejected=Jaffna_rejected+1;
            }
        }
    else if (district == 10)
        {
            Kalutara_count=Kalutara_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Kalutara=candidate1Kalutara+1;
            }
            else if (select == 2)
            {
                candidate2Kalutara=candidate2Kalutara+1;
            }
            else
            {
                Kalutara_rejected=Kalutara_rejected+1;
            }
        }


    else if (district == 11)
        {
            Kandy_count=Kandy_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Kandy=candidate1Kandy+1;
            }
            else if (select == 2)
            {
                candidate2Kandy=candidate2Kandy+1;
            }
            else
            {
                Kandy_rejected=Kandy_rejected+1;
            }
        }


    else if (district == 12)
        {
            Kegalle_count=Kegalle_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Kegalle=candidate1Kegalle+1;
            }
            else if (select == 2)
            {
                candidate2Kegalle=candidate2Kegalle+1;
            }
            else
            {
                Kegalle_rejected=Kegalle_rejected+1;
            }
        }


    else if (district == 13)
        {
            Kilinochchi_count=Kilinochchi_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Kilinochchi=candidate1Kilinochchi+1;
            }
            else if (select == 2)
            {
                candidate2Kilinochchi=candidate2Kilinochchi+1;
            }
            else
            {
                Kilinochchi_rejected=Kilinochchi_rejected+1;
            }
        }


    else if (district == 14)
        {
            Kurunegala_count=Kurunegala_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Kurunegala=candidate1Kurunegala+1;
            }
            else if (select == 2)
            {
                candidate2Kurunegala=candidate2Kurunegala+1;
            }
            else
            {
                Kurunegala_rejected=Kurunegala_rejected+1;
            }
        }


    else if (district == 15)
        {
            Mannar_count=Mannar_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Mannar=candidate1Mannar+1;
            }
            else if (select == 2)
            {
                candidate2Mannar=candidate2Mannar+1;
            }
            else
            {
                Mannar_rejected=Mannar_rejected+1;
            }
        }


    else if (district == 16)
        {
            Matale_count=Matale_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Matale=candidate1Matale+1;
            }
            else if (select == 2)
            {
                candidate2Matale=candidate2Matale+1;
            }
            else
            {
                Matale_rejected=Matale_rejected+1;
            }
        }


    else if (district == 17)
        {
            Matara_count=Matara_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Matara=candidate1Matara+1;
            }
            else if (select == 2)
            {
                candidate2Matara=candidate2Matara+1;
            }
            else
            {
                Matara_rejected=Matara_rejected+1;
            }
        }


    else if (district == 18)
        {
            Monaragala_count=Monaragala_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Monaragala=candidate1Monaragala+1;
            }
            else if (select == 2)
            {
                candidate2Monaragala=candidate2Monaragala+1;
            }
            else
            {
                Monaragala_rejected=Monaragala_rejected+1;
            }
        }


    else if (district == 19)
        {
            Mullativu_count=Mullativu_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Mullativu=candidate1Mullativu+1;
            }
            else if (select == 2)
            {
                candidate2Mullativu=candidate2Mullativu+1;
            }
            else
            {
                Mullativu_rejected=Mullativu_rejected+1;
            }
        }


    else if (district == 20)
        {
            NuwaraEliya_count=NuwaraEliya_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1NuwaraEliya=candidate1NuwaraEliya+1;
            }
            else if (select == 2)
            {
                candidate2NuwaraEliya=candidate2NuwaraEliya+1;
            }
            else
            {
                NuwaraEliya_rejected=NuwaraEliya_rejected+1;
            }
        }


    else if (district == 21)
        {
            Polonnaruwa_count=Polonnaruwa_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Polonnaruwa=candidate1Polonnaruwa+1;
            }
            else if (select == 2)
            {
                candidate2Polonnaruwa=candidate2Polonnaruwa+1;
            }
            else
            {
                Polonnaruwa_rejected=Polonnaruwa_rejected+1;
            }
        }


    else if (district == 22)
        {
            Puttalam_count=Puttalam_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Puttalam=candidate1Puttalam+1;
            }
            else if (select == 2)
            {
                candidate2Puttalam=candidate2Puttalam+1;
            }
            else
            {
                Puttalam_rejected=Puttalam_rejected+1;
            }
        }


    else if (district == 23)
        {
            Ratnapura_count=Ratnapura_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Ratnapura=candidate1Ratnapura+1;
            }
            else if (select == 2)
            {
                candidate2Ratnapura=candidate2Ratnapura+1;
            }
            else
            {
                Ratnapura_rejected=Ratnapura_rejected+1;
            }
        }


    else if (district == 24)
        {
            Trincomalee_count=Trincomalee_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Trincomalee=candidate1Trincomalee+1;
            }
            else if (select == 2)
            {
                candidate2Trincomalee=candidate2Trincomalee+1;
            }
            else
            {
                Trincomalee_rejected=Trincomalee_rejected+1;
            }
        }


    else if (district == 25)
        {
            Vavuniya_count=Vavuniya_count+1;
            printf("Please select the candidate you are voting for,\n");
            printf("1.Mr.%s\n2.Mr.%s",candidate1,candidate2);
            printf("\n\nI choose candidate:\t");
            scanf("%d",&select);
            if (select == 1)
            {
                candidate1Vavuniya=candidate1Vavuniya+1;
            }
            else if (select == 2)
            {
                candidate2Vavuniya=candidate2Vavuniya+1;
            }
            else
            {
                Vavuniya_rejected=Vavuniya_rejected+1;
            }
        }


    else
        {
            rejected=rejected+1;
        }
        system("cls");
        printf("Processing data....");

        printf("next voter please");
    }


    calculation();
}


int candidate1tot,candidate2tot,totvalid,totrejected,totalvotes;
float candidate1totpercentage,candidate2totpercentage,totvalidpercentage,totrejectedpercentage,candidate1Amparapercentage,candidate2Amparapercentage,candidate1Anuradhapurapercentage,candidate2Anuradhapurapercentage,candidate1Badullapercentage,candidate2Badullapercentage,candidate1Batticaloapercentage,candidate2Batticaloapercentage,candidate1Colombopercentage,candidate2Colombopercentage,candidate1Gallepercentage,candidate2Gallepercentage,candidate1Gampahapercentage,candidate2Gampahapercentage,candidate1Hambantotapercentage,candidate2Hambantotapercentage,candidate1Jaffnapercentage,candidate2Jaffnapercentage,candidate1Kalutarapercentage,candidate2Kalutarapercentage,candidate1Kandypercentage,candidate2Kandypercentage,candidate1Kegallepercentage,candidate2Kegallepercentage,candidate1Kilinochchipercentage,candidate2Kilinochchipercentage,candidate1Kurunegalapercentage,candidate2Kurunegalapercentage,candidate1Mannarpercentage,candidate2Mannarpercentage,candidate1Matalepercentage,candidate2Matalepercentage,candidate1Matarapercentage,candidate2Matarapercentage,candidate1Monaragalapercentage,candidate2Monaragalapercentage,candidate1Mullativupercentage,candidate2Mullativupercentage,candidate1NuwaraEliyapercentage,candidate2NuwaraEliyapercentage,candidate1Polonnaruwapercentage,candidate2Polonnaruwapercentage,candidate1Puttalampercentage,candidate2Puttalampercentage,candidate1Ratnapurapercentage,candidate2Ratnapurapercentage,candidate1Trincomaleepercentage,candidate2Trincomaleepercentage,candidate1Vavuniyapercentage,candidate2Vavuniyapercentage;


void calculation()
{
    candidate1tot=candidate1Ampara+candidate1Anuradhapura+candidate1Badulla+candidate1Batticaloa+candidate1Colombo+candidate1Galle+candidate1Gampaha+candidate1Hambantota+candidate1Jaffna+candidate1Kalutara+candidate1Kandy+candidate1Kegalle+candidate1Kilinochchi+candidate1Kurunegala+candidate1Mannar+candidate1Matale+candidate1Matara+candidate1Monaragala+candidate1Mullativu+candidate1NuwaraEliya+candidate1Polonnaruwa+candidate1Puttalam+candidate1Ratnapura+candidate1Trincomalee+candidate1Vavuniya;
    candidate2tot=candidate2Ampara+candidate2Anuradhapura+candidate2Badulla+candidate2Batticaloa+candidate2Colombo+candidate2Galle+candidate2Gampaha+candidate2Hambantota+candidate2Jaffna+candidate2Kalutara+candidate2Kandy+candidate2Kegalle+candidate2Kilinochchi+candidate2Kurunegala+candidate2Mannar+candidate2Matale+candidate2Matara+candidate2Monaragala+candidate2Mullativu+candidate2NuwaraEliya+candidate2Polonnaruwa+candidate2Puttalam+candidate2Ratnapura+candidate2Trincomalee+candidate2Vavuniya;

    totvalid=candidate1tot+candidate2tot;
    totrejected=Ampara_rejected+Anuradhapura_rejected+Badulla_rejected+Batticaloa_rejected+Colombo_rejected+Galle_rejected+Gampaha_rejected+Hambantota_rejected+Jaffna_rejected+Kalutara_rejected+Kandy_rejected+Kegalle_rejected+Kilinochchi_rejected+Kurunegala_rejected+Mannar_rejected+Matale_rejected+Matara_rejected+Monaragala_rejected+Mullativu_rejected+NuwaraEliya_rejected+Polonnaruwa_rejected+Puttalam_rejected+Ratnapura_rejected+Trincomalee_rejected+Vavuniya_rejected;
    totalvotes=candidate1tot+candidate2tot+totrejected;

    candidate1totpercentage=(candidate1tot*100)/totalvotes;
    candidate2totpercentage=(candidate2tot*100)/totalvotes;

    totvalidpercentage=(totvalid*100)/totalvotes;
    totrejectedpercentage=(totrejected*100)/totalvotes;

    candidate1Amparapercentage=(candidate1Ampara*100)/totalvotes;
    candidate2Amparapercentage=(candidate2Ampara*100)/totalvotes;
    candidate1Anuradhapurapercentage=(candidate1Anuradhapura*100)/totalvotes;
    candidate2Anuradhapurapercentage=(candidate2Anuradhapura*100)/totalvotes;
    candidate1Badullapercentage=(candidate1Badulla*100)/totalvotes;
    candidate2Badullapercentage=(candidate2Badulla*100)/totalvotes;
    candidate1Batticaloapercentage=(candidate1Batticaloa*100)/totalvotes;
    candidate2Batticaloapercentage=(candidate1Batticaloa*100)/totalvotes;
    candidate1Colombopercentage=(candidate1Colombo*100)/totalvotes;
    candidate1Colombopercentage=(candidate1Colombo*100)/totalvotes;
    candidate1Gallepercentage=(candidate1Galle*100)/totalvotes;
    candidate2Gallepercentage=(candidate2Galle*100)/totalvotes;
    candidate1Gampahapercentage=(candidate1Gampaha*100)/totalvotes;
    candidate2Gampahapercentage=(candidate2Gampaha*100)/totalvotes;
    candidate1Hambantotapercentage=(candidate1Gampaha*100)/totalvotes;
    candidate2Hambantotapercentage=(candidate2Gampaha*100)/totalvotes;
    candidate1Jaffnapercentage=(candidate1Jaffna*100)/totalvotes;
    candidate2Jaffnapercentage=(candidate2Jaffna*100)/totalvotes;
    candidate1Kalutarapercentage=(candidate1Kalutara*100)/totalvotes;
    candidate2Kalutarapercentage=(candidate2Kalutara*100)/totalvotes;
    candidate1Kandypercentage=(candidate1Kandy*100)/totalvotes;
    candidate2Kandypercentage=(candidate2Kandy*100)/totalvotes;
    candidate1Kegallepercentage=(candidate1Kegalle*100)/totalvotes;
    candidate2Kegallepercentage=(candidate2Kegalle*100)/totalvotes;
    candidate1Kilinochchipercentage=(candidate1Kilinochchi*100)/totalvotes;
    candidate2Kilinochchipercentage=(candidate2Kilinochchi*100)/totalvotes;
    candidate1Kurunegalapercentage=(candidate1Kurunegala*100)/totalvotes;
    candidate2Kurunegalapercentage=(candidate2Kurunegala*100)/totalvotes;
    candidate1Mannarpercentage=(candidate1Mannar*100)/totalvotes;
    candidate2Mannarpercentage=(candidate2Mannar*100)/totalvotes;
    candidate1Matalepercentage=(candidate1Matale*100)/totalvotes;
    candidate2Matalepercentage=(candidate2Matale*100)/totalvotes;
    candidate1Matarapercentage=(candidate1Matara*100)/totalvotes;
    candidate2Matarapercentage=(candidate2Matara*100)/totalvotes;
    candidate1Monaragalapercentage=(candidate1Monaragala*100)/totalvotes;
    candidate2Monaragalapercentage=(candidate2Monaragala*100)/totalvotes;
    candidate1Mullativupercentage=(candidate1Mullativu*100)/totalvotes;
    candidate2Mullativupercentage=(candidate2Mullativu*100)/totalvotes;
    candidate1NuwaraEliyapercentage=(candidate1NuwaraEliya*100)/totalvotes;
    candidate2NuwaraEliyapercentage=(candidate2NuwaraEliya*100)/totalvotes;
    candidate1Polonnaruwapercentage=(candidate1Polonnaruwa*100)/totalvotes;
    candidate2Polonnaruwapercentage=(candidate2Polonnaruwa*100)/totalvotes;
    candidate1Puttalampercentage=(candidate1Puttalam*100)/totalvotes;
    candidate2Puttalampercentage=(candidate2Puttalam*100)/totalvotes;
    candidate1Ratnapurapercentage=(candidate1Ratnapura*100)/totalvotes;
    candidate2Ratnapurapercentage=(candidate2Ratnapura*100)/totalvotes;
    candidate1Trincomaleepercentage=(candidate1Trincomalee*100)/totalvotes;
    candidate2Trincomaleepercentage=(candidate2Trincomalee*100)/totalvotes;
    candidate1Vavuniyapercentage=(candidate1Vavuniya*100)/totalvotes;
    candidate2Vavuniyapercentage=(candidate2Vavuniya*100)/totalvotes;

    resultsheet();
}


void resultsheet()
{
    FILE *ptr;
    ptr=fopen("election_result.txt","a");
    fprintf(ptr,"\n\t\t\t\t----------The Democratic Socialist Republic of Sri Lanka----------");
    fprintf(ptr,"\n\t\t\t\t\t\t-presidential election 2022-");
    fprintf(ptr,"\n\n\n");
    fprintf(ptr,"\t\t\t\t\t-ELECTION RESULTS-");
    fprintf(ptr,"\n\n\t\t\t\t%s\t\t\t\t%s",candidate1,candidate2);
    fprintf(ptr,"\n\t\t\t\t(%s)\t\t\t\t(%s)",party1,party2);
    fprintf(ptr,"\n\nAmpara\t\t\t\t%d\t\t\t\t%d",candidate1Ampara,candidate2Ampara);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Amparapercentage,candidate2Amparapercentage);

    fprintf(ptr,"\n\nAnuradhapura\t\t\t\t%d\t\t\t\t%d",candidate1Anuradhapura,candidate2Anuradhapura);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Anuradhapurapercentage,candidate2Amparapercentage);

    fprintf(ptr,"\n\nBadulla\t\t\t\t%d\t\t\t\t%d",candidate1Badulla,candidate2Badulla);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Badullapercentage,candidate2Badullapercentage);

    fprintf(ptr,"\n\nBatticaloa\t\t\t\t%d\t\t\t\t%d",candidate1Batticaloa,candidate2Batticaloa);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Batticaloapercentage,candidate2Batticaloapercentage);

    fprintf(ptr,"\n\nColombo\t\t\t\t%d\t\t\t\t%d",candidate1Colombo,candidate2Colombo);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Colombopercentage,candidate2Colombopercentage);

    fprintf(ptr,"\n\nGalle\t\t\t\t%d\t\t\t\t%d",candidate1Galle,candidate2Galle);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Gallepercentage,candidate2Gallepercentage);

    fprintf(ptr,"\n\nGampaha\t\t\t\t%d\t\t\t\t%d",candidate1Gampaha,candidate2Gampaha);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Gampahapercentage,candidate2Gampahapercentage);

    fprintf(ptr,"\n\nHambantota\t\t\t\t%d\t\t\t\t%d",candidate1Hambantota,candidate2Hambantota);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Hambantotapercentage,candidate2Hambantotapercentage);

    fprintf(ptr,"\n\nJaffna\t\t\t\t%d\t\t\t\t%d",candidate1Jaffna,candidate2Jaffna);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Jaffnapercentage,candidate2Jaffnapercentage);

    fprintf(ptr,"\n\nKalutara\t\t\t\t%d\t\t\t\t%d",candidate1Kalutara,candidate2Kalutara);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Kalutarapercentage,candidate2Kalutarapercentage);

    fprintf(ptr,"\n\nKandy\t\t\t\t%d\t\t\t\t%d",candidate1Kandy,candidate2Kandy);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Kandypercentage,candidate2Kandypercentage);

    fprintf(ptr,"\n\nKegalle\t\t\t\t%d\t\t\t\t%d",candidate1Kegalle,candidate2Kegalle);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Kegallepercentage,candidate2Kegallepercentage);

    fprintf(ptr,"\n\nKillinochchi\t\t\t\t%d\t\t\t\t%d",candidate1Kilinochchi,candidate2Kilinochchi);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Kilinochchipercentage,candidate2Kilinochchipercentage);

    fprintf(ptr,"\n\nKurunegala\t\t\t\t%d\t\t\t\t%d",candidate1Kurunegala,candidate2Kurunegala);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Kurunegalapercentage,candidate2Kurunegalapercentage);

    fprintf(ptr,"\n\nMannar\t\t\t\t%d\t\t\t\t%d",candidate1Mannar,candidate2Mannar);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Mannarpercentage,candidate2Mannarpercentage);

    fprintf(ptr,"\n\nMannar\t\t\t\t%d\t\t\t\t%d",candidate1Mannar,candidate2Mannar);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Mannarpercentage,candidate2Mannarpercentage);

    fprintf(ptr,"\n\nMatale\t\t\t\t%d\t\t\t\t%d",candidate1Matale,candidate2Matale);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Matalepercentage,candidate2Matalepercentage);

    fprintf(ptr,"\n\nMatara\t\t\t\t%d\t\t\t\t%d",candidate1Matara,candidate2Matara);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Matarapercentage,candidate2Matarapercentage);

    fprintf(ptr,"\n\nMonaragala\t\t\t\t%d\t\t\t\t%d",candidate1Monaragala,candidate2Monaragala);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Monaragalapercentage,candidate2Monaragalapercentage);

    fprintf(ptr,"\n\nMullativu\t\t\t\t%d\t\t\t\t%d",candidate1Mullativu,candidate2Mullativu);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Mullativupercentage,candidate2Mullativupercentage);

    fprintf(ptr,"\n\nPolonnaruwa\t\t\t\t%d\t\t\t\t%d",candidate1Polonnaruwa,candidate2Polonnaruwa);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Polonnaruwapercentage,candidate2Polonnaruwapercentage);

    fprintf(ptr,"\n\nPuttalam\t\t\t\t%d\t\t\t\t%d",candidate1Puttalam,candidate2Puttalam);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Puttalampercentage,candidate2Puttalampercentage);

    fprintf(ptr,"\n\nRatnapura\t\t\t\t%d\t\t\t\t%d",candidate1Ratnapura,candidate2Ratnapura);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Ratnapurapercentage,candidate2Ratnapurapercentage);

    fprintf(ptr,"\n\nTrincomalee\t\t\t\t%d\t\t\t\t%d",candidate1Trincomalee,candidate2Trincomalee);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Trincomaleepercentage,candidate2Trincomaleepercentage);

    fprintf(ptr,"\n\nVavuniya\t\t\t\t%d\t\t\t\t%d",candidate1Vavuniya,candidate2Vavuniya);
    fprintf(ptr,"\n\t\t\t\t(%0.2f)\t\t\t\t(%0.2f)",candidate1Vavuniyapercentage,candidate2Vavuniyapercentage);


    display();
}






void display()
{
    printf("CALCULATION IN PROGRESS");
    printf(".");
    printf(".");
    printf(".");
    printf(".");
    printf(".");
    system("cls");




    printf("\n\t\t\t\t----------The Democratic Socialist Republic of Sri Lanka----------");
    printf("\n\t\t\t\t\t\t-presidential election 2022-");
    printf("\n\n\n");
    printf("\t\t\t\t\t-RESULTS-\n\n\n");
    if (candidate1tot>candidate2tot)
    {
        printf("Mr.%s has won the Presidential Election - 2022 with %d votes",candidate1,candidate1tot);
    }
    else if (candidate1tot == candidate2tot)
    {
        printf("The votes have been tied...\nRe-election is required");
    }
    else
    {
        printf("Mr.%s has won the Presidential Election - 2022 with %d votes",candidate2,candidate2tot);
    }
}

