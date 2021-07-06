# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |          
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|      
| H_1 | Basic circuit solver. | - | - | - | Technical | 
| H_2 | Cable Capacities. | - | - | - | Technical | 
| H_3 | Circuit Calculator | - | - | - | Technical | 
| H_4 | Circular Convolution | - | - | - | Technical |



## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
| L_1 |Finding Equivalent Impedance in Series RLC Circuit | User input->Value of R,L,C,w |- | Success | Requirement |
| L_2 |Finding Power Factor in Series RLC Circuit |User input->Value of R,L,C,w | - |Success |Requirement |
| L_3 |Star Delta Conversion |User input->Corresponding values of R,L,C | - | Success | Requirement |
| L_4 |Source Transformation |User input-> Values of Resistance and sources | - | Success |Requirement |
| L_9 |Ampacity calculation |User input-> Values system voltage=0.415 and transformer rating=200 |143.760208  | Success | Requirement |
| L_9 |Ampacity calculation |User input-> Values system voltage=2 and transformer rating=13 | 450.033321| Success |Requirement |
| L_10 |Voltage drop  calculation |User input-> Ampacity=143.7,systemvoltage=0.415,pf=0.8,Length=100,resistance=1.035,reactance=5.233|23796  | Success | Requirement |
| L_10 |Voltage drop  calculation |User input-> Ampacity=120,systemvoltage=1,pf=1,Length=25,resistance=13,reactance=0.03|6754  | Success | Requirement |
| L_11 |Derating temperature calculation |User input-> Values site temperature=12|1.120000  | Success | Requirement |
| L_11 |Derating temperature calculation |User input-> Values site temperature=20|1.040000  | Success | Requirement|
| L_11 |Derating temperature calculation |User input-> Values site temperature=27|0.960000  | Success |Requirement|
| L_11 |Derating temperature calculation |User input-> Values site temperature=37|0.910000  | Success| Requirement|
| L_11 |Derating temperature calculation |User input-> Values site temperature=47|0.820000  | Success | Requirement|
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=15 | 0.990000 | Success | Requirement |
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=120 | 0.980000| Success | Requirement|
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=470 | 0.970000 | Success | Requirement|
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=15 | 0.980000| Success | Requirement|
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=120 | 0.970000 | Success | Requirement |
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=470 | 0.960000 | Success | Requirement|
| L_11 |derating depth calculation |User input-> Values site_depth=190 and rating=15 | 0.950000| Success | Requirement |
| L_11 |derating depth calculation |User input-> Values site_depth=190 and rating=120 | 0.930000 |Success| Requirement|
| L_11|derating depth calculation |User input-> Values site_depth=190 and rating=470 | 0.910000 | Success | Requirement|
| L_08 |Finding Equivalent Resistance in Series RLC Circuit | User input-> Values R1,R2,R3=10,10,10 | 30.000000 | Success | Requirement |
| L_08 |Finding Equivalent Capacitance in Series RLC Circuit | User input->Values C1,C2,C3=10,10,10 | 3.333333 | Success | Requirement |
| L_08 |Finding Equivalent Inductance in Series RLC Circuit | User input->Values L1,L2,L3=10,10,10 | 30.000000 | Success | Requirement |
| L_07 |Finding Equivalent Inductance in Parallel RLC Circuit | User input-> Values L1,L2,L3=10,10,10 | 3.000000 | Success | Requirement |
| L_07 |Finding Equivalent Capacitance in Parallel RLC Circuit | User input-> Values C1,C2,C3=10,10,10 | 30.333333 | Success | Requirement |
| L_07 |Finding Equivalent Resistance in Parallel RLC Circuit | User input-> Values R1,R2,R3=10,10,10 | 3.333333 | Success | Requirement |
| L_06 |Finding Voltage from Voltage Division Circuit | User input->Value of Vin=10,R1=20,R2=30 | 4.000000 | Success | Requirement |
| L_05 |Finding Current from Current Division Circuit | User input->Value of R1=30,R2=40,Iin=20 |I1=11.428571,I2=8.571429 |Success | Requirement |
| L_11|Resistor color coding |User input-> Band1 - green ,Band2 - Black ,Band3 - yellow | 500k ohms | Success | Requirement|

