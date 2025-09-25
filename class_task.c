#include <stdio.h>

int main() {
    int deviceType, symptomCode;

    
    printf("Select Device Type:\n");
    printf("1 - Laptop\n");
    printf("2 - Smartphone\n");
    printf("3 - Router\n");
    printf("Enter device code: ");
    scanf("%d", &deviceType);

    switch (deviceType) {
        case 1: 
            printf("\nLaptop Issue Codes:\n");
            printf("10 - Won't turn on\n");
            printf("11 - Overheating\n");
            printf("12 - Slow performance\n");
            printf("Enter symptom code: ");
            scanf("%d", &symptomCode);

            switch (symptomCode) {
                case 10:
                    printf("\nAdvice:\n");
                    printf("Check power adapter and battery connections.\n");
                    printf("Try a different power outlet.\n");
                    printf("Remove battery and hold power button for 30 seconds.\n");
                    break;
                case 11:
                    printf("\nAdvice:\n");
                    printf("Clean fans and ensure proper ventilation.\n");
                    printf("Check for dust accumulation.\n");
                    printf("Use a cooling pad. Monitor CPU usage.\n");
                    break;
                case 12:
                    printf("\nAdvice:\n");
                    printf("Run system diagnostics and check resource usage.\n");
                    printf("Scan for malware. Upgrade RAM if necessary.\n");
                    printf("Defragment hard drive.\n");
                    break;
                default:
                    printf("Invalid symptom code for Laptop.\n");
            }
            break;

        case 2: 
            printf("\nSmartphone Issue Codes:\n");
            printf("20 - Battery drains fast\n");
            printf("21 - No signal\n");
            printf("22 - Touchscreen unresponsive\n");
            printf("Enter symptom code: ");
            scanf("%d", &symptomCode);

            switch (symptomCode) {
                case 20:
                    printf("\nAdvice:\n");
                    printf("Run battery calibration tool and check for background apps.\n");
                    printf("Reduce screen brightness.\n");
                    printf("Disable unnecessary connectivity features.\n");
                    break;
                case 21:
                    printf("\nAdvice:\n");
                    printf("Check SIM card and network settings.\n");
                    printf("Toggle airplane mode.\n");
                    printf("Update carrier settings. Check for network outages.\n");
                    break;
                case 22:
                    printf("\nAdvice:\n");
                    printf("Perform screen calibration test. Clean screen surface.\n");
                    printf("Restart device. Check for software updates.\n");
                    break;
                default:
                    printf("Invalid symptom code for Smartphone.\n");
            }
            break;

        case 3: 
            printf("\nRouter Issue Codes:\n");
            printf("30 - No internet connection\n");
            printf("31 - Wi-Fi signal weak\n");
            printf("32 - Device can't connect\n");
            printf("Enter symptom code: ");
            scanf("%d", &symptomCode);

            switch (symptomCode) {
                case 30:
                    printf("\nAdvice:\n");
                    printf("Check ISP status and router cables.\n");
                    printf("Restart modem and router.\n");
                    printf("Check WAN connection settings.\n");
                    printf("Verify internet subscription.\n");
                    break;
                case 31:
                    printf("\nAdvice:\n");
                    printf("Reposition router and check antenna connections.\n");
                    printf("Reduce interference from other devices.\n");
                    printf("Change Wi-Fi channel. Consider range extender.\n");
                    break;
                case 32:
                    printf("\nAdvice:\n");
                    printf("Check MAC filtering and DHCP settings.\n");
                    printf("Verify Wi-Fi password.\n");
                    printf("Restart connecting device. Check for IP conflicts.\n");
                    break;
                default:
                    printf("Invalid symptom code for Router.\n");
            }
            break;

        default:
            printf("Invalid device type.\n");
    }

    return 0;
}
