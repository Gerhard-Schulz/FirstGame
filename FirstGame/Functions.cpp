#include <stdio.h>
#include <locale.h>
#include "Structs.cpp"

float calculate_health(person person)
{
	float health = person.skill.health * person.health;
	return health;
}

float calculate_damage(person person)
{
	float damage = person.skill.power * (person.power + (person.skill.weapon * person.weapon.quality * person.weapon.power));
	return damage;
}

float calculate_agility(person person)
{
	float agility = person.skill.agility * person.agility;
	return agility;
}

float calculate_intellect(person person)
{
	float intellect = person.skill.intellect * person.intellect;
	return intellect;
}

person set_default()
{
	person person;
	person.health = 50;
	return person;
}

void get_person_stats(person hero)
{
	printf("Жизненные силы: %f\t\n", calculate_health(hero));
	printf("Атака: %f\t\n", calculate_damage(hero));
	printf("Ловкость: %f\t\n", calculate_agility(hero));
	printf("Интелект: %f\t\n", calculate_intellect(hero));
	printf("Удача: %f\t\n", hero.luck);
}