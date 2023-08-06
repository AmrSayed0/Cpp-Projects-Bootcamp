# Medical Information System

The Medical Information System is a basic C++ program that allows users to manage patient records and their basic medical information. It provides functionalities to add patients, remove patients, search for patients, and display patient information.

## Features

- Add a patient: Users can add a new patient to the system by providing their name, age, gender, ID, and medical history.
- Remove a patient: Users can remove a patient from the system by providing the patient's ID.
- Search for a patient: Users can search for a specific patient by their ID and view their details.
- Display all patients: Users can view a list of all patients and their information.

## Getting Started

To run the Medical Information System, you need a C++ compiler that supports C++11 or later. Follow the steps below to get started:

1. Clone the repository or download the source code from [GitHub](https://github.com/AmrSayed0/medical-information-system).

2. Compile the C++ source code using a C++ compiler:

   ```bash
   g++ medical_information_system.cpp -o medical_information_system
   ```

3. Run the compiled executable:

   ```bash
   ./medical_information_system
   ```

## Usage

Upon running the program, you will be presented with a simple console-based user interface for managing patient records. The following actions can be performed:

1. **Add a patient**: To add a patient, you need to provide their name, age, gender, ID, and medical history.

2. **Remove a patient**: To remove a patient from the system, you need to enter their ID.

3. **Search for a patient**: To search for a specific patient, you need to provide their ID. If the patient exists, their details will be displayed.

4. **Display all patients**: This option displays a list of all patients and their information.

## Sample Usage

```
Welcome to the Medical Information System!

Menu:
1. Add a patient
2. Remove a patient
3. Search for a patient
4. Display all patients
5. Exit

Enter your choice: 1

Enter patient details:
Name: John Doe
Age: 35
Gender: M
Patient ID: 1001
Medical History: No significant medical history.

Patient added successfully!

Menu:
1. Add a patient
2. Remove a patient
3. Search for a patient
4. Display all patients
5. Exit

Enter your choice: 3

Enter the patient ID to search: 1001

Patient with ID 1001 found:
Patient ID: 1001
Name: John Doe
Age: 35
Gender: M
Medical History: No significant medical history.

Menu:
1. Add a patient
2. Remove a patient
3. Search for a patient
4. Display all patients
5. Exit

Enter your choice: 4

Patient ID: 1001
Name: John Doe
Age: 35
Gender: M
Medical History: No significant medical history.
---------------------

Menu:
1. Add a patient
2. Remove a patient
3. Search for a patient
4. Display all patients
5. Exit

Enter your choice: 2

Enter the patient ID to remove: 1001

Patient with ID 1001 removed successfully!

Menu:
1. Add a patient
2. Remove a patient
3. Search for a patient
4. Display all patients
5. Exit

Enter your choice: 5

Exiting the Medical Information System. Goodbye!
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contribution

Contributions to the Medical Information System project are welcome! If you find any bugs or have suggestions for improvements, please feel free to open an issue or create a pull request.

## Author

- GitHub: [Amr Sayed](https://github.com/AmrSayed0)
