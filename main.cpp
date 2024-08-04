#include <iostream>
using namespace std;

int main() {
  int playerHealth;
  int enemyHealth;

  // Task 1
  cout << "Task 1" << endl;
  cout << "Player's Health: ";
  cin >> playerHealth;
  cout << "Enemy's Health: ";
  cin >> enemyHealth;

  if (playerHealth == 100) {
    cout << "Player health is full" << endl;
  } else {
    cout << "Someone damaged the player" << endl;
  }
  if (enemyHealth == 100) {
    cout << "Enemy health is full" << endl;
  } else {
    cout << "Player attacked the enemy" << endl;
  }

  // Task 2
  cout << "Task 2" << endl;
  cout << "Player's Health: ";
  cin >> playerHealth;

  if (playerHealth == 100) {
    cout << "Player health is Full" << endl;
  } else if (playerHealth == 50) {
    cout << "Player health is Half" << endl;
  } else if (playerHealth <= 0) {
    cout << "Player health is Zero" << endl;
  }

  // Task 3
  cout << "Task 3" << endl;
  cout << "Player's Health: ";
  cin >> playerHealth;

  if (playerHealth >= 0) {
    cout << "Enemy's Health: ";
    cin >> enemyHealth;
    if (enemyHealth == 100) {
      cout << "Enemy health is full." << endl;
    } else if (enemyHealth >= 50) {
      cout << "Enemy health is half." << endl;
    } else if (enemyHealth > 0) {
      cout << "Enemy health is low." << endl;
    }
  } else {
    cout << "Player died" << endl;
  }

  // Task 4
  cout << "Task 4" << endl;
  cout << "Player's Health: ";
  cin >> playerHealth;
  cout << "Enemy's Health: ";
  cin >> enemyHealth;

  if (playerHealth <= 0 || enemyHealth <= 0) {
    if (playerHealth <= 0) {
      cout << "Enemy won the battle." << endl;
    } else {
      cout << "Player won the battle." << endl;
    }
  }

  // Task 5
  cout << "Task 5" << endl;
  cout << "Player's Health: ";
  cin >> playerHealth;
  cout << "Enemy's Health: ";
  cin >> enemyHealth;

  if (playerHealth <= 0 && enemyHealth <= 0) {
    cout << "Game Over, its an draw.";
  }
}