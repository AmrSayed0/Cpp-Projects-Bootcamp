#include <iostream>
#include <string>
#include <vector>

// Patient Class
class Patient {
private:
    int patientID;
    std::string name;
    int age;
    char gender;
    std::string medicalHistory;

public:
    // Constructor
    Patient(int patientID, std::string name, int age, char gender, std::string medicalHistory)
        : patientID(patientID), name(name), age(age), gender(gender), medicalHistory(medicalHistory) {}

    // Getter functions
    int getPatientID() const { return patientID; }
    std::string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }
    std::string getMedicalHistory() const { return medicalHistory; }

    // Setter functions
    void setMedicalHistory(std::string history) { medicalHistory = history; }

    // Display patient information
    void display() const {
        std::cout << "Patient ID: " << patientID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Gender: " << gender << "\n";
        std::cout << "Medical History: " << medicalHistory << "\n";
    }
};

// Doctor Class
class Doctor {
private:
    int doctorID;
    std::string name;
    std::string department;

public:
    // Constructor
    Doctor(int doctorID, std::string name, std::string department)
        : doctorID(doctorID), name(name), department(department) {}

    // Getter functions
    int getDoctorID() const { return doctorID; }
    std::string getName() const { return name; }
    std::string getDepartment() const { return department; }

    // Display doctor information
    void display() const {
        std::cout << "Doctor ID: " << doctorID << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Department: " << department << "\n";
    }
};

// Hospital Class
class Hospital {
private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;

public:
    // Add a patient to the hospital
    void addPatient(const Patient& patient) {
        patients.push_back(patient);
    }

    // Add a doctor to the hospital
    void addDoctor(const Doctor& doctor) {
        doctors.push_back(doctor);
    }

    // Remove a patient from the hospital based on patientID
    void removePatient(int patientID) {
        for (auto it = patients.begin(); it != patients.end(); ++it) {
            if (it->getPatientID() == patientID) {
                patients.erase(it);
                return;
            }
        }
        std::cout << "Patient with ID " << patientID << " not found.\n";
    }

    // Remove a doctor from the hospital based on doctorID
    void removeDoctor(int doctorID) {
        for (auto it = doctors.begin(); it != doctors.end(); ++it) {
            if (it->getDoctorID() == doctorID) {
                doctors.erase(it);
                return;
            }
        }
        std::cout << "Doctor with ID " << doctorID << " not found.\n";
    }

    // Search for a patient based on patientID
    Patient* searchPatient(int patientID) {
        for (auto& patient : patients) {
            if (patient.getPatientID() == patientID) {
                return &patient;
            }
        }
        return nullptr;
    }

    // Search for a doctor based on doctorID
    Doctor* searchDoctor(int doctorID) {
        for (auto& doctor : doctors) {
            if (doctor.getDoctorID() == doctorID) {
                return &doctor;
            }
        }
        return nullptr;
    }

    // Display all patients' information
    void displayAllPatients() const {
        for (const auto& patient : patients) {
            patient.display();
            std::cout << "---------------------\n";
        }
    }

    // Display all doctors' information
    void displayAllDoctors() const {
        for (const auto& doctor : doctors) {
            doctor.display();
            std::cout << "---------------------\n";
        }
    }
};

int main() {
    Hospital hospital;

    // Adding patients
    hospital.addPatient(Patient(1001, "John Doe", 35, 'M', "No significant medical history."));
    hospital.addPatient(Patient(1002, "Jane Smith", 45, 'F', "Hypertension and allergies."));

    // Adding doctors
    hospital.addDoctor(Doctor(2001, "Dr. James Brown", "Cardiology"));
    hospital.addDoctor(Doctor(2002, "Dr. Lisa Johnson", "Pediatrics"));

    // Display all patients
    std::cout << "Patients:\n";
    hospital.displayAllPatients();

    // Display all doctors
    std::cout << "Doctors:\n";
    hospital.displayAllDoctors();

    // Search for a patient by ID
    int patientID = 1001;
    Patient* foundPatient = hospital.searchPatient(patientID);
    if (foundPatient != nullptr) {
        std::cout << "Patient with ID " << patientID << " found:\n";
        foundPatient->display();
    } else {
        std::cout << "Patient with ID " << patientID << " not found.\n";
    }

    // Remove a patient
    int patientToRemove = 1002;
    hospital.removePatient(patientToRemove);

    // Search for a doctor by ID
    int doctorID = 2001;
    Doctor* foundDoctor = hospital.searchDoctor(doctorID);
    if (foundDoctor != nullptr) {
        std::cout << "Doctor with ID " << doctorID << " found:\n";
        foundDoctor->display();
    } else {
        std::cout << "Doctor with ID " << doctorID << " not found.\n";
    }

    return 0;
}
