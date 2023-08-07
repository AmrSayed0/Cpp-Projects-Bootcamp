#include <iostream>
#include <string>
#include <vector>

class User {
private:
    std::string username;
    std::string password;

public:
    // Constructor
    User(std::string username, std::string password)
        : username(username), password(password) {}

    // Getter functions
    std::string getUsername() const { return username; }
    std::string getPassword() const { return password; }

    // Setter functions
    void setPassword(std::string newPassword) { password = newPassword; }
};

class UserManagement {
private:
    std::vector<User> users;

public:
    // Register a new user
    void registerUser(const User& user) {
        users.push_back(user);
    }

    // Check user credentials for login
    bool login(std::string username, std::string password) {
        for (const auto& user : users) {
            if (user.getUsername() == username && user.getPassword() == password) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    UserManagement userManagement;

    // Register users
    userManagement.registerUser(User("user1", "password1"));
    userManagement.registerUser(User("user2", "password2"));

    // Login
    std::string username, password;
    std::cout << "Enter your username: ";
    std::cin >> username;
    std::cout << "Enter your password: ";
    std::cin >> password;

    if (userManagement.login(username, password)) {
        std::cout << "Login successful!\n";
    } else {
        std::cout << "Invalid username or password. Login failed.\n";
    }

    return 0;
}
