#include"../inc/cable.h"
#include<math.h>
#include <stdio.h>

//the derating factors is according to IEC standards which seperates the standards and the site conditions.
float calculate_derating_depth(float site_depth,float rating_factor)
{
    float derating_depth_value;

    if(site_depth>=90&&site_depth<105)
    {
        if(rating_factor<=25)
        derating_depth_value=0.99;
        else if(rating_factor>25&&rating_factor<=300)
        derating_depth_value=0.98;
        else if (rating_factor>300)
        derating_depth_value=0.97;
    }
    else if(site_depth>=105&&site_depth<180)
    {
        if(rating_factor<=25)
        derating_depth_value=0.98;
        else if(rating_factor>25&&rating_factor<=300)
        derating_depth_value=0.97;
        else if (rating_factor>300)
        derating_depth_value=0.96;
    }
    else if(site_depth>=180)
    {
        if(rating_factor<=25)
        derating_depth_value=0.95;
        else if(rating_factor>25&&rating_factor<=300)
        derating_depth_value=0.93;
        else if (rating_factor>300)
        derating_depth_value=0.91;
    }
    else
    {
      printf("You have not entered a proper site depth or rating factor");
    }

    
return derating_depth_value;
}



float calculate_derating_temp(float site_temerature)
{
    float derating_temeprature_value;

    if(site_temerature<=15)
    {derating_temeprature_value=1.12;}
    else if(site_temerature>15&&site_temerature<=25)
     {derating_temeprature_value=1.04;}
    else if(site_temerature>25&&site_temerature<=35)
     {derating_temeprature_value=0.96;}
     else if(site_temerature>35&&site_temerature<=40)
     {derating_temeprature_value=0.91;}
     else if(site_temerature>40&&site_temerature<=50)
     {derating_temeprature_value=0.82;}
     else
    {
      printf("You have not entered a proper site temperature");
    }
     return derating_temeprature_value;
}
