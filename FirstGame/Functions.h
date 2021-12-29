#pragma once

#include "Structs.cpp"

float calculate_health(person person);
float calculate_damage(person person);
float calculate_agility(person person);
float calculate_intellect(person person);
void get_person_stats(person hero);
weapon set_default_weapon_stats();
skill set_default_person_skills();
person set_default_person_stats();