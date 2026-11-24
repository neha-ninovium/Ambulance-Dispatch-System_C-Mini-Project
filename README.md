# Ambulance-Dispatch-System_C-Mini-Project
Menu-driven C application that registers emergency incidents, ranks them by severity, selects the nearest suitable ambulance, dispatches and releases units, and analyses incident traffic to provide a total summary.

Variable names and their purpose
choice: Severity level (1 to 3) 
sev: enum value of severity

MODIFICATIONS to proposition:
- changed Set_severity(int choice, Severity *sev) to Set_severity(char choice[], Severity *sev) so that the user can 
input words (Minor, Serious, Critical)