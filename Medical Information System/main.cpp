#include <iostream>
#include <string>
#include <vector>

// Patient Class
class Patient {
private:
    std::string name;
    int age;
    char gender;
    int patientID;
    std::string medicalHistory;

public:
    // Constructor
    Patient(std::string name, int age, char gender, int patientID, std::string medicalHistory)
        : name(name), age(age), gender(gender), patientID(patientID), medicalHistory(medicalHistory) {}

    // Getter functions
    std::string getName() const { return name; }
    int getAge() const { return age; }
    char getGender() const { return gender; }
    int getPatientID() const { return patientID; }
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

// MedicalRecord Class
class MedicalRecord {
private:
    std::vector<Patient> patients;

public:
    // Add a patient to the record
    void addPatient(const Patient& patient) {
        patients.push_back(patient);
    }

    // Remove a patient from the record based on patientID
    void removePatient(int patientID) {
        for (auto it = patients.begin(); it != patients.end(); ++it) {
            if (it->getPatientID() == patientID) {
                patients.erase(it);
                return;
            }
        }
        std::cout << "Patient with ID " << patientID << " not found.\n";
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

    // Display all patients' information
    void displayAllPatients() const {
        for (const auto& patient : patients) {
            patient.display();
            std::cout << "---------------------\n";
        }
    }
};

int main() {
    MedicalRecord record;

    // Adding patients
    record.addPatient(Patient("John Doe", 35, 'M', 1001, "No significant medical history."));
    record.addPatient(Patient("Jane Smith", 45, 'F', 1002, "Hypertension and allergies."));

    // Display all patients
    record.displayAllPatients();

    // Search for a patient by ID
    int patientID = 1001;
    Patient* foundPatient = record.searchPatient(patientID);
    if (foundPatient != nullptr) {
        std::cout << "Patient with ID " << patientID << " found:\n";
        foundPatient->display();
    } else {
        std::cout << "Patient with ID " << patientID << " not found.\n";
    }

    // Remove a patient
    int patientToRemove = 1002;
    record.removePatient(patientToRemove);

    return 0;
}