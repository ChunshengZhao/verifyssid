#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "verifyssid.h"

void main()
{
    //SSID:
    //333630e8a18ce8bda6e8aeb0e5bd95e4bbaa2d31313232
    char utf8_ssid[33] =
    {0x33,0x36,0x30,0xe8,0xa1,0x8c,0xe8,0xbd,0xa6,0xe8,0xae,0xb0,0xe5,0xbd,0x95,0xe4,0xbb,0xaa,0x2d,0x31,0x31,0x32,0x32};
    char utf8_ssid_abnormal[33] =
    {0x33,0x36,0x30,0xe8,0xa1,0x0c,0xe8,0xbd,0xa6,0xe8,0xae,0xb0,0xe5,0xbd,0x95,0xe4,0xbb,0xaa,0x2d,0x31,0x31,0x32,0x32};
    char ssid_abnormal[33] =
    {0x19,0x36,0x30,0xe8,0xa1,0x8c,0xe8,0xbd,0xa6,0xe8,0xae,0xb0,0xe5,0xbd,0x95,0xe4,0xbb,0xaa,0x2d,0x31,0x31,0x32,0x32};

    printf("\n");
    printf("         utf8_ssid:%s\n","0x333630e8a18ce8bda6e8aeb0e5bd95e4bbaa2d31313232");
    printf("utf8_ssid_abnormal:%s\n","0x333630e8a10ce8bda6e8aeb0e5bd95e4bbaa2d31313232");
    printf("     ssid_abnormal:%s\n","0x193630e8a18ce8bda6e8aeb0e5bd95e4bbaa2d31313232");

    printf("\nVerifying...\n\n");

    if(verifyssid(utf8_ssid))
        printf("Normal(utf8_ssid):\n%s\n\n",utf8_ssid);
    else
        printf("Abnormal(utf8_ssid)!\n\n");

    if(verifyssid(utf8_ssid_abnormal))
        printf("Normal(utf8_ssid_abnormal):\n%s\n\n",utf8_ssid_abnormal);
    else
        printf("Abnormal(utf8_ssid_abnormal)!\n\n");

    if(verifyssid(ssid_abnormal))
        printf("Normal(ssid_abnormal):\n%s\n\n",ssid_abnormal);
    else
        printf("Abnormal(ssid_abnormal)!\n\n");

}
