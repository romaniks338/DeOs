# DeOs

DeOs is a console-based operating system simulation written in C++ for Termux on Android.

---

## Commands

| Command | Description |
|---------|-------------|
| `OS` | Show OS info |
| `Help` | Show all commands |
| `Clear` | Clear screen |
| `Exit` | Close program |
| `Whoami` | Show current user |
| `SetUser` | Change username |
| `Calc+` | Addition |
| `Calc-` | Subtraction |
| `Calc*` | Multiplication |
| `Calc/` | Division |
| `Multi` | Multiplication table |
| `Count` | Count symbols in word |
| `Ping` | Check OS status |
| `Date` | Show current date |
| `Ip` | Show external IP |
| `Neofetch` | System info |
| `Theme` | Change console theme |
| `Install` | Install package |
| `Uninstall` | Remove package |
| `Search` | Search package |
| `Apps` | List installed packages |
| `Store` | App store |
| `Check` | Check if package is installed |
| `Note` | Manage notes |
| `Browser` | Open browser |
| `Internet` | Check internet |
| `Use` | Run tools (nmap, whois, curl, nslookup, dig) |

---

## Installation

```bash
git clone https://github.com/romaniks338/DeOs.git
cd DeOs
g++ main.cpp -o deos
./deos
