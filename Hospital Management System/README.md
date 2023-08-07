# Hospital Management System

The Hospital Management System is a simplified C++ program that allows users to manage patient records and doctor information. It provides functionalities to add patients, add doctors, remove patients, remove doctors, search for patients, search for doctors, display all patients, and display all doctors.

## Getting Started

To run the Hospital Management System, you need a C++ compiler that supports C++11 or later. Follow the steps below to get started:

1. Clone the repository or download the source code from [GitHub](https://github.com/AmrSayed0/hospital-management-system).

2. Compile the C++ source code using a C++ compiler:

   ```bash
   g++ hospital_management_system.cpp -o hospital_management_system
   ```

3. Run the compiled executable:

   ```bash
   ./hospital_management_system
   ```

## Usage

Upon running the program, you will be presented with a simple console-based user interface for managing patient records and doctor information. The following actions can be performed:

1. **Add a patient**: To add a patient, you need to provide their Patient ID, Name, Age, Gender, and Medical History.

2. **Add a doctor**: To add a doctor, you need to provide their Doctor ID, Name, and Department.

3. **Remove a patient**: To remove a patient from the system, you need to enter their Patient ID.

4. **Remove a doctor**: To remove a doctor from the system, you need to enter their Doctor ID.

5. **Search for a patient**: To search for a specific patient, you need to provide their Patient ID. If the patient exists, their details will be displayed.

6. **Search for a doctor**: To search for a specific doctor, you need to provide their Doctor ID. If the doctor exists, their details will be displayed.

7. **Display all patients**: This option displays a list of all patients and their information.

8. **Display all doctors**: This option displays a list of all doctors and their information.

## Sample Usage

```
Hospital Management System

Patients:
---------------------
Patient ID: 1001
Name: John Doe
Age: 35
Gender: M
Medical History: No significant medical history.
---------------------
Patient ID: 1002
Name: Jane Smith
Age: 45
Gender: F
Medical History: Hypertension and allergies.
---------------------

Doctors:
---------------------
Doctor ID: 2001
Name: Dr. James Brown
Department: Cardiology
---------------------
Doctor ID: 2002
Name: Dr. Lisa Johnson
Department: Pediatrics
---------------------

Enter the patient ID to search: 1001
Patient with ID 1001 found:
Patient ID: 1001
Name: John Doe
Age: 35
Gender: M
Medical History: No significant medical history.

Enter the patient ID to remove: 1002
Patient with ID 1002 removed successfully!

Enter the doctor ID to search: 2002
Doctor with ID 2002 found:
Doctor ID: 2002
Name: Dr. Lisa Johnson
Department: Pediatrics
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contribution

Contributions to the Hospital Management System project are welcome! If you find any bugs or have suggestions for improvements, please feel free to open an issue or create a pull request.

## Author

- GitHub: [AmrSayed](https://github.com/AmrSayed0)

Enjoy managing the hospital records with the Hospital Management System!
