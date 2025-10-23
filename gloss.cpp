#include <iostream>
#include <iomanip>
using namespace std;

struct Gloss {
    string brand;
    double cost;
    string color;
    int color_code;
    string flavor;
    string texture;
    bool glitter;
};

int main() {
    Gloss lipgloss;
    string isglitter;

    cout << "What is the brand of the lipgloss? ";
    cin >> lipgloss.brand;

    cout << "What was the cost of the lipgloss? ";
    cin >> lipgloss.cost;

    cout << "What is the color of the lipgloss? ";
    cin >> lipgloss.color;

    cout << "What was the flavor of the lipgloss? ";
    cin >> lipgloss.flavor;

    cout << "What is the texture of the lipgloss? ";
    cin >> lipgloss.texture;

    cout << "Did the lipgloss have glitter? Enter 'yes' or 'no': ";
    cin >> isglitter;
    if (isglitter == "yes" || isglitter == "Yes") {
        lipgloss.glitter = true;
    } else {
        lipgloss.glitter = false;
    }

    // Display results
    cout << "\nBrand: " << lipgloss.brand;
    cout << "\nColor: " << lipgloss.color;
    cout << "\nFlavor: " << lipgloss.flavor;
    cout << "\nTexture: " << lipgloss.texture;

    if (lipgloss.glitter) {
        cout << "\nThe lipgloss does have glitter.";
    } else {
        cout << "\nThe lipgloss does not have glitter.";
    }

    cout << fixed << setprecision(2);
    cout << "\nPrice: $" << lipgloss.cost << "\n";

    return 0;
}