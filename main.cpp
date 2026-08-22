#include <iostream>
#include <string>
#include <vector>

std::string me = "User";
std::vector<std::string> notes;
std::string currentTheme = "desolate@phone:~$ ";

void commands() {
    std::string command;
    std::cout << currentTheme;
    std::cin >> command;
    
    if (command == "OS") {
        std::cout << "Your OS: Desolate OS\nversion: 1.0.0\n";
    }
    
   else if (command == "Help") {
    std::cout << "Commands:\n";
    std::cout << "1. OS - Show OS info\n";
    std::cout << "2. Help - Show this list\n";
    std::cout << "3. Clear - Clear screen\n";
    std::cout << "4. Exit - Close program\n";
    std::cout << "5. Whoami - Current user\n";
    std::cout << "6. Calc+ - Addition\n";
    std::cout << "7. Calc- - Subtraction\n";
    std::cout << "8. Calc* - Multiplication\n";
    std::cout << "9. Calc/ - Division\n";
    std::cout << "10. Install - Install package\n";
    std::cout << "11. Browser - Open browser\n";
    std::cout << "12. SetUser - Change username\n";
    std::cout << "13. Ping - Check OS\n";
    std::cout << "14. Count - Count symbols\n";
    std::cout << "15. Apps - List installed\n";
    std::cout << "16. Internet - Check internet\n";
    std::cout << "17. Date - Current date\n";
    std::cout << "18. Ip - Show IP\n";
    std::cout << "19. Uninstall - Remove package\n";
    std::cout << "20. Search - Search package\n";
    std::cout << "21. Note - Notes manager\n";
    std::cout << "22. Neofetch - System info\n";
    std::cout << "23. Store - App store\n";
    std::cout << "24. Theme - Change console theme\n";
    std::cout << "25. Multi - Multiplication table\n";
    }
    
    else if (command == "Exit") {
        std::cout << "Bye Bye!" << std::endl;
        exit(0);
    }
    
    else if (command == "Clear") {
        for (int i = 0; i < 100; i++) {
            std::cout << std::endl;
        }
    }
    
    else if (command == "Whoami") {
        std::cout << me << "\n";
    }
    
    else if (command == "Calc+") {
        int num1, num2;
        std::cout << "Enter number 1: ";
        std::cin >> num1;
        std::cout << "Enter number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 + num2 << "\n";
    }
    
    else if (command == "Calc-") {
        int num1, num2;
        std::cout << "Enter number 1: ";
        std::cin >> num1;
        std::cout << "Enter number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 - num2 << "\n";
    }
    
    else if (command == "Calc*") {
        int num1, num2;
        std::cout << "Enter number 1: ";
        std::cin >> num1;
        std::cout << "Enter number 2: ";
        std::cin >> num2;
        std::cout << "Result: " << num1 * num2 << "\n";
    }
    
    else if (command == "Calc/") {
        int num1, num2;
        std::cout << "Enter number 1: ";
        std::cin >> num1;
        std::cout << "Enter number 2: ";
        std::cin >> num2;
        long int result = num1 / num2;
        std::cout << "Result: " << result << "\n";
    }
    
    else if (command == "Install") {
        std::string package;
        std::cout << "Enter app for install: ";
        std::cin >> package;
        system(("pkg install " + package + " -y").c_str());
        std::cout << "Done!\n";
    }
    
    else if (command == "Browser") {
        system("termux-open https://google.com");
    }
    
    else if (command == "SetUser") {
        std::cout << "Enter user name: ";
        std::cin >> me;
        std::cout << "Name changed to: " << me << "\n";
    }
    
    else if (command == "Ping") {
        std::cout << "Pong! Os alive\n";
    }
    
    else if (command == "Count") {
        std::string word;
        std::cout << "Enter your word: ";
        std::cin >> word;
        std::cout << "In your word: " << word.length() << " symbols!\n";
    }
    
    else if (command == "Apps") {
        system("pkg list-installed");
    }
    
    else if (command == "Internet") {
        system("ping -c 3 google.com");
    }
    
    else if (command == "Date") {
        system("date");
    }
    
    else if (command == "Ip") {
        system("curl ifconfig.me");
    }
    
    else if (command == "Uninstall") {
        std::string app;
        std::cout << "What to delete: ";
        std::cin >> app;
        system(("pkg uninstall " + app + " -y").c_str());
        std::cout << "Removed!\n";
    }
    
    else if (command == "Search") {
        std::string packet;
        std::cout << "Search: ";
        std::cin >> packet;
        system(("pkg search " + packet + " -y").c_str());
    }
    
    else if (command == "Note") {
        int choice;
        std::cout << "1. Create note\n";
        std::cout << "2. Delete note\n";
        std::cout << "3. Show notes\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();
        
        if (choice == 1) {
            std::string note;
            std::cout << "Write: ";
            std::getline(std::cin, note);
            notes.push_back(note);
            std::cout << "Note saved!\n";
        }
        else if (choice == 2) {
            int num;
            std::cout << "Enter note number: ";
            std::cin >> num;
            if(num > 0 && num <= notes.size()) {
                notes.erase(notes.begin() + num - 1);
                std::cout << "Note deleted!\n";
            }
        }
        else if (choice == 3) {
            if(notes.empty()) {
                std::cout << "No notes!\n";
            } else {
                std::cout << "Your notes:\n";
                for(int i = 0; i < notes.size(); i++) {
                    std::cout << i+1 << ". " << notes[i] << "\n";
                }
            }
        }
    }
    
    else if (command == "Neofetch") {
    std::cout << "\n";
    std::cout << "    ╔════════════════════════════╗\n";
    std::cout << "    ║   ██████╗███████╗         ║\n";
    std::cout << "    ║   ██╔══██╗██╔════╝        ║\n";
    std::cout << "    ║   ██║  ██║█████╗          ║\n";
    std::cout << "    ║   ██║  ██║██╔══╝          ║\n";
    std::cout << "    ║   ██████╔╝███████╗        ║\n";
    std::cout << "    ║   ╚═════╝ ╚══════╝        ║\n";
    std::cout << "    ╚════════════════════════════╝\n";
    std::cout << "\n";
    std::cout << "    ─────────────────────────────\n";
    std::cout << "    OS:      Desolate OS 1.0.0\n";
    std::cout << "    Programming language: C++\n";
    std::cout << "    User:    " << me << "\n";
    std::cout << "    Programmer: @desolateos\n";
    std::cout << "    ─────────────────────────────\n";
}
    
    else if (command == "Store") {
        int choice;
        std::cout << "1. Nmap\n";
        std::cout << "2. Hydra\n";
        std::cout << "3. Gobuster\n";
        std::cout << "4. Dirb\n";
        std::cout << "5. Hashcat\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter selection number: ";
        std::cin >> choice;
        
        if (choice == 1) {
            system("pkg install nmap -y");
        }
        else if (choice == 2) {
            system("pkg install hydra -y");
        }
        else if (choice == 3) {
            system("pkg install gobuster -y");
        }
        else if (choice == 4) {
            system("pkg install dirb -y");
        }
        else if (choice == 5) {
            system("pkg install hashcat -y");
        }
        else if (choice == 6) {
            std::cout << "Bye bye!";
        }
        else {
            std::cout << "Unknown command";
        }
    }
    
    else if (command == "Theme") {
        int choice;
        
        std::cout << "Kali linux\n";
        std::cout << "Arch linux\n";
        std::cout << "Retro Dos\n";
        std::cout << "Mint\n";
        std::cout << "Minimalist\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        
        if (choice == 1) {
        currentTheme = "┌──(desolate㉿phone)-$";
        }
        
        else if (choice == 2) {
        currentTheme = "[desolate@phone ~]$";
        }
        
        else if (choice == 3) {
        currentTheme = "C:\>";
        }
        
        else if (choice == 4) {
        currentTheme = "desolate@mint:~$";
        }

        else if (choice == 5) {
        currentTheme = ">";
        }
        
        else {
        std::cout << "Unknown choice";}
    }
    
    else if (command == "Multi") {
        int num;
        
        std::cout << "Enter number: ";
        std::cin >> num;
        
        for (int i = 0; i <= 10; i++) {
        std::cout << i << " * " << num << " = " << num * i << "\n";
        }
    }
    
    else if (command == "Use") {
        std::string pack;
        std::cout << "\nAvailable apps:\n";
        std::cout << "\nnmap\nwhois\ncurl\nnslookup\ndig\n";
        std::cout << "\nEnter app name: \n";
        std::cin >> pack;
        
        if (pack == "nmap") {
            std::string domain;
            std::cout << "Enter site domain: ";
            std::cin >> domain;
            
            system(("nmap -sC -sV -A -p- " + domain).c_str());
        }
        
        else if (pack == "whois") {
            std::string domain;
            std::cout << "Enter site: ";
            std::cin >> domain;
            
            system(("whois " + domain).c_str());
        }
        
        else if (pack == "curl") {
            std::string domain;
            std::cout << "Enter site: ";
            std::cin >> domain;
            
            system(("curl " + domain).c_str());
        }
        
        else if (pack == "nslookup") {
            std::string domain;
            std::cout << "Enter site: ";
            std::cin >> domain;
            
            system(("nslookup " + domain).c_str());
        }
        
        else if (pack == "dig") {
            std::string domain;
            std::cout << "Enter site: ";
            std::cin >> domain;
            
            system(("dig " + domain).c_str());
        }
        
        else {
            std::cout << "Package: " << pack << "not found!" << "\n";
        }
    }
    
    else if (command == "Check") {
        std::string pack;
        std::cout << "Enter package for check: ";
        std::cin >> pack;
        
        system(("pkg list-installed | grep " + pack).c_str());
    }
    
    else {
        std::cout << "Unknown command!\n";
    }
}

int main() {
    std::cout << "\n";
    std::cout << "  ╔════════════════════════════╗\n";
    std::cout << "     DeOs v1.0.0\n";
    std::cout << "     Type Help for commands\n";
    std::cout << "  ╚════════════════════════════╝\n";
    std::cout << "\n";
    while (true) {
        commands();
    }
}
