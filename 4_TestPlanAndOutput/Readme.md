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
| L_1 |Finding Equivalent Impedance in Series RLC Circuit | User input->Value of R,L,C,w |- | - | - | 
| L_2 |Finding Power Factor in Series RLC Circuit |User input->Value of R,L,C,w | - |- | -  |
| L_3 |Star Delta Conversion |User input->Corresponding values of R,L,C | - | - | - |
| L_4 |Source Transformation |User input-> Values of Resistance and sources | - | - | - |
| L_9 |Ampacity calculation |User input-> Values system voltage=0.415 and transformer rating=200 |143.760208  | - | Technical |
| L_9 |Ampacity calculation |User input-> Values system voltage=2 and transformer rating=13 | 450.033321| - | Technical |
| L_10 |Voltage drop  calculation |User input-> Ampacity=143.7,systemvoltage=0.415,pf=0.8,Length=100,resistance=1.035,reactance=5.233|23796  | - | Technical |
| L_10 |Voltage drop  calculation |User input-> Ampacity=120,systemvoltage=1,pf=1,Length=25,resistance=13,reactance=0.03|6754  | - | Technical |
| L_11 |Derating temperature calculation |User input-> Values site temperature=12|1.120000  | - | Technical |
| L_11 |Derating temperature calculation |User input-> Values site temperature=20|1.040000  | - | Technical |
| L_11 |Derating temperature calculation |User input-> Values site temperature=27|0.960000  | - | Technical|
| L_11 |Derating temperature calculation |User input-> Values site temperature=37|0.910000  | - | Technical |
| L_11 |Derating temperature calculation |User input-> Values site temperature=47|0.820000  | - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=15 | 0.990000 | - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=120 | 0.980000| - | Technical|
| L_11 |derating depth calculation |User input-> Values site_depth=99 and rating=470 | 0.970000 | - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=15 | 0.980000| - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=120 | 0.970000 | - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=108 and rating=470 | 0.960000 | - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=190 and rating=15 | 0.950000| - | Technical |
| L_11 |derating depth calculation |User input-> Values site_depth=190 and rating=120 | 0.930000 | - | Technical|
| L_11|derating depth calculation |User input-> Values site_depth=190 and rating=470 | 0.910000 | - | Technical |
| L_08 |Finding Equivalent Resistance in Series RLC Circuit | User input->Value of R |- | - | - |
| L_08 |Finding Equivalent Capacitance in Series RLC Circuit | User input->Value of C |- | - | - |
| L_08 |Finding Equivalent Inductance in Series RLC Circuit | User input->Value of L |- | - | - |
| L_07 |Finding Equivalent Inductance in Parallel RLC Circuit | User input->Value of L |- | - | - |
| L_07 |Finding Equivalent Capacitance in Parallel RLC Circuit | User input->Value of C |- | - | - |
| L_07 |Finding Equivalent Resistance in Parallel RLC Circuit | User input->Value of R |- | - | - |
| L_06 |Finding Voltage from Voltage Division Circuit | User input->Value of Vin,R1,R2 |- | - | - |
| L_05 |Finding Current from Current Division Circuit | User input->Value of R1,R2,Iin |- | - | - |
