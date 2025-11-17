#include "human.hpp"
#include <iomanip>
using namespace std;

Human::Human(const string& first, const string& last, 
             float score, int aptitude, const string& sector)
    : CrewMember(first, last, score, aptitude), homeSector(sector) {}

string Human::getHomeSector() const { return homeSector; }

void Human::setHomeSector(const string& sector) {
    homeSector = sector;
}

void Human::display() const {
    cout << *this;
}

ostream& operator<<(ostream& os, const Human& human) {
    os << "Human Crew Member:\n"
       << "  ID: " << human.id << "\n"
       << "  Name: " << human.firstName << " " << human.lastName << "\n"
       << "  Home Sector: " << human.homeSector << "\n"
       << "  Training Score: " << fixed << setprecision(1) << human.trainingScore << "\n"
       << "  Mission Aptitude: " << human.missionAptitude << "\n";
    return os;
}
