#include"../inc/cable.h"
#include<math.h>

float calculate_ampacity(float sys_voltage,int transformer_capacity)
{//ampacity or the prospective current decides if the current flowing though the cables are under the standards.
    float ampacity;
    ampacity = transformer_capacity*(sqrt(3)*sys_voltage);
    return ampacity;


}