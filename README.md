# ENSC 251 project stage 1

The project will read the text files Human-Crew.txt and Alien-Crew.txt and filter them depending on a user input.

crew can be filtered by first name, last name, training score, or mission aptitude.

Alternativly, crew can be filtered by an overall sort with the following priorities:
a) Primary key: MissionAptitude (descending).
b) Secondary key: TrainingScore (descending).
c) Tertiary key: Home sector (humans) or Homeworld (aliens), alphabetical.
d) For AlienCrew, exclude recruits with TelepathicLinkTest total < 15. 
