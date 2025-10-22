#include<stdio.H>
void main()
{
    /*'\n换行*/
    printf("how are you ?\n");
    printf("I am fine.\n\n");
    /*横向跳格符\t',使光标跳到下一个输出区域*/
    printf("hou are you?\t");
    printf("I am fine.\n\n");
    /*退格符‘\b'*/
    printf("how are you?\n");
    printf("\bI am fine.\n\n");
    /*'\r'转义符是当前输出位置回到本行开头*/
    printf("            I am fine.");
    printf("\rHow are you?\n\n");
}//how are you ?                                                                                                           
 //I am fine.                                                                                                              
                                                                                                                        
//hou are you?    I am fine.                                                                                              
                                                                                                                        
//how are you?                                                                                                            
//I am fine.                                                                                                              
                                                                                                                        
//How are you?I am fine. 